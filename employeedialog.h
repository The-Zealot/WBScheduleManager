#ifndef EMPLOYEEDIALOG_H
#define EMPLOYEEDIALOG_H

#include <QDialog>
#include <QSqlTableModel>

#include "employee.h"

namespace Ui {
class EmployeeDialog;
}

class EmployeeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeDialog(QWidget *parent, QSqlTableModel* model, Employee* employee);
    ~EmployeeDialog();

private:
    Ui::EmployeeDialog *ui;
    QSqlTableModel* _model;
    Employee* _employee;
};

#endif // EMPLOYEEDIALOG_H