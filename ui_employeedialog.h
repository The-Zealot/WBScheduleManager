/********************************************************************************
** Form generated from reading UI file 'employeedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEDIALOG_H
#define UI_EMPLOYEEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_EmployeeDialog
{
public:
    QGridLayout *gridLayout;
    QListView *listView;

    void setupUi(QDialog *EmployeeDialog)
    {
        if (EmployeeDialog->objectName().isEmpty())
            EmployeeDialog->setObjectName(QString::fromUtf8("EmployeeDialog"));
        EmployeeDialog->resize(206, 196);
        gridLayout = new QGridLayout(EmployeeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(EmployeeDialog);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        retranslateUi(EmployeeDialog);

        QMetaObject::connectSlotsByName(EmployeeDialog);
    } // setupUi

    void retranslateUi(QDialog *EmployeeDialog)
    {
        EmployeeDialog->setWindowTitle(QCoreApplication::translate("EmployeeDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeDialog: public Ui_EmployeeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEDIALOG_H
