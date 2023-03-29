/********************************************************************************
** Form generated from reading UI file 'salarydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALARYDIALOG_H
#define UI_SALARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SalaryDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *editSalary;
    QLabel *label;
    QPushButton *buttonSubmit;

    void setupUi(QDialog *SalaryDialog)
    {
        if (SalaryDialog->objectName().isEmpty())
            SalaryDialog->setObjectName(QString::fromUtf8("SalaryDialog"));
        SalaryDialog->resize(167, 78);
        gridLayout = new QGridLayout(SalaryDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editSalary = new QLineEdit(SalaryDialog);
        editSalary->setObjectName(QString::fromUtf8("editSalary"));

        gridLayout->addWidget(editSalary, 0, 0, 1, 1);

        label = new QLabel(SalaryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        buttonSubmit = new QPushButton(SalaryDialog);
        buttonSubmit->setObjectName(QString::fromUtf8("buttonSubmit"));

        gridLayout->addWidget(buttonSubmit, 1, 0, 1, 2);


        retranslateUi(SalaryDialog);

        QMetaObject::connectSlotsByName(SalaryDialog);
    } // setupUi

    void retranslateUi(QDialog *SalaryDialog)
    {
        SalaryDialog->setWindowTitle(QCoreApplication::translate("SalaryDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SalaryDialog", "\321\200\321\203\320\261.", nullptr));
        buttonSubmit->setText(QCoreApplication::translate("SalaryDialog", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalaryDialog: public Ui_SalaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALARYDIALOG_H
