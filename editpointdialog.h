#ifndef EDITPOINTDIALOG_H
#define EDITPOINTDIALOG_H

#include <QDialog>
#include <QDataWidgetMapper>
#include <QFile>

#include "defines.h"

namespace Ui {
class EditPointDialog;
}

class EditPointDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditPointDialog(QWidget *parent = nullptr);
    ~EditPointDialog();

    void setModel(QAbstractItemModel* model);
    void setEmployeeList(QAbstractItemModel* model);
    void setModelIndex(const QModelIndex &index);
    void setScheduleList(const QString &fileName);

public slots:
    void onButtonApplyClicked();
    void onButtonCloseClicked();

private:
    Ui::EditPointDialog *ui;
    QDataWidgetMapper* _mapper;
    QStringList _employeeList;
};

#endif // EDITPOINTDIALOG_H
