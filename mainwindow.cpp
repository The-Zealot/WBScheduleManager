#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());

    ui->comboBox->addItem("2/2");
    ui->comboBox->addItem("4/2");
    ui->comboBox->addItem("5/2");

    ui->calendarWidget->setDateRange(QDate(2021, 12, 1), QDate::currentDate().addYears(1));
    changeShedle();

    ui->editSalary->setValidator(new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,3}")));

    QString temp_Employee_1 = "Иванов И.";
    QString temp_Employee_2 = "Петров П.";

    ui->textEdit->setReadOnly(true);
    ui->textEdit->setText(QString("Смен отработано:\nСотрудник %1: %2 (%3 руб.)\nСотрудник %4: %5 (%6 руб.)")
                          .arg(temp_Employee_1)
                          .arg("2")
                          .arg("2000")
                          .arg(temp_Employee_2)
                          .arg("2")
                          .arg("2000"));

    connect(ui->widgetColor, &QPushButton::clicked, this, &MainWindow::takeColor);
    connect(ui->widgetColor2, &QPushButton::clicked, this, &MainWindow::takeColor);
    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, &MainWindow::changeShedle);
    connect(ui->buttonPay, &QPushButton::clicked, this, &MainWindow::payAndClear);

    readJson();
    payAndClear();
}

MainWindow::~MainWindow()
{
    writeJson();

    delete ui->editSalary->validator();
    delete ui;
}

void MainWindow::takeColor()
{
    QObject* obj = sender();
    QVariant color = QColorDialog::getColor(Qt::white, this, "Выбор цвета");
    qDebug() << "Hex color:" << color.toString();
    qobject_cast<QWidget*>(obj)->setStyleSheet("border: 1px solid; background: " + color.toString());
}

void MainWindow::changeShedle()
{
    QTextCharFormat redDay, blackDay;
    redDay.setForeground(Qt::black);
    redDay.setBackground(QColor(0, 128, 128));
    blackDay.setForeground(Qt::black);
    blackDay.setBackground(QColor(240, 128, 0));

    QStringList list = ui->comboBox->currentText().split("/");

    int DAYS_FIRST_EMPLOYEE     = list.at(0).toInt();
    int DAYS_SECOND_EMPLOYEE    = list.at(1).toInt();
    int DAYS_ALL_EMPLOYEE       = DAYS_FIRST_EMPLOYEE + DAYS_SECOND_EMPLOYEE;

    auto reformatCalendar = [&](QDate startDate, int employeeDayCount, int allEmployeeDays, QTextCharFormat format, int lengthReformat = 365){
        for (int i = 0; i < lengthReformat; i += allEmployeeDays)
        {
            for (int j = 0; j < employeeDayCount; j++)
            {
                ui->calendarWidget->setDateTextFormat(startDate.addDays(i + j), format);
            }
        }
    };

    reformatCalendar(QDate(2021, 12, 1), 1, 1, blackDay, 1000);
    QDate date = ui->dateEdit->date();
    reformatCalendar(date, DAYS_FIRST_EMPLOYEE, DAYS_ALL_EMPLOYEE, redDay);
    date = ui->dateEdit->date().addDays(DAYS_FIRST_EMPLOYEE);
    reformatCalendar(date, DAYS_SECOND_EMPLOYEE, DAYS_ALL_EMPLOYEE, blackDay);


}

void MainWindow::payAndClear()
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

void MainWindow::writeJson()
{
    QFile json("schedle.json");
    if (!json.open(QIODevice::WriteOnly))
    {
        qDebug() << "File write error:" << json.errorString();
        return;
    }
    QJsonObject jObject;

    jObject["Employee_1"] = ui->editEmployee1->text();
    jObject["Employee_2"] = ui->editEmployee2->text();
    jObject["startDate"]  = ui->dateEdit->date().toString();

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

    ui->editEmployee1->setText(jObject["Employee_1"].toString());
    ui->editEmployee2->setText(jObject["Employee_2"].toString());
    ui->dateEdit->setDate(QDate::fromString(jObject["startDate"].toString()));
}



