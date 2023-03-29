#ifndef SALARYDIALOG_H
#define SALARYDIALOG_H

#include <QDialog>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

namespace Ui {
class SalaryDialog;
}

class SalaryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SalaryDialog(QWidget *parent, quint32* salary);
    ~SalaryDialog();

private:
    Ui::SalaryDialog *ui;
    quint32* _salary;
};

#endif // SALARYDIALOG_H
