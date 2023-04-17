#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class DeleteDialog;
}

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteDialog(QWidget *parent = nullptr);
    ~DeleteDialog();
    void setText(QString text);
    void setConfirmedString(QString confirmedString);
    QString getConfirmedString();

private slots:
    void validateInput();

private:
    Ui::DeleteDialog *ui;
    QString _confirmedString;
};

#endif // DELETEDIALOG_H
