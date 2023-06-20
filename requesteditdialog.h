#ifndef REQUESTEDITDIALOG_H
#define REQUESTEDITDIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class RequestEditDialog;
}

class RequestEditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RequestEditDialog(QWidget *parent = nullptr);
    ~RequestEditDialog();

private slots:
    void on_buttonSend_clicked();

private:
    Ui::RequestEditDialog *ui;
};

#endif // REQUESTEDITDIALOG_H
