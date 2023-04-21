#include "salarydialog.h"
#include "ui_salarydialog.h"

SalaryDialog::SalaryDialog(QWidget *parent, quint32* salary) :
    QDialog(parent),
    ui(new Ui::SalaryDialog)
{
    ui->setupUi(this);

    this->setModal(true);
    this->setWindowTitle("Стоимость смены");

    ui->editSalary->setValidator(new QRegularExpressionValidator(QRegularExpression("[1-9][0-9]{0,3}")));

    _salary = salary;
    ui->editSalary->setText(QVariant(*_salary).toString());

    connect(ui->buttonSubmit, &QPushButton::clicked, [this](){
        *_salary = ui->editSalary->text().toUInt();

        this->accept();
    });
}

SalaryDialog::~SalaryDialog()
{
    delete ui->editSalary->validator();
    delete ui;
}
