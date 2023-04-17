#include "deletedialog.h"
#include "ui_deletedialog.h"

DeleteDialog::DeleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteDialog)
{
    ui->setupUi(this);

    QString outText = "Вы уверены, что хотите удалить ";

    ui->textBrowser->setAlignment(Qt::AlignHCenter);

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    connect(ui->editConfirm, &QLineEdit::textChanged, this, &DeleteDialog::validateInput);
}

DeleteDialog::~DeleteDialog()
{
    delete ui;
}

void DeleteDialog::setText(QString text)
{
    ui->textBrowser->setText(text);
}

void DeleteDialog::setConfirmedString(QString confirmedString)
{
    _confirmedString = confirmedString;
    ui->textBrowser->append("Введите для подтверждения: <b>" + _confirmedString + "</b>");
}

QString DeleteDialog::getConfirmedString()
{
    return _confirmedString;
}

void DeleteDialog::validateInput()
{
    QPushButton* buttonOK = ui->buttonBox->button(QDialogButtonBox::Ok);
    if (ui->editConfirm->text() == _confirmedString)
    {
        buttonOK->setEnabled(true);
    }
    else
    {
        buttonOK->setEnabled(false);
    }
}
