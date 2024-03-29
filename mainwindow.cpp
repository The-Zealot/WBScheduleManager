#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const QString &databaseName, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());
    ui->toolButtonRequestEditor->setVisible(false);
    ui->tabWidget->setCurrentIndex(0);

    int sizeButton = 24;
    _buttonHelp = new QPushButton(this);
    _buttonHelp->setGeometry(this->width() - sizeButton, 0, sizeButton, sizeButton);
    _buttonHelp->setFlat(true);
    _buttonHelp->show();
    _buttonHelp->setIcon(QIcon(":/image/icons/help.png"));
    _buttonHelp->setToolTip("Справка");

    _buttonBugReport = new QPushButton(this);
    _buttonBugReport->setGeometry(this->width() - sizeButton * 2, 0, sizeButton, sizeButton);
    _buttonBugReport->show();
    _buttonBugReport->setFlat(true);
    _buttonBugReport->setIcon(QIcon(":/image/icons/bugReport.png"));
    _buttonBugReport->setToolTip("Сообщить об ошибке");

    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName(databaseName);
    if (!_db.open())
    {
        qDebug() << "Cannot open database" << _db.databaseName();
        QMessageBox::warning(this, "Внимание!", "Не удалось загрузить информацию о сотрудниках.\n");
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
    _modelPoint = new QSqlTableModel(this, _db);
    _modelPoint->setTable("points");
    _modelPoint->select();
    _query = new QSqlQuery(_db);

    _modelEmployee->setHeaderData(DB_TABLE_EMPLOYEE_NAME, Qt::Horizontal, QVariant("Сотрудник"));
    _modelEmployee->setHeaderData(DB_TABLE_EMPLOYEE_SALARY, Qt::Horizontal, QVariant("Ставка"));
    _modelEmployee->setHeaderData(DB_TABLE_EMPLOYEE_COLOR, Qt::Horizontal, QVariant("Цвет"));

    _modelPoint->setHeaderData(DB_TABLE_POINTS_NAME, Qt::Horizontal, QVariant("Название"));
    _modelPoint->setHeaderData(DB_TABLE_POINTS_MARKET, Qt::Horizontal, QVariant("Площадка"));
    _modelPoint->setHeaderData(DB_TABLE_POINTS_EMPLOYEE1, Qt::Horizontal, QVariant("Cотрудник 1"));
    _modelPoint->setHeaderData(DB_TABLE_POINTS_EMPLOYEE2, Qt::Horizontal, QVariant("Сотрудник 2"));
    _modelPoint->setHeaderData(DB_TABLE_POINTS_SCHEDULE, Qt::Horizontal, QVariant("График"));

    ui->tableView->setModel(_modelEmployee);
    ui->tableView->hideColumn(DB_TABLE_EMPLOYEE_ID);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableViewPoints->setModel(_modelPoint);
    ui->tableViewPoints->hideColumn(DB_TABLE_POINTS_ID);
    ui->tableViewPoints->hideColumn(DB_TABLE_POINTS_OPEN_DATE);
    ui->tableViewPoints->hideColumn(DB_TABLE_POINTS_START_DATE);
    ui->tableViewPoints->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->convertFrame->setVisible(false);

    updatePointList();

    qDebug() << "Reading file data...";

    readJson();                                                                         // rework

    ui->labelNews->setText(readFile("readme.html"));

    _pointID                = 0;
    _salary                 = 1300;
    _daysOfFirstEmployee    = 0;
    _daysOfSecondEmployee   = 0;

    ui->editExcelExportPath->setText(_excelExportPath);
    if (_excelExportPath.isEmpty())
    {
        _excelExportPath = QDir::homePath();
    }

    loadPointData(_pointID);

    _toolBar.setTool(ToolBar::Arrow);
    setStatusBarMessage();

    QString versionString = QVariant(MAJOR).toString() + "." + QVariant(MINOR).toString() + "." + QVariant(RELEASE).toString();
    versionString.append(" build " + QVariant(BUILD).toString());
    ui->labelVersion->setText("soft version " + versionString);

    qDebug() << "Initialization class members...";

    ui->colorWidget->setLineEdit(ui->editHex);
    ui->colorWidgetPayedDay->setLineEdit(ui->editColorPayedDay);
    ui->colorWidgetFinishedDay->setLineEdit(ui->editColorFinishedDay);
    ui->colorWidgetHoliday->setLineEdit(ui->editColorHoliday);
    ui->colorWidgetWorkDay->setLineEdit(ui->editColorWorkDay);

    ui->colorWidgetPayedDay->setColor(PAYED_DAY_HEX);
    ui->colorWidgetFinishedDay->setColor(FINISHED_DAY_HEX);
    ui->colorWidgetWorkDay->setColor(WORK_DAY_HEX);
    ui->colorWidgetHoliday->setColor(HOLIDAY_HEX);

    ui->textBrowserStats->setFontFamily("consolas");

    ui->calendarWidget->setDateRange(_openWBPoint, QDate::currentDate().addYears(1));

    ui->editSalary->setValidator(new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,3}")));
    ui->editHex->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));
    ui->editColorPayedDay->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));
    ui->editColorFinishedDay->setValidator(new QRegularExpressionValidator(QRegularExpression("#[a-f0-9]{6}")));
    ui->editPointName->setValidator(new QRegularExpressionValidator(QRegularExpression("\\S[0-9a-zA-zА-яа-я ]{255}")));

    loadEditedDaysFromDB(_pointID, _editedDays);
    updateCalendar();
    showDataOfSelectedDay();

    connect(ui->colorWidgetPayedDay, &QPushButton::clicked, [this](){
        PAYED_DAY_HEX = QVariant(ui->colorWidgetPayedDay->getColor()).toString();
    });
    connect(ui->colorWidgetFinishedDay, &QPushButton::clicked, [this](){
        FINISHED_DAY_HEX = QVariant(ui->colorWidgetFinishedDay->getColor()).toString();
    });
    connect(ui->calendarWidget, &QCalendarWidget::clicked, this, &MainWindow::doActionToolbar);
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged, this, &MainWindow::showDataOfSelectedDay);
    connect(ui->buttonAdd, &QPushButton::clicked, this, &MainWindow::addEmployee);
    connect(ui->buttonRemove, &QPushButton::clicked, this, &MainWindow::removeEmployee);
    connect(ui->buttonEdit, &QPushButton::clicked, this, &MainWindow::updateEmployee);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::tableItemSelect);
    connect(ui->checkBoxShifts, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->checkBoxPayedDays, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->checkBoxFinishedDays, &QCheckBox::clicked, this, &MainWindow::updateCalendar);
    connect(ui->buttonSaveSettings, &QPushButton::clicked, this, &MainWindow::saveSettings);
    connect(ui->tableViewPoints, &QTableView::clicked, [this](){
        int row = ui->tableViewPoints->currentIndex().row();
        QString pointName = _modelPoint->data(_modelPoint->index(row, DB_TABLE_POINTS_NAME)).toString();

        ui->editPointName->setText(pointName);
    });
    connect(ui->tableViewPoints, &QTableView::doubleClicked, this, &MainWindow::editPointData);
    connect(ui->buttonDeletePoint, &QPushButton::clicked, this, &MainWindow::removePoint);
    connect(ui->buttonAddPoint, &QPushButton::clicked, this, &MainWindow::addPoint);
    connect(ui->comboBoxPoint, &QComboBox::currentIndexChanged, this, &MainWindow::changePoint);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::calculateStats);

    connect(ui->comboBoxSchedule, &QComboBox::currentTextChanged, this, &MainWindow::changeSchedule);
    connect(ui->buttonDeleteSchedule, &QAbstractButton::clicked, [this](){
        ui->comboBoxSchedule->removeItem(ui->comboBoxSchedule->currentIndex());
    });
    connect(ui->buttonAddSchedule, &QAbstractButton::clicked, [this](){
        ui->comboBoxSchedule->addItem(ui->labelSchedule->text());
    });
    connect(ui->sliderFirst, &QSlider::valueChanged, this, &MainWindow::onSliderValueChanged);
    connect(ui->sliderSecond, &QSlider::valueChanged, this, &MainWindow::onSliderValueChanged);
    connect(ui->toolButtonSelectExcelExportPath, &QAbstractButton::clicked, [this](){
        ui->editExcelExportPath->setText(QFileDialog::getExistingDirectory(this, "Выбор папки"));
    });

    readScheduleList();

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
        SalaryDialog dialog(this, &_salary);
        if (dialog.exec() == SalaryDialog::Accepted)
        {
        _toolBar.setTool(ToolBar::SalaryTool);
        setStatusBarMessage();
        }
        else
        {
            qDebug() << "Failed";
        }
    });
    connect(ui->toolButtonPaymentTarget, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::PaymentTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonPaymentGeneral, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::GeneralPaymentTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonClear, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::ClearTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonCalculate, &QAbstractButton::clicked, [this](){
        _toolBar.setTool(ToolBar::CalcDateTool);
        setStatusBarMessage();
    });
    connect(ui->toolButtonSave, &QAbstractButton::clicked, [this](){
        QList<QDate> list = _editedDays.keys();

        if (_db.transaction())
        {
            for (auto iter : list)
            {
                QString query = "INSERT INTO days (date, salary, employee, isPayed, isFinished, point_id)"
                                "VALUES (\'%1\', %2, \'%3\', %4, %5, %6)"
                                "ON CONFLICT (date, point_id)"
                                "DO UPDATE SET date = \'%1\', salary = %2, employee = \'%3\', isPayed = %4, isFinished = %5, point_id = %6;";

                query = query
                        .arg(iter.toString())
                        .arg(_editedDays[iter].salary)
                        .arg(_editedDays[iter].name)
                        .arg(_editedDays[iter].isPayed)
                        .arg(_editedDays[iter].isFinished)
                        .arg(_pointID);

                if (!_query->exec(query))
                {
                    qDebug() << _query->lastError().text();
                }
            }

            if (!_db.commit())
            {
                qDebug() << _db.lastError().text();
            }
            else
            {
                 AlertWidget::showAlert("Изменения сохранены");
            }
        }

        qDebug() << "Records processed:" << list.size();
    });
    connect(ui->toolButtonLoad, &QAbstractButton::clicked, [this](){
        loadEditedDaysFromDB(_pointID, _editedDays);
        updateCalendar();
        showDataOfSelectedDay();
        AlertWidget::showAlert("Данные загружены");
    });
    connect(_buttonHelp, &QAbstractButton::clicked, this, &MainWindow::openDocInfo);
    connect(_buttonBugReport, &QAbstractButton::clicked, [this](){
        AlertWidget::showAlert("In development");
    });
    connect(ui->toolButtonReset, &QAbstractButton::clicked, [this](){
        resetCalendar(_editedDays, _startDate);
        AlertWidget::showAlert("Данные сброшены");
    });
    connect(ui->toolButtonServerLoad, &QAbstractButton::clicked, [this](){
        AlertWidget::showAlert("In development");
    });
    connect(ui->toolButtonExportToExcel, &QAbstractButton::clicked, [this](){
        ExcelExportDialog dialog(this);
        dialog.setPointName(ui->comboBoxPoint->currentText());
        dialog.setDateBound(_openWBPoint, _startDate);
        dialog.setEmployeeShifts(_editedDays);
        dialog.setEmployeeList(_employees);
        dialog.setRootPath(_excelExportPath);
        dialog.exec();
    });
    connect(ui->toolButtonRequestEditor, &QAbstractButton::clicked, [this](){
        RequestEditDialog dialog(this);
        dialog.exec();
    });
}

MainWindow::~MainWindow()
{
    delete ui->editSalary->validator();
    delete ui->editHex->validator();
    delete ui->editColorPayedDay->validator();
    delete ui->editColorFinishedDay->validator();
    delete ui->editPointName->validator();
    delete ui;
}

void MainWindow::takeColor(QLineEdit* edit)                                                            // to rework ???
{
    ColorWidget* obj = qobject_cast<ColorWidget*>(this->sender());

    qDebug() << edit->objectName();

    edit->setText(QVariant(obj->getColor()).toString());

    updateCalendar();
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
    calculateWorks(_editedDays, _employees);
    fillTextBrowse(_employees);
}

void MainWindow::resetCalendar(QMap<QDate, EmployeeShift> &editDays, QDate date, bool isFullReset)
{
    if (_scheduleText == "")
    {
        qDebug() << "Can't parse comboBox->currentText()";
        return;
    }

    auto reformatCalendar = [this, &editDays](QDate startDate, int employeeDayCount, int allEmployeeDays, EmployeeShift &shift, int lengthReformat){
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
                        editDays[selectedDate].name      = name;
                        editDays[selectedDate].salary    = _modelEmployee->data(_modelEmployee->index(k, DB_TABLE_EMPLOYEE_SALARY)).toUInt();
                        editDays[selectedDate].colorHex  = _modelEmployee->data(_modelEmployee->index(k, DB_TABLE_EMPLOYEE_COLOR)).toString();
                    }
                    else if (name == "")
                    {
                        EmployeeShift empty;
                        editDays[selectedDate] = empty;
                    }
                }
            }
        }
    };

    QStringList shiftList = _scheduleText.split("/");

    int DAYS_FIRST_EMPLOYEE     = shiftList.at(0).toInt();
    int DAYS_SECOND_EMPLOYEE    = shiftList.at(1).toInt();
    int DAYS_ALL_EMPLOYEE       = DAYS_FIRST_EMPLOYEE + DAYS_SECOND_EMPLOYEE;
    int LENGTH_REFORMAT         = date.daysTo(QDate::currentDate().addYears(1));

    EmployeeShift empty, first, second;

    first   = _employee1;
    second  = _employee2;

    qDebug() << "Start reforamting...";

    ui->calendarWidget->setDateRange(_openWBPoint, QDate::currentDate().addYears(1));

    if (isFullReset)
    {
        qDebug() << "Reseting calendar...";
        editDays.clear();
        reformatCalendar(_openWBPoint, 1, 1, empty, _openWBPoint.daysTo(QDate::currentDate().addYears(1)));
    }
    reformatCalendar(date, DAYS_FIRST_EMPLOYEE, DAYS_ALL_EMPLOYEE, first, LENGTH_REFORMAT);
    date = date.addDays(DAYS_FIRST_EMPLOYEE);
    reformatCalendar(date, DAYS_SECOND_EMPLOYEE, DAYS_ALL_EMPLOYEE, second, LENGTH_REFORMAT);

    qDebug() << "Calculating finished days...";

    calculateFinishedDays(_editedDays);
    updateCalendar();
}

void MainWindow::payEverything(QDate date)
{
//    if (QTime::currentTime().hour() < END_OF_SHIFT)
//        date = date.addDays(-1);

    for (int i = 0; i <= _startDate.daysTo(date); i++)
    {
        _editedDays[_startDate.addDays(i)].isPayed = true;
    }

    updateCalendar();
    calculateWorks(_editedDays, _employees);
    fillTextBrowse(_employees);
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
        ui->statusBar->showMessage("Выбран инструмент \"Ставка\" / " + QVariant(_salary).toString() + " руб.");
        break;
    case ToolBar::PaymentTool:
        ui->statusBar->showMessage("Выбран инструмент \"Оплата\"");
        break;
    case ToolBar::ClearTool:
        ui->statusBar->showMessage("Выбран инструмент \"Очистка\"");
        break;
    case ToolBar::CalcDateTool:
            ui->statusBar->showMessage("Выбор начальной точки расчета (даты)");
        break;
    case ToolBar::GeneralPaymentTool:
        ui->statusBar->showMessage("Выбор конечной даты для оплаты");
        break;
    default:
        ui->statusBar->showMessage("Selected unknown tool");
    }
}

void MainWindow::showDataOfSelectedDay()
{
    QDate date = ui->calendarWidget->selectedDate();

    QString isPayed, isFinished;
    _editedDays[date].isPayed ? isPayed = "Оплачена" : isPayed = "Не оплачена";
    _editedDays[date].isFinished ? isFinished = "Окончен" : isFinished = "Не окончен";

    QString info = "Сотрудник: %2 <span style=\"color:%7\">●</span><p/>Пункт: %6<p/>Дата: %1<p/>Стоимость дня: %3 руб.<p/>Статус смены: %4<p/>Статус дня: %5";
    ui->textBrowserShiftInfo->setText(info
                                      .arg(date.toString("dd.MM.yy"))
                                      .arg(_editedDays[date].name)
                                      .arg(_editedDays[date].salary)
                                      .arg(isPayed)
                                      .arg(isFinished)
                                      .arg(ui->comboBoxPoint->currentText())
                                      .arg(_editedDays[date].colorHex));

    qDebug() << "Selected date" << date.toString("dd.MM.yyyy") << "info:";
    qDebug() << "\tEmployee name is" << _editedDays[date].name;
    qDebug() << "\tEmployee color is" << _editedDays[date].colorHex;
    qDebug() << "\tDay cost is" << _editedDays[date].salary;
    qDebug() << "\tThis shift is payed" << _editedDays[date].isPayed;
    qDebug() << "\tThis shift is finished" << _editedDays[date].isFinished;
}

void MainWindow::doActionToolbar()
{
    QDate date = ui->calendarWidget->selectedDate();

    auto temp = _editedDays[date];                                      // variable for logger

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
        _editedDays[date].salary    = _salary;
        break;
    case ToolBar::PaymentTool:
        _editedDays[date].isPayed   = true;
        break;
    case ToolBar::ClearTool:
        _editedDays[date].name      = "";
        _editedDays[date].colorHex  = QVariant(QColor(FINISHED_DAY_HEX)).toString();
        _editedDays[date].salary    = 0;
        _editedDays[date].isPayed   = false;
        break;
    case ToolBar::CalcDateTool:
        resetCalendar(_editedDays, date, false);
        AlertWidget::showAlert("График перерасчитан!");
        break;
    case ToolBar::GeneralPaymentTool:
        payEverything(date);
        AlertWidget::showAlert("Смены оплачены");
        break;
    default:
        QMessageBox::critical(this, "Error", "Unkwonw tool selected");
    }

    QString logRecord;
    if (_toolBar.getTool() != ToolBar::Arrow)
    {
        logRecord.append("Edited date: " + date.toString("dd.MM.yyyy"));
        logRecord.append("| switch: Name        " + temp.name + " to " + _editedDays[date].name);
        logRecord.append("| switch: Day cost    " + QVariant(temp.salary).toString() + " to " + QVariant(_editedDays[date].salary).toString());
        logRecord.append("| switch: Shift state " + QVariant(temp.isPayed).toString() + " to " + QVariant(_editedDays[date].isPayed).toString());
        logRecord.append("| end;");
    }
                                                                                                // TODO
    _log.append(logRecord);                                                                     // logging

    updateCalendar();

    showDataOfSelectedDay();
}

void MainWindow::updatePointList()
{
    ui->comboBoxPoint->clear();
    int pointCount = _modelPoint->rowCount();
    for (int i = 0; i < pointCount; i++)
        ui->comboBoxPoint->addItem(_modelPoint->data(_modelPoint->index(i, DB_TABLE_POINTS_NAME)).toString());
}

void MainWindow::addEmployee()
{
    if (_db.transaction())
    {
        QString query = QString("INSERT INTO Employees (name, salary, color) VALUES (\'%1\', %2, \'%3\');")
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
    QString messageText = "Вы собираетесь удалить сотрудника %1. Обратите внимание, что это действие необратимо.\nПродолжить?";
    messageText = messageText.arg(ui->editEmployeeName->text());
    if (QMessageBox::warning(this, "Удаление сотрудника", messageText, QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Ok)
    {

        QString query = QString("DELETE FROM Employees WHERE id = \'%1\';")
                .arg(_employeeID);
        _query->exec(query);

        qDebug() << "Query:" << query;

        ui->editEmployeeName->clear();
        ui->editHex->clear();
        ui->editSalary->clear();
        ui->colorWidget->clear();

        _modelEmployee->select();
    }
}

void MainWindow::updateEmployee()
{
    if (ui->editEmployeeName->text().isEmpty())
    {
        qDebug() << "No selected employee";
        return;
    }

    QString query = QString("UPDATE Employees SET salary = %1, color = \'%2\', name = \'%3\' WHERE id = %4;")
            .arg(ui->editSalary->text())
            .arg(ui->editHex->text())
            .arg(ui->editEmployeeName->text())
            .arg(_employeeID);
    _query->exec(query);

    qDebug() << "Query:" << query;

    updateCalendar();

    _modelEmployee->select();
}

void MainWindow::tableItemSelect(const QModelIndex &index)
{
    int id              = index.row();
    QString colorHex    = _modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_COLOR)).toString();
    _employeeID         = _modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_ID)).toUInt();

    ui->editEmployeeName->setText(_modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_NAME)).toString());
    ui->editSalary->setText(_modelEmployee->data(_modelEmployee->index(id, DB_TABLE_EMPLOYEE_SALARY)).toString());
    ui->colorWidget->setColor(colorHex);
}

void MainWindow::addPoint()
{
    if (ui->editPointName->text().isEmpty())
    {
        qDebug() << "Invalid name";
        return;
    }

    QString query       = "INSERT INTO points (name, open_date, start_date) VALUES (\'%1\', \'%2\', \'%3\');";
    QString name        = ui->editPointName->text();
    QString today       = QDate::currentDate().toString();

    query = query.arg(name).arg(today).arg(today);

    qDebug() << "Insert record into points...";
    if (!_query->exec(query))
    {
        qDebug() << "Failed.";
        QMessageBox::warning(this, "Внимание", "Упс! Что-то пошло не так.");
        return;
    }

    ui->editPointName->clear();
    _modelPoint->select();

    updatePointList();
}

void MainWindow::removePoint()
{
    DeleteDialog dialog(this);

    int row             = ui->tableViewPoints->currentIndex().row();
    QString pointName   = _modelPoint->data(_modelPoint->index(row, DB_TABLE_POINTS_NAME)).toString();
    int pointID         = _modelPoint->data(_modelPoint->index(row, DB_TABLE_POINTS_ID)).toInt();

    dialog.setText("Внимание! Вы собираетесь удалить элемент из списка пунктов выдачи. Данное действие необратимо.\n"
                    "Вы действительно хотите продолжить?");
    dialog.setConfirmedString(pointName);
    if (dialog.getConfirmedString().isEmpty())
    {
        qDebug() << "Item has not been selected";
        return;
    }
    if (dialog.exec() == DeleteDialog::Accepted)
    {
        QString query = "DELETE FROM points WHERE id = \'%1\';";

        if (_query->exec(query.arg(pointID)))
        {
            qDebug() << pointName << "has been deleted";
        }

        query = "DELETE FROM days WHERE point_id = %1";
        if (_query->exec(query.arg(pointID)))
        {
            qDebug() << "Table days fixed";
        }

        ui->editPointName->clear();
        _modelPoint->select();
    }

    updatePointList();
}

void MainWindow::changePoint()
{
    int selectedPoint = ui->comboBoxPoint->currentIndex();

    loadPointData(selectedPoint);

    qDebug() << "Set current point id = " << selectedPoint;

    qDebug() << "Loading data...";
    loadEditedDaysFromDB(_pointID, _editedDays);

    qDebug() << "Updating calendar...";
    updateCalendar();
    showDataOfSelectedDay();
}

void MainWindow::saveSettings()
{
    writeJson();

    QFile file("schedle.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        QString list;
        for (int i = 0; i < ui->comboBoxSchedule->count(); i++)
        {
            list += ui->comboBoxSchedule->itemText(i);
            list += "\n";
        }
        list.resize(list.size() - 1);
        file.write(list.toUtf8());
        file.close();
        QMessageBox::information(this, "Успешный успех", "Настройки были успешно сохранены. Перезапустите программу, чтобы изменения вступили в силу.");
    }
    else
    {
        QMessageBox::warning(this, "Внимание", "Упс, что-то пошло не так. Не удалось сохранить список расписаний");
    }

}

void MainWindow::changeSchedule()
{
    auto sender = qobject_cast<QComboBox*>(this->sender());

    if (sender->currentText().isEmpty())
        return;

    QStringList days = sender->currentText().split("/");

    ui->labelSchedule->setText(sender->currentText());
    ui->sliderFirst->setValue(QVariant(days.at(0)).toInt());
    ui->sliderSecond->setValue(QVariant(days.at(1)).toInt());
}

void MainWindow::onSliderValueChanged()
{
    int first   = ui->sliderFirst->value();
    int second  = ui->sliderSecond->value();

    float sumPare = 30.f / (first + second);

    ui->labelSchedule->setText(QString("%1/%2").arg(first).arg(second));

    QString info;
    if (first + second == 0)
    {
        info = "Кто работать то будет?";
    }
    else
    {
        info = "Среднее количество смен за месяц\nПервый сотрудник: %1 смен\nВторой сотрудник: %2 смен";
        info = info.arg(int(sumPare * first)).arg(int(sumPare * second));
    }


    ui->labelShiftCount->setText(info);
}
void MainWindow::openDocInfo()
{
    if (!QDesktopServices::openUrl(QUrl("schedle.doc")))
    {
        qDebug() << "File not open";
        QMessageBox::critical(this, "Error", "Failed to open file. Make sure it exists.");
    }
}

void MainWindow::calculateWorks(QMap<QDate, EmployeeShift> &editDays, QMap<QString, Employee> &employees)
{
    int days = _openWBPoint.daysTo(QDate::currentDate());
    loadEmployeeSalarys(employees);

    if (QTime::currentTime().hour() >= END_OF_SHIFT)
        days++;

    for (int i = 0; i < days; i++)
    {
        QDate date = _openWBPoint.addDays(i);
        QString name = editDays[date].name;
        if (!editDays[date].isPayed)
        {
            employees[name].unpayedMoney += editDays[date].salary;
            employees[name].shifts++;
        }
    }

    /*for (auto & iter : employees)
    {
        if (iter.shifts == 0)
        {
            employees.remove(employees.key(iter));
        }
    }*/
}

void MainWindow::calculateFinishedDays(QMap<QDate, EmployeeShift> &editDays)
{
    qDebug() << "Calculating days...";

    int days = _openWBPoint.daysTo(QDate::currentDate());

    if (QTime::currentTime().hour() >= END_OF_SHIFT)
        days++;

    for (int i = 0; i < days; i++)
    {
        QDate date = _openWBPoint.addDays(i);
        editDays[date].isFinished = true;
    }
}

void MainWindow::fillTextBrowse(QMap<QString, Employee> &employees)
{
    ui->textBrowserLoggs->clear();

    if (employees.isEmpty())
    {
        ui->textBrowserLoggs->setText("Долгов по выплатам нет");
        return;
    }

    for (auto iter : employees.keys())
    {
        if (iter == "" or employees[iter].shifts == 0)
            continue;
        ui->textBrowserLoggs->append("Сотрудник <b>" + iter + "</b>");
        ui->textBrowserLoggs->append("   Заработано: " + QVariant(employees[iter].unpayedMoney).toString() + " руб.");
        ui->textBrowserLoggs->append("   Смен: " + QVariant(employees[iter].shifts).toString());
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

    jObject["PayedDayColor"]    = PAYED_DAY_HEX;
    jObject["FinishedDayColor"] = FINISHED_DAY_HEX;
    jObject["WorkDayColor"]     = ui->editColorWorkDay->text();
    jObject["HolidayColor"]     = ui->editColorHoliday->text();

    jObject["StartDate"]        = _startDate.toString();
    jObject["OpenDate"]         = _openWBPoint.toString();
    jObject["currentSchedle"]   = _scheduleText;

    jObject["serverIP"]         = ui->editServerIP->text();
    jObject["serverPort"]       = ui->editServerPort->text();
    jObject["serverPassword"]   = ui->editServerPassword->text();

    jObject["excelExport"]      = ui->editExcelExportPath->text();

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
    PAYED_DAY_HEX       = jObject["PayedDayColor"].toString();
    FINISHED_DAY_HEX    = jObject["FinishedDayColor"].toString();
    _startDate          = QDate::fromString(jObject["StartDate"].toString());
    _openWBPoint        = QDate::fromString(jObject["OpenDate"].toString());
    _scheduleText       = jObject["currentSchedle"].toString();
    _excelExportPath    = jObject["excelExport"].toString();

    WORK_DAY_HEX        = jObject["WorkDayColor"].toString();
    HOLIDAY_HEX         = jObject["HolidayColor"].toString();
    ui->editServerIP->setText(jObject["serverIP"].toString());
    ui->editServerPort->setText(jObject["serverPort"].toString());
    ui->editServerPassword->setText(jObject["serverPassword"].toString());
}

void MainWindow::readScheduleList()                                     // to remove
{
    QFile file("schedle.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File " + file.fileName() + " not found";
        return;
    }
    ui->comboBoxSchedule->addItems(QString(file.readAll()).split("\n"));
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

void MainWindow::loadEditedDaysFromDB(int pointID, QMap<QDate, EmployeeShift> &editDays)
{
    resetCalendar(editDays, _startDate);

    qDebug() << "Loading data from database...";
    qDebug() << "Current point id:" << pointID;

    QString query("SELECT * FROM days WHERE point_id = %1");

    _modelEmployee->select();
    _query->exec(query.arg(pointID));

    int days        = 0;
    int employees   = _modelEmployee->rowCount();

    for (int i = 0; _query->next(); i++)
    {
        QDate date = QDate::fromString(_query->value(DB_TABLE_DAYS_DATE).toString());

        editDays[date].name          = _query->value(DB_TABLE_DAYS_EMPLOYEE).toString();
        editDays[date].salary        = _query->value(DB_TABLE_DAYS_SALARY).toUInt();
        editDays[date].isPayed       = _query->value(DB_TABLE_DAYS_ISPAYED).toBool();
        editDays[date].isFinished    = _query->value(DB_TABLE_DAYS_ISFINISHED).toBool();

        for (int j = 0; j < employees; j++)
        {
            if (editDays[date].name.isEmpty())
            {
                editDays[date].colorHex = FINISHED_DAY_HEX;
                continue;
            }
            if (editDays[date].name == _modelEmployee->data(_modelEmployee->index(j, DB_TABLE_EMPLOYEE_NAME)))
            {
                editDays[date].colorHex = _modelEmployee->data(_modelEmployee->index(j, DB_TABLE_EMPLOYEE_COLOR)).toString();
            }
        }
        days++;
    }

    qDebug() << "Rows loaded from DAYS:" << days;
    qDebug() << "Rows loaded from EMPLOYEES:" << employees;

    calculateFinishedDays(editDays);
}

void MainWindow::loadEmployeeSalarys(QMap<QString, Employee> &employees)
{
    _query->exec("SELECT * FROM Employees");
    employees.clear();

    for (int i = 0; _query->next(); i++)
    {
        QString name = _query->value(DB_TABLE_EMPLOYEE_NAME).toString();
        employees[name].salary = _query->value(DB_TABLE_EMPLOYEE_SALARY).toUInt();
    }
}

void MainWindow::loadPointData(int selectedPoint)
{
    _pointID        = _modelPoint->data((_modelPoint->index(selectedPoint, DB_TABLE_POINTS_ID))).toUInt();
    _employee1.name = _modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_EMPLOYEE1)).toString();
    _employee2.name = _modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_EMPLOYEE2)).toString();

    _scheduleText   = _modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_SCHEDULE)).toString();

    _openWBPoint    = QDate::fromString(_modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_OPEN_DATE)).toString());
    _startDate      = QDate::fromString(_modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_START_DATE)).toString());

    qDebug() << "Loaded:";
    qDebug() << "  Poind id:       " << _pointID;
    qDebug() << "  First  employee:" << _employee1.name;
    qDebug() << "  Second employee:" << _employee2.name;
    qDebug() << "  Schedule:       " << _scheduleText;
    qDebug() << "  Open  date:     " << _openWBPoint.toString();
    qDebug() << "  Start date:     " << _startDate.toString();
}

void MainWindow::editPointData(const QModelIndex &index)
{
    qDebug() << "Selected ID:" << index.row();

    EditPointDialog dialog(this);
    dialog.setScheduleList("schedle.txt");
    dialog.setEmployeeList(_modelEmployee);
    dialog.setModel(_modelPoint);
    dialog.setModelIndex(index);
    dialog.exec();

    changePoint();
}

void MainWindow::calculateStats()
{
    QMap<QDate, EmployeeShift> days;
    QMap<QString, Employee> employees;

    int selectedPoint = ui->tableViewPoints->currentIndex().row();

    int pointID = _modelPoint->data((_modelPoint->index(selectedPoint, DB_TABLE_POINTS_ID))).toUInt();
    QDate openDate = QDate::fromString(_modelPoint->data(_modelPoint->index(selectedPoint, DB_TABLE_POINTS_OPEN_DATE)).toString());
    QString name = _modelPoint->data((_modelPoint->index(selectedPoint, DB_TABLE_POINTS_NAME))).toString();
    int employeeCount = _modelEmployee->rowCount();
    loadEditedDaysFromDB(pointID, days);

    int uncountedShifts = 0;
    int payedShifts = 0;
    int finishedShifts = 0;
    int allDays = openDate.daysTo(QDate::currentDate());
    int payedMoney = 0;

    for (int i = 0; i < allDays; i++)
    {
        QDate date = openDate.addDays(i);
        if (date > QDate::currentDate())
        {
            break;
        }

        days[date];

        if (days[date].name == "")
        {
            uncountedShifts++;
            continue;
        }

        payedShifts += days[date].isPayed;
        finishedShifts += days[date].isFinished;

        if (days[date].isPayed)
        {
            payedMoney += days[date].salary;
        }
        else
        {
            employees[days[date].name].unpayedMoney += days[date].salary;
        }

        employees[days[date].name].shifts += days[date].isFinished;
        employees[days[date].name].payedShifts += days[date].isPayed;
        employees[days[date].name].salary += days[date].salary;
    }

    qDebug() << "Days from open:    " << allDays;
    qDebug() << "Uncounted days:    " << uncountedShifts;
    qDebug() << "Payed shifts:      " << payedShifts;
    qDebug() << "Unpayed shifts:    " << finishedShifts - payedShifts;
    qDebug() << "Employees involved:" << employees.size() << "/" << employeeCount;


    //////////////// separate ////////////////
    ui->textBrowserStats->clear();

    ui->textBrowserStats->append(name);
    ui->textBrowserStats->append("  Дней с момента открытия:    " + QVariant(allDays).toString());
    ui->textBrowserStats->append("    Нерасчетных смен:         " + QVariant(uncountedShifts).toString());
    ui->textBrowserStats->append("    Оплаченных смен:          " + QVariant(payedShifts).toString());
    ui->textBrowserStats->append("    Неоплаченных смен:        " + QVariant(finishedShifts - payedShifts).toString());
    ui->textBrowserStats->append("  Задействовано сотрудников:  " + QVariant(employees.size()).toString() + " / " + QVariant(employeeCount).toString());

    for (auto & iter : employees.keys())
    {
        qDebug() << "  Employee:" << iter;
        qDebug() << "    Worked:" << employees[iter].shifts;
        qDebug() << "    Payed: " << employees[iter].payedShifts;
        qDebug() << "    Earned:" << employees[iter].salary;
        qDebug() << "    Unpaid:" << employees[iter].unpayedMoney;

        ui->textBrowserStats->append("    Сотрудник " + iter + ":");
        ui->textBrowserStats->append("      Отработано:     " + QVariant(employees[iter].shifts).toString());
        ui->textBrowserStats->append("      Оплачено:       " + QVariant(employees[iter].payedShifts).toString());
        ui->textBrowserStats->append("      Заработано:     " + QVariant(employees[iter].salary).toString() + " руб.");
        ui->textBrowserStats->append("      Не выплачено:   " + QVariant(employees[iter].unpayedMoney).toString() + " руб.");
    }

    ui->textBrowserStats->append("  Всего выплачено:            " + QVariant(payedMoney).toString() + " руб.");
    qDebug() << "All money was paid:" << payedMoney;

//    point_name
//       Прошло дней с момента открытия: 	0
//       Количество нерасчетных смен: 	0
//       Количество оплаченных смен:	0
//       Количество неоплаченных смен:	0
//       Задействовано сотрудников:		0 / 0
//          Сотрудник employee_name:
//             Отработано:	0
//             Оплачено:	0
//             Выплачено:	0 руб.
//          ========== EOL ==========
//       Всего выплачено:		0 руб.
//       Самый дорогой день:		day
//       Самый дорогой месяц:		month

    //////////////////////////////////////////
}

QString MainWindow::readFile(QString filename)
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        QString result = file.readAll();
        file.close();
        return result;
    }
    else
    {
        qDebug() << "File not open";
        return "";
    }
}
