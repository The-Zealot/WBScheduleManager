#include "editpointdialog.h"
#include "ui_editpointdialog.h"

EditPointDialog::EditPointDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPointDialog)
{
    ui->setupUi(this);
}

EditPointDialog::~EditPointDialog()
{
    delete ui;
}
