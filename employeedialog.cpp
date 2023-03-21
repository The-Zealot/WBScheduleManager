#include "employeedialog.h"
#include "ui_employeedialog.h"

EmployeeDialog::EmployeeDialog(QWidget *parent, QSqlTableModel* model, Employee* employee) :
    QDialog(parent),
    ui(new Ui::EmployeeDialog)
{
    ui->setupUi(this);

    this->setModal(true);
    this->setWindowTitle("Выбор сотрудника");

    _model = model;
    _employee = employee;

    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->listView->setModel(_model);
    _model->select();

    connect(ui->listView, &QListView::doubleClicked, [this](){
        int currentRow = ui->listView->currentIndex().row();

        _employee->name     = _model->data(_model->index(currentRow, 0)).toString();
        _employee->salary   = _model->data(_model->index(currentRow, 1)).toUInt();
        _employee->colorHex = _model->data(_model->index(currentRow, 2)).toString();

        this->accept();
    });
}

EmployeeDialog::~EmployeeDialog()
{
    delete ui;
}