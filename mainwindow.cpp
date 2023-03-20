#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());

    ui->buttonPay->setEnabled(false);                                                               // to remove button

    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./schedle.db");
    _model = new QSqlTableModel(this, _db);
    _model->setTable("Employees");
    ui->tableView->setModel(_model);

    readJson();
    readSchedleList();

    _daysOfFirstEmployee = 0;
    _daysOfSecondEmployee = 0;

    ui->widgetColor->setFocusPolicy(Qt::NoFocus);
    ui->widgetColor2->setFocusPolicy(Qt::NoFocus);
    ui->widgetColor->setStyleSheet("border: 1px solid; background: " + _employee1.colorHex);
    ui->widgetColor2->setStyleSheet("border: 1px solid; background: " + _employee2.colorHex);
    ui->editEmployee1->setText(_employee1.name);
    ui->editEmployee2->setText(_employee2.name);

    ui->editSalary->setText(QVariant(_salary).toString());

    ui->calendarWidget->setDateRange(QDate(2021, 12, 1), QDate::currentDate().addYears(1));
    changeSchedle();

    ui->editSalary->setValidator(new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,3}")));

    calculateWorks();
    fillTextBrowse();

    connect(ui->widgetColor, &QPushButton::clicked, this, &MainWindow::takeColor);
    connect(ui->widgetColor2, &QPushButton::clicked, this, &MainWindow::takeColor);
//    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, &MainWindow::changeShedle);              // to remove
//    connect(ui->dateEdit, &QDateEdit::dateChanged, [this](){ changeShedle(); });                          // to remove
    connect(ui->buttonPay, &QPushButton::clicked, this, &MainWindow::payAndClear);
    connect(ui->editSalary, &QLineEdit::textEdited, [this](){ fillTextBrowse(); });

    connect(ui->toolButtonArrow, &QAbstractButton::clicked, this, &MainWindow::setStatusBarMessage);
    connect(ui->toolButtonEmployees, &QAbstractButton::clicked, this, &MainWindow::setStatusBarMessage);
    connect(ui->toolButtonSalary, &QAbstractButton::clicked, this, &MainWindow::setStatusBarMessage);
    connect(ui->toolButtonPaymentTarget, &QAbstractButton::clicked, this, &MainWindow::setStatusBarMessage);
    connect(ui->toolButtonPaymentGeneral, &QAbstractButton::clicked, [this](){
        AlertWidget::showAlert("Выплачиваем выплаты...");
        payAndClear();
    });
    connect(ui->toolButtonClear, &QAbstractButton::clicked, this, &MainWindow::setStatusBarMessage);
    connect(ui->toolButtonCalculate, &QAbstractButton::clicked, [this](){
        AlertWidget::showAlert("Делаем перерасчет!");
        changeSchedle();
    });
    connect(ui->toolButtonSave, &QAbstractButton::clicked, [](){
         AlertWidget::showAlert("Изменения сохранены");
    });

    ui->toolButtonArrow->setIcon(QIcon(":/image/toolBar/arrow.png"));
    ui->toolButtonEmployees->setIcon(QIcon(":/image/toolBar/employee.png"));
    ui->toolButtonSalary->setIcon(QIcon(":/image/toolBar/salary.png"));
    ui->toolButtonPaymentTarget->setIcon(QIcon(":/image/toolBar/paymentTarget.png"));
    ui->toolButtonPaymentGeneral->setIcon(QIcon(":/image/toolBar/paymentGeneral.png"));
    ui->toolButtonClear->setIcon(QIcon(":/image/toolBar/clear.png"));
    ui->toolButtonCalculate->setIcon(QIcon(":/image/toolBar/calculator.png"));
    ui->toolButtonSave->setIcon(QIcon(":/image/toolBar/save.png"));

    ui->toolButtonArrow->setToolTip("Выделение");
    ui->toolButtonEmployees->setToolTip("Выбрать сотрудника");
    ui->toolButtonSalary->setToolTip("Установить ставку");
    ui->toolButtonPaymentTarget->setToolTip("Оплатить конкретную смену");
    ui->toolButtonPaymentGeneral->setToolTip("Оплатить все смены");
    ui->toolButtonClear->setToolTip("Сбросить день");
    ui->toolButtonCalculate->setToolTip("Перерасчет графика");
    ui->toolButtonSave->setToolTip("Сохранить");
}

MainWindow::~MainWindow()
{
    writeJson();

    delete ui->editSalary->validator();
    delete ui;
}

void MainWindow::takeColor()
{
    QWidget* obj = qobject_cast<QWidget*>(sender());

    QVariant color = QColorDialog::getColor(Qt::white, this, "Выбор цвета");
    qDebug() << "Hex color:" << color.toString();
    if (obj->objectName() == "widgetColor")
        _employee1.colorHex = color.toString();
    else
        _employee2.colorHex = color.toString();
    obj->setStyleSheet("border: 1px solid; background: " + color.toString());

    changeSchedle();
}

void MainWindow::changeSchedle()
{
    if (ui->comboBox->currentText() == "")
    {
        qDebug() << "Can't parse comboBox->currentText()";
        return;
    }

    auto reformatCalendar = [this](QDate startDate, int employeeDayCount, int allEmployeeDays, QTextCharFormat format, int lengthReformat){
        for (int i = 0; i < lengthReformat; i += allEmployeeDays)
        {
            for (int j = 0; j < employeeDayCount; j++)
            {
                ui->calendarWidget->setDateTextFormat(startDate.addDays(i + j), format);
            }
        }
    };

    QTextCharFormat first, second, nobody;
    first.setForeground(Qt::black);
    first.setBackground(QColor(_employee1.colorHex));
    second.setForeground(Qt::black);
    second.setBackground(QColor(_employee2.colorHex));
    nobody.setForeground(Qt::black);
    nobody.setBackground(Qt::gray);

    QStringList list = ui->comboBox->currentText().split("/");

    int DAYS_FIRST_EMPLOYEE     = list.at(0).toInt();
    int DAYS_SECOND_EMPLOYEE    = list.at(1).toInt();
    int DAYS_ALL_EMPLOYEE       = DAYS_FIRST_EMPLOYEE + DAYS_SECOND_EMPLOYEE;

    QDate openWBPoint(2021, 12, 1);
    reformatCalendar(openWBPoint, 1, 1, nobody, openWBPoint.daysTo(QDate::currentDate().addYears(1)));

    QDate date = ui->dateEdit->date();
    int yearAhead = date.daysTo(QDate::currentDate().addYears(1));

    reformatCalendar(date, DAYS_FIRST_EMPLOYEE, DAYS_ALL_EMPLOYEE, first, yearAhead);
    date = ui->dateEdit->date().addDays(DAYS_FIRST_EMPLOYEE);
    reformatCalendar(date, DAYS_SECOND_EMPLOYEE, DAYS_ALL_EMPLOYEE, second, yearAhead);

    calculateWorks();
    fillTextBrowse();
}

void MainWindow::payAndClear()
{
    int END_OF_DAY = 21;
    if (QTime::currentTime().hour() < END_OF_DAY)
        _lastPayday = QDate::currentDate().addDays(-1);
    else
        _lastPayday = QDate::currentDate();

    calculateWorks();
    fillTextBrowse();
}

void MainWindow::setStatusBarMessage()
{
    QWidget* button = qobject_cast<QWidget*>(sender());

    ui->statusBar->showMessage(button->objectName() + " is active");
}

void MainWindow::calculateWorks()
{
    int END_OF_DAY          = 21;
    int days                = _lastPayday.daysTo(QDate::currentDate());
    _daysOfFirstEmployee    = 0;
    _daysOfSecondEmployee   = 0;

    if (QTime::currentTime().hour() >= END_OF_DAY)
        days++;

    for (int i = 1; i < days; i++)
    {
        if (ui->calendarWidget->dateTextFormat(_lastPayday.addDays(i)).background() == QColor(_employee1.colorHex))
        {
            _daysOfFirstEmployee++;
        }
        else
        {
            _daysOfSecondEmployee++;
        }
    }

    qDebug() << QString("Смен у первого сотрудника - %1, у второго - %2").arg(_daysOfFirstEmployee).arg(_daysOfSecondEmployee) << days;
}

void MainWindow::fillTextBrowse()
{
    ui->textBrowser->setText(QString("Смен отработано:\nСотрудник %1: %2 (%3 руб.)\nСотрудник %4: %5 (%6 руб.)\n\n"
                                    "Текущая дата: %7\nДата последней выплаты: %8")
                          .arg(ui->editEmployee1->text())
                          .arg(_daysOfFirstEmployee)
                          .arg(_daysOfFirstEmployee * ui->editSalary->text().toInt())
                          .arg(ui->editEmployee2->text())
                          .arg(_daysOfSecondEmployee)
                          .arg(_daysOfSecondEmployee * ui->editSalary->text().toInt())
                          .arg(QDateTime::currentDateTime().toString("dd.MM.yyyy"))
                          .arg(_lastPayday.toString("dd.MM.yyyy")));
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

    jObject["Employee_1"]   = ui->editEmployee1->text();
    jObject["Employee_2"]   = ui->editEmployee2->text();
    jObject["color_1"]      = _employee1.colorHex;
    jObject["color_2"]      = _employee2.colorHex;
    jObject["startDate"]    = ui->dateEdit->date().toString();
    jObject["salary"]       = ui->editSalary->text().toInt();
    jObject["lastPayday"]   = _lastPayday.toString();

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

    _employee1.name     = jObject["Employee_1"].toString();
    _employee2.name     = jObject["Employee_2"].toString();
    _employee1.colorHex = jObject["color_1"].toString();
    _employee2.colorHex = jObject["color_2"].toString();
    _salary             = jObject["salary"].toInt();
    _lastPayday         = QDate::fromString(jObject["lastPayday"].toString());
    ui->dateEdit->setDate(QDate::fromString(jObject["startDate"].toString()));
}

void MainWindow::readSchedleList()
{
    QFile file("schedle.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File " + file.fileName() + " not found";
        return;
    }
    ui->comboBox->addItems(QString(file.readAll()).split("\n"));
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
