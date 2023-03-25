#include "employeedialog.h"
#include "ui_employeedialog.h"

EmployeeDialog::EmployeeDialog(QWidget *parent, QSqlTableModel* model, EmployeeShift* employee) :
    QDialog(parent),
    ui(new Ui::EmployeeDialog)
{
    ui->setupUi(this);

    this->setModal(true);
    this->setWindowTitle("Выбор сотрудника");

    _model      = model;
    _employee   = employee;

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView->setModel(_model);
    _model->select();

    connect(ui->listView, &QListView::doubleClicked, [this](){
        int currentRow = ui->listView->currentIndex().row();

        _employee->name     = _model->data(_model->index(currentRow, DB_TABLE_EMPLOYEE_NAME)).toString();
        _employee->colorHex = _model->data(_model->index(currentRow, DB_TABLE_EMPLOYEE_COLOR)).toString();
        _employee->salary   = _model->data(_model->index(currentRow, DB_TABLE_EMPLOYEE_SALARY)).toUInt();

        this->accept();
    });
}

EmployeeDialog::~EmployeeDialog()
{
    delete ui;
}
