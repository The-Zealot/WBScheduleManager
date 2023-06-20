#include "requesteditdialog.h"
#include "ui_requesteditdialog.h"

RequestEditDialog::RequestEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RequestEditDialog)
{
    ui->setupUi(this);
}

RequestEditDialog::~RequestEditDialog()
{
    delete ui;
}

void RequestEditDialog::on_buttonSend_clicked()
{
    QMessageBox::critical(this, "Error 1", "Request has not been send. Error code: 1");
    this->close();
}

