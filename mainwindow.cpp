#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel* betaLabel = new QLabel(this);
    betaLabel->setText("<h2 style=\"color:tomato;\">BETA TEST</h2>");
    betaLabel->move(575, 350);
    betaLabel->show();

    this->setFixedSize(this->size());

    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./schedle.db");
    if (!_db.open())
    {
        qDebug() << "Cannot open database" << _db.databaseName();
        QMessageBox::warning(this, "Внимание!", "Не удалось загрузить информацию о сотрудниках. Возможно, файл schedle.db был поврежден или перемещен. \n");
    }
    else
    {
        qDebug() << "Successful opening";
        qDebug() << "Initialization database components...";
    }
    _modelEmployee = new QSqlTableModel(this, _db);
    _modelEmployee->setTable("Employees");
    _modelEmployee->select();
    _modelSchedle = new QSqlTableModel(this, _db);
    _modelSchedle->setTable("days");
    _modelSchedle->select();
    _query = new QSqlQuery(_db);

    ui->tableView->setModel(_modelEmployee);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    qDebug() << "Reading file data...";

    readJson();
    readSchedleList();

    _daysOfFirstEmployee            = 0;
    _daysOfSecondEmployee           = 0;
    ui->dateEditOpen->setDate(_openWBPoint);
    ui->dateEditStartpoint->setDate(_startDate);
    _toolBar.setTool(ToolBar::Arrow);
    setStatusBarMessage();

    qDebug() << "Initialization class members...";

    ui->colorWidgetPayedDay->setColor(PAYED_DAY_HEX);
    ui->colorWidgetFinishedDay->setColor(FINISHED_DAY_HEX);
    ui->editEmployee1->setText(_employee1.name);
    ui->editEmployee2->setText(_employee2.name);

//    ui->editSalary->setText(QVariant(_salary).toString());

    ui->calendarWidget->setDateRange(_openWBPoint, QDate::currentDate().addYears(1));

    ui->editSalary->setValidator(new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,3}")));
    ui->editHex->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));
    ui->editColorPayedDay->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));
    ui->editColorFinishedDay->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));

    loadEditedDaysFromDB();
    calculateFinishedDays();
    updateCalendar();

//    connect(ui->colorWidgetPayedDay, &QPushButton::clicked, this, &MainWindow::takeColor);
//    connect(ui->colorWidgetFinishedDay, &QPushButton::clicked, this, &MainWindow::takeColor);
//    connect(ui->editSalary, &QLineEdit::textEdited, [this](){ fillTextBrowse(); });
    connect(ui->dateEditOpen, &QDateEdit::dateChanged, [this](){
        _openWBPoint = ui->dateEditOpen->date();
    });
    connect(ui->dateEditStartpoint, &QDateEdit::dateChanged, [this](){
        _startDate = ui->dateEditStartpoint->date();
    });
    connect(ui->calendarWidget, &QCalendarWidget::clicked, this, &MainWindow::doActionToolbar);
    connect(ui->buttonAdd, &QPushButton::clicked, this, &MainWindow::addEmployee);
    connect(ui->buttonRemove, &QPushButton::clicked, this, &MainWindow::removeEmployee);
    connect(ui->buttonEdit, &QPushButton::clicked, this, &MainWindow::updateEmployee);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::tableItemSelect);
    connect(ui->colorWidget, &QPushButton::clicked, [this](){
        ui->editHex->setText(QVariant(ui->colorWidget->getColor()).toString());
    });
    connect(ui->checkBoxShifts, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->checkBoxPayedDays, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->checkBoxFinishedDays, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->buttonSaveSettings, &QPushButton::clicked, this, &MainWindow::saveSettings);

    qDebug() << "Initialization of Toolbar...";

    /////////////////////// toolBar init ///////////////////////

    connect(ui->toolButtonArrow, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::Arrow);
        setStatusBarMessage();
    });
    connect(ui->toolButtonEmployees, &QAbstractButton::clicked, [this](){
        EmployeeDialog dialog(this, _modelEmployee, &_employee);
        if (dialog.exec() == EmployeeDialog::Accepted)
        {
            _toolBar.setTool(ToolBar::EmployeeTool);
            setStatusBarMessage();
        }
        else
        {
            qDebug() << "Failed";
        }
    });
    connect(ui->toolButtonSalary, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::SalaryTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonPaymentTarget, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::PaymentTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonPaymentGeneral, &QAbstractButton::clicked, [this](){
        payEverything();
        AlertWidget::showAlert("Все смены успешно оплачены!");
    });
    connect(ui->toolButtonClear, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::ClearTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonCalculate, &QAbstractButton::clicked, [this](){
        _editedDays.clear();
        resetCalendar();
        AlertWidget::showAlert("График перерасчитан!");
    });
    connect(ui->toolButtonSave, &QAbstractButton::clicked, [this](){
//        writeJson();

        _query->exec("DELETE FROM days");

        _query->prepare("INSERT INTO days (date, salary, employee, isPayed, isFinished) VALUES (?, ?, ?, ?, ?)");

        QList<QDate> list = _editedDays.keys();

        if (_db.transaction())
        {
            for (auto iter : list)
            {
                _query->addBindValue(iter.toString());
                _query->addBindValue(_editedDays[iter].salary);
                _query->addBindValue(_editedDays[iter].name);
                _query->addBindValue(_editedDays[iter].isPayed);
                _query->addBindValue(_editedDays[iter].isFinished);

                if (!_query->exec())
                {
                    qDebug() << _query->lastError().text();
                }
            }

            if (!_db.commit())
            {
                qDebug() << _db.lastError().text();
            }
        }

        qDebug() << "Records saved:" << list.size();

        AlertWidget::showAlert("Изменения сохранены");
    });
    connect(ui->toolButtonLoad, &QAbstractButton::clicked, [this](){
        loadEditedDaysFromDB();
        updateCalendar();
        ui->textBrowserShiftInfo->clear();
        AlertWidget::showAlert("Данные загружены");
    });
    connect(ui->toolButtonInfo, &QAbstractButton::clicked, [this](){
        QMessageBox::information(this, "Справка", "Справочная информация:");
    });

    ui->toolButtonArrow->setIcon(QIcon(":/image/toolBar/arrow.png"));
    ui->toolButtonEmployees->setIcon(QIcon(":/image/toolBar/employee.png"));
    ui->toolButtonSalary->setIcon(QIcon(":/image/toolBar/salary.png"));
    ui->toolButtonPaymentTarget->setIcon(QIcon(":/image/toolBar/paymentTarget.png"));
    ui->toolButtonPaymentGeneral->setIcon(QIcon(":/image/toolBar/paymentGeneral.png"));
    ui->toolButtonClear->setIcon(QIcon(":/image/toolBar/clear.png"));
    ui->toolButtonCalculate->setIcon(QIcon(":/image/toolBar/calculator.png"));
    ui->toolButtonSave->setIcon(QIcon(":/image/toolBar/save.png"));
    ui->toolButtonLoad->setIcon(QIcon(":/image/toolBar/load.png"));
    ui->toolButtonInfo->setIcon(QIcon(":/image/toolBar/info.png"));

    ui->toolButtonArrow->setToolTip("Выделение");
    ui->toolButtonEmployees->setToolTip("Выбрать сотрудника");
    ui->toolButtonSalary->setToolTip("Установить ставку");
    ui->toolButtonPaymentTarget->setToolTip("Оплатить конкретную смену");
    ui->toolButtonPaymentGeneral->setToolTip("Оплатить все смены");
    ui->toolButtonClear->setToolTip("Сбросить день");
    ui->toolButtonCalculate->setToolTip("Перерасчет графика");
    ui->toolButtonSave->setToolTip("Сохранить");
    ui->toolButtonLoad->setToolTip("Загрузить данные");
    ui->toolButtonInfo->setToolTip("Справка");
}

MainWindow::~MainWindow()
{
    delete ui->editSalary->validator();
    delete ui->editHex->validator();
    delete ui->editColorPayedDay->validator();
    delete ui->editColorFinishedDay->validator();
    delete ui;
}

void MainWindow::takeColor()                                                            // to rework
{
    /*QWidget* obj = qobject_cast<QWidget*>(sender());

    auto openColorDialog = [obj](EmployeeShift& e){

    };

    QVariant color;
    if (obj->objectName() == "widgetColor")
    {
        color = QColorDialog::getColor(QColor(_employee1.colorHex), this, "Выбор цвета");
        if (!color.isValid())
            return;
        _employee1.colorHex = color.toString();
    }
    else
    {
        color = QColorDialog::getColor(QColor(_employee2.colorHex), this, "Выбор цвета");               // DRY
        if (!color.isValid())
            return;
        _employee2.colorHex = color.toString();
    }
    obj->setStyleSheet("border: 1px solid; background: " + color.toString());

    //resetCalendar();
    updateCalendar();*/
}

void MainWindow::changeSchedle()
{
    if (ui->comboBoxSchedle->currentText() == "")
    {
        qDebug() << "Can't parse comboBox->currentText()";
        return;
    }

    auto reformatCalendar = [this](QDate startDate, int employeeDayCount, int allEmployeeDays, QTextCharFormat format, int lengthReformat){
        for (int i = 0; i < lengthReformat; i += allEmployeeDays)
        {
            for (int j = 0; j < employeeDayCount; j++)
            {
                QDate selectedDate(startDate.addDays(i + j));
                QString colorHex = QVariant(format.background().color()).toString();

                qint32 employeeCount = _modelEmployee->rowCount();
                for (int k = 0 ; k < employeeCount; k++)
                {
                    if (_modelEmployee->data(_modelEmployee->index(k, 2)).toString() == colorHex)
                    {
                        _editedDays[selectedDate].name = _modelEmployee->data(_modelEmployee->index(k, 0)).toString();
                        _editedDays[selectedDate].salary = _modelEmployee->data(_modelEmployee->index(k, 1)).toUInt();
                        _editedDays[selectedDate].colorHex = colorHex;
                    }
                }
                ui->calendarWidget->setDateTextFormat(selectedDate, format);
            }
        }
    };

    QTextCharFormat first, second, nobody;
    first.setForeground(Qt::black);
    first.setBackground(QColor(_employee1.colorHex));
    second.setForeground(Qt::black);
    second.setBackground(QColor(_employee2.colorHex));
    nobody.setForeground(Qt::black);
    nobody.setBackground(QColor(FINISHED_DAY_HEX));

    QStringList list = ui->comboBoxSchedle->currentText().split("/");

    int DAYS_FIRST_EMPLOYEE     = list.at(0).toInt();
    int DAYS_SECOND_EMPLOYEE    = list.at(1).toInt();
    int DAYS_ALL_EMPLOYEE       = DAYS_FIRST_EMPLOYEE + DAYS_SECOND_EMPLOYEE;


    reformatCalendar(_openWBPoint, 1, 1, nobody, _openWBPoint.daysTo(QDate::currentDate().addYears(1)));

    QDate date = ui->dateEditStartpoint->date();
    int yearAhead = date.daysTo(QDate::currentDate().addYears(1));

    reformatCalendar(date, DAYS_FIRST_EMPLOYEE, DAYS_ALL_EMPLOYEE, first, yearAhead);
    date = ui->dateEditStartpoint->date().addDays(DAYS_FIRST_EMPLOYEE);
    reformatCalendar(date, DAYS_SECOND_EMPLOYEE, DAYS_ALL_EMPLOYEE, second, yearAhead);

    for (auto iter : _editedDays.keys())
    {
        QTextCharFormat format;
        format.setForeground(Qt::black);

        if (_editedDays[iter].name == "")
        {
            format.setBackground(QColor(FINISHED_DAY_HEX));
        }
        else
        {
            format.setBackground(QColor(_editedDays[iter].colorHex));
        }
        if (_editedDays[iter].isPayed)
        {
            format.setBackground(QColor(PAYED_DAY_HEX));
        }

        ui->calendarWidget->setDateTextFormat(iter, format);
    }

    calculateWorks();
    fillTextBrowse();

    qDebug() << "Map size:" << _editedDays.count();
}

void MainWindow::updateCalendar()
{    
    for (auto iter : _editedDays.keys())
    {
        QTextCharFormat format;
        format.setForeground(Qt::black);
        format.setBackground(QColor(INCOMPLETE_DAY_HEX));

        if (_editedDays[iter].isFinished and ui->checkBoxFinishedDays->isChecked())
            format.setBackground(QColor(FINISHED_DAY_HEX));

        if (_editedDays[iter].isPayed and ui->checkBoxPayedDays->isChecked())
        {
            format.setBackground(QColor(PAYED_DAY_HEX));
        }
        else if (ui->checkBoxShifts->isChecked())
        {
            format.setBackground(QColor(_editedDays[iter].colorHex));
        }

        ui->calendarWidget->setDateTextFormat(iter, format);
    }
    calculateWorks();
    fillTextBrowse();
}

void MainWindow::resetCalendar()
{
    if (ui->comboBoxSchedle->currentText() == "")
    {
        qDebug() << "Can't parse comboBox->currentText()";
        return;
    }

    calculateFinishedDays();

    auto reformatCalendar = [this](QDate startDate, int employeeDayCount, int allEmployeeDays, EmployeeShift &shift, int lengthReformat){
        for (int i = 0; i < lengthReformat; i += allEmployeeDays)
        {
            for (int j = 0; j < employeeDayCount; j++)
            {
                QDate selectedDate(startDate.addDays(i + j));
                QString name = shift.name;

                qint32 employeeCount = _modelEmployee->rowCount();
                for (int k = 0 ; k < employeeCount; k++)
                {
                    if (name == _modelEmployee->data(_modelEmployee->index(k, DB_TABLE_EMPLOYEE_NAME)).toString())
                    {
                        _editedDays[selectedDate].name = name;
                        _editedDays[selectedDate].salary = _modelEmployee->data(_modelEmployee->index(k, DB_TABLE_EMPLOYEE_SALARY)).toUInt();
                        _editedDays[selectedDate].colorHex = _modelEmployee->data(_modelEmployee->index(k, DB_TABLE_EMPLOYEE_COLOR)).toString();
                    }
                    else if (name == "")
                    {
                        EmployeeShift empty;
                        _editedDays[selectedDate] = empty;
                    }
                }
            }
        }
    };

    QDate date = _startDate;
    QStringList shiftList = ui->comboBoxSchedle->currentText().split("/");

    int DAYS_FIRST_EMPLOYEE     = shiftList.at(0).toInt();
    int DAYS_SECOND_EMPLOYEE    = shiftList.at(1).toInt();
    int DAYS_ALL_EMPLOYEE       = DAYS_FIRST_EMPLOYEE + DAYS_SECOND_EMPLOYEE;
    int LENGTH_REFORMAT         = date.daysTo(QDate::currentDate().addYears(1));

    EmployeeShift empty, first, second;

    first   = _employee1;
    second  = _employee2;

    reformatCalendar(_openWBPoint, 1, 1, empty, _openWBPoint.daysTo(QDate::currentDate().addYears(1)));
    reformatCalendar(date, DAYS_FIRST_EMPLOYEE, DAYS_ALL_EMPLOYEE, first, LENGTH_REFORMAT);
    date = _startDate.addDays(DAYS_FIRST_EMPLOYEE);
    reformatCalendar(date, DAYS_SECOND_EMPLOYEE, DAYS_ALL_EMPLOYEE, second, LENGTH_REFORMAT);

    updateCalendar();
}

void MainWindow::payEverything()
{
    QDate date;
    if (QTime::currentTime().hour() < END_OF_SHIFT)
        date = QDate::currentDate().addDays(-1);
    else
        date = QDate::currentDate();

    for (int i = 1; i <= _lastPayday.daysTo(date); i++)
    {
        _editedDays[_lastPayday.addDays(i)].isPayed = true;
    }

    updateCalendar();
    calculateWorks();
    fillTextBrowse();
}

void MainWindow::setStatusBarMessage()
{
    switch(_toolBar.getTool())
    {
    case ToolBar::Arrow:
        ui->statusBar->showMessage("Выбран инструмент \"Выделить\"");
        break;
    case ToolBar::EmployeeTool:
        ui->statusBar->showMessage("Выбран инструмент \"Сотрудник\" / " + _employee.name);
        break;
    case ToolBar::SalaryTool:
        ui->statusBar->showMessage("Выбран инструмент \"Ставка\"");
        break;
    case ToolBar::PaymentTool:
        ui->statusBar->showMessage("Выбран инструмент \"Оплата\"");
        break;
    case ToolBar::ClearTool:
        ui->statusBar->showMessage("Выбран инструмент \"Очистка\"");
        break;
    default:
        ui->statusBar->showMessage("Selected unknown tool");
    }
}

void MainWindow::doActionToolbar()
{
    QDate date = ui->calendarWidget->selectedDate();

    switch(_toolBar.getTool())
    {
    case ToolBar::Arrow:
        break;
    case ToolBar::EmployeeTool:
        _editedDays[date].name      = _employee.name;
        _editedDays[date].colorHex  = _employee.colorHex;
        _editedDays[date].salary    = _employee.salary;
        break;
    case ToolBar::SalaryTool:
        _editedDays[date].salary = ui->editSalary->text().toUInt();
        break;
    case ToolBar::PaymentTool:
        _editedDays[date].isPayed = true;
        break;
    case ToolBar::ClearTool:
        _editedDays[date].name      = "";
        _editedDays[date].colorHex  = QVariant(QColor(FINISHED_DAY_HEX)).toString();
        _editedDays[date].salary    = 0;
        _editedDays[date].isPayed   = false;
        break;
    default:
        QMessageBox::critical(this, "Error", "Unkwonw tool selected");
    }

    updateCalendar();

    ui->textBrowserShiftInfo->setText(QString("Сотрудник %2\nДата: %1\nСтавка: %3\nСтатус смены: %4\nДень: %5")
                                      .arg(date.toString("dd.MM.yy"))
                                      .arg(_editedDays[date].name)
                                      .arg(_editedDays[date].salary)
                                      .arg(_editedDays[date].isPayed)
                                      .arg(_editedDays[date].isFinished));

    qDebug() << "Selected date" << date.toString("dd.MM.yyyy") << "info:";
    qDebug() << "\tEmployee name is" << _editedDays[date].name;
    qDebug() << "\tEmployee color is" << _editedDays[date].colorHex;
    qDebug() << "\tEmployee salary is" << _editedDays[date].salary;
    qDebug() << "\tThis shift is payed" << _editedDays[date].isPayed;
    qDebug() << "\tThis shift is finished" << _editedDays[date].isFinished;
}

void MainWindow::addEmployee()
{
    if (_db.transaction())
    {
        QString query = QString("INSERT INTO Employees VALUES (\'%1\', %2, \'%3\');")
                .arg(ui->editEmployeeName->text())
                .arg(ui->editSalary->text().toUInt())
                .arg(ui->editHex->text());
        _query->exec(query);

        qDebug() << "Query:" << query;

        if (!_db.commit())
        {
            qDebug() << "Failed while insert record";
        }
    }

    _modelEmployee->select();
}

void MainWindow::removeEmployee()
{
    QString query = QString("DELETE FROM Employees WHERE name = \'%1\';")
            .arg(ui->editEmployeeName->text());
    _query->exec(query);

    qDebug() << "Query:" << query;

    ui->editEmployeeName->clear();
    ui->editHex->clear();
    ui->editSalary->clear();
    ui->colorWidget->clear();

    _modelEmployee->select();
}

void MainWindow::updateEmployee()
{
    QString query = QString("UPDATE Employees SET salary = %1, color = \'%2\' WHERE name = \'%3\';")
            .arg(ui->editSalary->text().toUInt())
            .arg(ui->editHex->text())
            .arg(ui->editEmployeeName->text());
    _query->exec(query);

    qDebug() << "Query:" << query;

    updateCalendar();

    _modelEmployee->select();
}

void MainWindow::tableItemSelect(const QModelIndex &index)
{
    int id = index.row();
    QString colorHex = _modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_COLOR)).toString();

    ui->editEmployeeName->setText(_modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_NAME)).toString());
    ui->editSalary->setText(_modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_SALARY)).toString());
    ui->editHex->setText(colorHex);
    ui->colorWidget->setColor(colorHex);
}

void MainWindow::saveSettings()
{
    writeJson();

    QMessageBox::information(this, "Успешный успех", "Настройки были успешно сохранены. Перезапустите программу, чтобы изменения вступили в силу.");
}

void MainWindow::calculateWorks()
{
    int days                = _lastPayday.daysTo(QDate::currentDate());
    _employees.clear();

    if (QTime::currentTime().hour() >= END_OF_SHIFT)
        days++;

    for (int i = 1; i < days; i++)
    {
        QDate date = _lastPayday.addDays(i);
        QString name = _editedDays[date].name;
        if (!_editedDays[date].isPayed)
        {
            _employees[name].salary += _editedDays[date].salary;
            _employees[name].shifts++;
        }
    }
}

void MainWindow::calculateFinishedDays()
{
    qDebug() << "Calculating days...";

    int days        = _openWBPoint.daysTo(QDate::currentDate());

    if (QTime::currentTime().hour() >= END_OF_SHIFT)
        days++;

    for (int i = 0; i < days; i++)
    {
        QDate date = _openWBPoint.addDays(i);
        _editedDays[date].isFinished = true;
    }
}

void MainWindow::fillTextBrowse()
{
    ui->textBrowserLoggs->clear();

    if (_employees.isEmpty())
    {
        ui->textBrowserLoggs->setText("Долгов по выплатам нет");
        return;
    }

    for (auto iter : _employees.keys())
    {
        if (iter == "")
            continue;
        ui->textBrowserLoggs->append("Сотрудник <b>" + iter + "</b>");
        ui->textBrowserLoggs->append("   Заработано: " + QVariant(_employees[iter].salary).toString() + " руб.");
        ui->textBrowserLoggs->append("   Смен: " + QVariant(_employees[iter].shifts).toString());
    }
}

void MainWindow::writeJson()
{
    QFile json("schedle.json");
    if (!json.open(QIODevice::WriteOnly))
    {
        qDebug() << "File write error:" << json.errorString();
        return;
    }
    QJsonObject jObject;

    jObject["FirstEmployee"]    = ui->editEmployee1->text();
    jObject["SecondEmployee"]   = ui->editEmployee2->text();
    jObject["PayedDayColor"]    = _employee1.colorHex;
    jObject["FinishedDayColor"] = _employee2.colorHex;
    jObject["StartDate"]        = _startDate.toString();
    jObject["OpenDate"]         = _openWBPoint.toString();
    jObject["lastPayday"]       = _lastPayday.toString();

    QJsonDocument jDoc(jObject);
    json.write(jDoc.toJson());
    json.close();
}

void MainWindow::readJson()
{
    QFile json("schedle.json");
    if (!json.open(QIODevice::ReadOnly))
    {
        qDebug() << "File write error:" << json.errorString();
        return;
    }
    QJsonObject jObject = QJsonDocument::fromJson(json.readAll()).object();
    json.close();

    _employee1.name     = jObject["FirstEmployee"].toString();
    _employee2.name     = jObject["SecondEmployee"].toString();
    _employee1.colorHex = jObject["PayedDayColor"].toString();
    _employee2.colorHex = jObject["FinishedDayColor"].toString();
    _lastPayday         = QDate::fromString(jObject["lastPayday"].toString());
    _startDate          = QDate::fromString(jObject["StartDate"].toString());
    _openWBPoint        = QDate::fromString(jObject["OpenDate"].toString());
}

void MainWindow::readSchedleList()
{
    QFile file("schedle.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File " + file.fileName() + " not found";
        return;
    }
    ui->comboBoxSchedle->addItems(QString(file.readAll()).split("\n"));
    file.close();
}

void MainWindow::loadCalendarStyle()
{
    QFile file("style.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File not found";
        return;
    }
    ui->calendarWidget->setStyleSheet(file.readAll());
    file.close();
}

void MainWindow::loadEditedDaysFromDB()
{
    qDebug() << "Loading data from database...";

    _modelEmployee->select();
    _query->exec("SELECT * FROM days");

    int days        = 0;
    int employees   = _modelEmployee->rowCount();

    for (int i = 0; _query->next(); i++)
    {
        QDate date = QDate::fromString(_query->value(DB_TABLE_DAYS_DATE).toString());

        _editedDays[date].name          = _query->value(DB_TABLE_DAYS_EMPLOYEE).toString();
        _editedDays[date].salary        = _query->value(DB_TABLE_DAYS_SALARY).toUInt();
        _editedDays[date].isPayed       = _query->value(DB_TABLE_DAYS_ISPAYED).toBool();
        _editedDays[date].isFinished    = _query->value(DB_TABLE_DAYS_ISPAYED).toBool();

        for (int j = 0; j < employees; j++)
        {
            if (_editedDays[date].name == _modelEmployee->data(_modelEmployee->index(j, DB_TABLE_EMPLOYEE_NAME)))
            {
                _editedDays[date].colorHex = _modelEmployee->data(_modelEmployee->index(j, DB_TABLE_EMPLOYEE_COLOR)).toString();
            }
        }
        days++;
    }

    qDebug() << "Rows loaded from DAYS:" << days;
    qDebug() << "Rows loaded from EMPLOYEES:" << employees;
}
