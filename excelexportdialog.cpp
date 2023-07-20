#include "excelexportdialog.h"
#include "ui_excelexportdialog.h"

ExcelExportDialog::ExcelExportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExcelExportDialog)
{
    ui->setupUi(this);

    _monthCount         = 1;
    _borderOffset       = 1;
    _rows               = 4;
    _columns            = 32;

    ui->dateEditRightBound->hide();

    connect(ui->buttonSubmit, &QPushButton::clicked, this, &ExcelExportDialog::onButtonSubmit);
    connect(ui->toolButtonBrowse, &QAbstractButton::clicked, this, &ExcelExportDialog::onToolButtonBrowse);
    connect(ui->buttonCancel, &QPushButton::clicked, this, &ExcelExportDialog::onButtonCancel);
    connect(ui->dateEditLeftBound, &QDateEdit::dateChanged, [this](){
        setFileName(ui->dateEditLeftBound->date().toString("MMMM yyyy"));
    });
//    connect(ui->dateEditLeftBound, &QDateEdit::dateChanged, this, &ExcelExportDialog::onDateEditValueChanged);
//    connect(ui->dateEditRightBound, &QDateEdit::dateChanged, this, &ExcelExportDialog::onDateEditValueChanged);
}

ExcelExportDialog::~ExcelExportDialog()
{
    delete ui;
}

void ExcelExportDialog::setDateBound(QDate openDate, QDate startDate)
{
    ui->dateEditRightBound->setMinimumDate(openDate);
    ui->dateEditRightBound->setMaximumDate(startDate.addYears(1));
    ui->dateEditRightBound->setDate(QDate::currentDate());
    ui->dateEditLeftBound->setMinimumDate(openDate);
    ui->dateEditLeftBound->setMaximumDate(startDate.addYears(1));
    ui->dateEditLeftBound->setDate(QDate::currentDate());
}
void ExcelExportDialog::setPointName(QString pointName)
{
    ui->editPointName->setText(pointName);
}

void ExcelExportDialog::setEmployeeShifts(const QMap<QDate, EmployeeShift> &shifts)
{
    _shifts = shifts;
}

void ExcelExportDialog::setEmployeeList(const QMap<QString, Employee> &employees)
{
    _employees = employees;
}

bool ExcelExportDialog::submitExport(QString fileName)
{
    int EXCEL_WIDTH = 38;

    QXlsx::Document document;

    QXlsx::Format borderFormat;
    borderFormat.setBorderColor("#000000");
    borderFormat.setBorderStyle(QXlsx::Format::BorderThin);
    borderFormat.setVerticalAlignment(QXlsx::Format::AlignVCenter);
    borderFormat.setHorizontalAlignment(QXlsx::Format::AlignHCenter);

    QXlsx::Format pointFormat(borderFormat);
    pointFormat.setPatternBackgroundColor("#BC3D96");
    pointFormat.setFontColor("#ffffff");

    QXlsx::Format dayOfWeekFormat;

    QMap<QString, QColor> employeeColors;
    for (auto iter : _shifts)
    {
        if (iter.name == "")
            continue;
        if (_employees.contains(iter.name))
            employeeColors[iter.name] = iter.colorHex;
    }

//    int activeEmployeeCount = employeeColors.size();

//    QDate start     = ui->dateEditLeftBound->date();
//    QDate finish    = ui->dateEditRightBound->date();
//    int months      = calculateMouths(start, finish);

    drawTable(document, borderFormat);
    fillTable(document, borderFormat);
    document.autosizeColumnWidth(1, EXCEL_WIDTH);
//    document.autosizeColumnWidth();

    return document.saveAs(fileName);
}

void ExcelExportDialog::setRootPath(const QString &path)
{
    ui->editFolderPath->setText(path);
}

void ExcelExportDialog::setFileName(const QString &filename)
{
    ui->editFileName->setText(filename);
}

void ExcelExportDialog::onButtonSubmit()
{
    if (submitExport(ui->editFolderPath->text() + "/" + ui->editFileName->text() + ".xlsx"))
    {
        AlertWidget::showAlert("Данные экспортированы");
    }
    else
    {
        QMessageBox::critical(this, "Error", "Failed export");
    }
    this->close();
}

void ExcelExportDialog::onToolButtonBrowse()
{
    ui->editFolderPath->setText(QFileDialog::getExistingDirectory(this, "Выбор папки"));
}

void ExcelExportDialog::onDateEditValueChanged()
{
    if (ui->dateEditLeftBound->date() > ui->dateEditRightBound->date())
        ui->dateEditLeftBound->setDate(ui->dateEditRightBound->date());
}

void ExcelExportDialog::onButtonCancel()
{
    this->close();
}

QXlsx::Format ExcelExportDialog::getMonthFormat(QDate date, QXlsx::Format format)
{
    QXlsx::Format result(format);
    switch (date.month())
    {
    case 12: case 1: case 2:
        result.setPatternBackgroundColor("#7ba3e3");
        break;
    case 3: case 4: case 5:
        result.setPatternBackgroundColor("#41d606");
        break;
    case 6: case 7: case 8:
        result.setPatternBackgroundColor("#fcbf17");
        break;
    case 9: case 10: case 11:
        result.setPatternBackgroundColor("#a6360a");
        break;
    default:
        result.setPatternBackgroundColor("#ffffff");
    }

    return result;
}

QString ExcelExportDialog::getMonthName(QDate date, QString format)
{
    QString result;
    format = format.toLower();
    switch (date.month())
    {
    case 1:
        if (format == "ru")
            result = "Январь";
        else
            result = "January";
        break;
    case 2:
        if (format == "ru")
            result = "Февраль";
        else
            result = "February";
        break;
    case 3:
        if (format == "ru")
            result = "Март";
        else
            result = "March";
        break;
    case 4:
        if (format == "ru")
            result = "Апрель";
        else
            result = "April";
        break;
    case 5:
        if (format == "ru")
            result = "Май";
        else
            result = "May";
        break;
    case 6:
        if (format == "ru")
            result = "Июнь";
        else
            result = "June";
        break;
    case 7:
        if (format == "ru")
            result = "Июль";
        else
            result = "July";
        break;
    case 8:
        if (format == "ru")
            result = "Август";
        else
            result = "August";
        break;
    case 9:
        if (format == "ru")
            result = "Сентябрь";
        else
            result = "September";
        break;
    case 10:
        if (format == "ru")
            result = "Октябрь";
        else
            result = "October";
        break;
    case 11:
        if (format == "ru")
            result = "Ноябрь";
        else
            result = "Novener";
        break;
    case 12:
        if (format == "ru")
            result = "Декабрь";
        else
            result = "December";
        break;
    default:
        result = "N/A";
    }

    return result;
}

QString ExcelExportDialog::getDayOfWeek(QDate date, QString format)
{
    QString result;
    format = format.toLower();
    switch (date.dayOfWeek())
    {
    case 1:
        if (format == "ru")
            result = "Пн";
        else
            result = "Mon";
        break;
    case 2:
        if (format == "ru")
            result = "Вт";
        else
            result = "Tue";
        break;
    case 3:
        if (format == "ru")
            result = "Ср";
        else
            result = "Wed";
        break;
    case 4:
        if (format == "ru")
            result = "Чт";
        else
            result = "Thu";
        break;
    case 5:
        if (format == "ru")
            result = "Пт";
        else
            result = "Fri";
        break;
    case 6:
        if (format == "ru")
            result = "Сб";
        else
            result = "Sat";
        break;
    case 7:
        if (format == "ru")
            result = "Вс";
        else
            result = "Sun";
        break;
    default:
        result = "N/A";
    }

    return result;
}

QXlsx::Format ExcelExportDialog::getDayFormat(QDate date, QXlsx::Format format)
{
    QXlsx::Format dayFormat(format);
    if (date.dayOfWeek() > 5)
    {
        dayFormat.setPatternBackgroundColor("#e80000");
    }
    else
    {
        dayFormat.setPatternBackgroundColor("#d8e2ed");
    }
    return dayFormat;
}

int ExcelExportDialog::calculateMouths(QDate begin, QDate end)
{
    int result  = 0;

    for (int i = 1; begin < end; i++)
    {
        QDate temp = begin.addDays(i);
        if (begin.month() != temp.month())
        {
            result++;
            begin = temp;
        }
    }

    return result;
}

void ExcelExportDialog::drawTable(QXlsx::Document &document, QXlsx::Format &format)
{
    for (int i = 1; i <= _rows; i++)
    {
        for (int j = 1; j <= _columns; j++)
        {
            document.write(_borderOffset + i, _borderOffset + j, "", format);
        }
    }

    for (int i = 0; i < 4; i++)
    {
//        document.write(4 +_borderOffset, 33 + _borderOffset * 2 + i, "", format);
    }

    document.mergeCells(QXlsx::CellRange(1 + _borderOffset, 1 + _borderOffset, 1 + _borderOffset, _columns + _borderOffset));
    document.mergeCells(QXlsx::CellRange(2 + _borderOffset, 2 + _borderOffset, 2 + _borderOffset, _columns + _borderOffset));
    document.mergeCells(QXlsx::CellRange(2 + _borderOffset, 1 + _borderOffset, 4 + _borderOffset, 1 + _borderOffset));

    if (ui->checkBoxFinalTable->isChecked())
    {
        int secondOffset = _columns + _borderOffset * 2;
        document.write(5, 1 + secondOffset, "К оплате", format);
        document.write(5, 2 + secondOffset, "Оплачено", format);
        document.write(5, 3 + secondOffset, "Ставка", format);
        document.write(5, 4 + secondOffset, "Вычтено", format);
    }
}

void ExcelExportDialog::fillTable(QXlsx::Document &document, QXlsx::Format &format)
{
    QXlsx::Format pointFormat(format);
    pointFormat.setPatternBackgroundColor("#0070c0");
    pointFormat.setFontColor("#ffffff");

    QDate date = ui->dateEditLeftBound->date();
    for (int i = 0; i < date.daysInMonth(); i++)
    {
        QDate processedDate = QDate(date.year(), date.month(), i + 1);
        document.write(3 + _borderOffset, 2 + _borderOffset + i, i + 1, format);
        document.write(4 + _borderOffset, 2 + _borderOffset + i, getDayOfWeek(processedDate), getDayFormat(processedDate, format));
    }

    document.write(1 + _borderOffset, 1 + _borderOffset, ui->editPointName->text(), pointFormat);
    document.write(2 + _borderOffset, 2 + _borderOffset, getMonthName(date), getMonthFormat(date, format));
    document.write(2 + _borderOffset, 1 + _borderOffset, "Сотрудники", format);

//    document.write(4 + _borderOffset, 33 + _borderOffset * 2, "К оплате", format);
//    document.write(4 + _borderOffset, 34 + _borderOffset * 2, "Оплачено", format);
//    document.write(4 + _borderOffset, 35 + _borderOffset * 2, "Ставка", format);
//    document.write(4 + _borderOffset, 36 + _borderOffset * 2, "Вычтено", format);

    QMap<QString, QColor> employee  = calculateEmployeesPerMonth(_shifts, date);
    auto list                       = employee.keys();
    int index                       = 0;
    int payValue                    = 0;
    int paidValue                   = 0;
    int salary                      = 0;
    int daysWorked                  = 0;

    for (auto iter : list)
    {
        QXlsx::Format employeeFormat(format);
        employeeFormat.setPatternBackgroundColor(employee[iter]);
        QXlsx::Format payFormat(format);
        payFormat.setPatternBackgroundColor(PAYED_DAY_HEX);
        document.write(5 + _borderOffset + index, 1 + _borderOffset, iter, employeeFormat);
        salary = _employees[iter].salary;

        for (int i = 0; i < date.daysInMonth(); i++)
        {
            QDate temp(date.year(), date.month(), i + 1);
            quint32 dayCost;
            if (_shifts[temp].name != iter)
            {
                document.write(5 + _borderOffset + index, 2 + _borderOffset + i, "", format);
            }
            else
            {
                if (!ui->checkBoxHideDayCost->isChecked())
                {
                    dayCost = _shifts[temp].salary;
                }
                else
                {
                    dayCost = 1;
                }

                if (_shifts[temp].isPayed)
                {
                    document.write(5 + _borderOffset + index, 2 + _borderOffset + i, dayCost, payFormat);
                    paidValue += _shifts[temp].salary;
                }
                else
                {
                    document.write(5 + _borderOffset + index, 2 + _borderOffset + i, dayCost, format);
                }
                payValue += _shifts[temp].salary;
                daysWorked++;
            }
        }

        if (ui->checkBoxFinalTable->isChecked())
        {
            int fine = daysWorked * salary - payValue;
            document.write(5 + _borderOffset + index, 1 + _columns + _borderOffset * 2, payValue, format);
            document.write(5 + _borderOffset + index, 2 + _columns + _borderOffset * 2, paidValue, format);
            document.write(5 + _borderOffset + index, 3 + _columns + _borderOffset * 2, salary, format);
            document.write(5 + _borderOffset + index, 4 + _columns + _borderOffset * 2, fine, format);
        }

        payValue    = 0;
        paidValue   = 0;
        daysWorked  = 0;
        index++;
    }
}

QMap<QString, QColor> ExcelExportDialog::calculateEmployeesPerMonth(const QMap<QDate, EmployeeShift> &shifts, QDate date)
{
    QMap<QString, QColor> employees;

    int days = date.daysInMonth();
    for (int i = 0; i < days; i++)
    {
        QDate temp(date.year(), date.month(), i + 1);
        if (shifts[temp].name != "")
        {
            employees[shifts[temp].name] = shifts[temp].colorHex;
        }
    }

    return employees;
}
