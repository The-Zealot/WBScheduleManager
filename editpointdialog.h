#ifndef EDITPOINTDIALOG_H
#define EDITPOINTDIALOG_H

#include <QDialog>

namespace Ui {
class EditPointDialog;
}

class EditPointDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditPointDialog(QWidget *parent = nullptr);
    ~EditPointDialog();

private:
    Ui::EditPointDialog *ui;
};

#endif // EDITPOINTDIALOG_H
