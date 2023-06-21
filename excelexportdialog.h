#ifndef EXCELEXPORTDIALOG_H
#define EXCELEXPORTDIALOG_H

#include <QDialog>
#include <QMap>
#include <QDate>
#include <QFileDialog>

#include "employee.h"

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include "xlsxstyles_p.h"
#include "xlsxcellformula.h"

namespace Ui {
class ExcelExportDialog;
}

class ExcelExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExcelExportDialog(QWidget *parent = nullptr);
    ~ExcelExportDialog();
    void setDateBound(QDate openDate, QDate startDate);
    void setPointName(QString pointName);
    void setEmployeeShifts(const QMap<QDate, EmployeeShift> &shifts);
    void setEmployeeList(const QMap<QString, Employee> &employees);
    void submitExport(QString fileName);

public slots:
    void onButtonSubmit();
    void onToolButtonBrowse();
    void onDateEditValueChanged();

private:
    QXlsx::Format getMonthFormat(QDate date, QXlsx::Format format = QXlsx::Format());
    QString getMonthName(QDate date, QString format = "Ru");
    QString getDayOfWeek(QDate, QString format = "Ru");

    int calculateMouths(QDate begin, QDate end);

private:
    Ui::ExcelExportDialog *ui;
    QMap<QDate, EmployeeShift> _shifts;
    QMap<QString, Employee> _employees;

    quint32 _monthCount;
};

#endif // EXCELEXPORTDIALOG_H
