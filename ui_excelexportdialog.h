/********************************************************************************
** Form generated from reading UI file 'excelexportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCELEXPORTDIALOG_H
#define UI_EXCELEXPORTDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ExcelExportDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *editFolderPath;
    QToolButton *toolButtonBrowse;
    QPushButton *buttonSubmit;
    QLabel *label_4;
    QLineEdit *editFileName;
    QPushButton *buttonCancel;
    QLineEdit *editPointName;
    QDateEdit *dateEditLeftBound;
    QDateEdit *dateEditRightBound;

    void setupUi(QDialog *ExcelExportDialog)
    {
        if (ExcelExportDialog->objectName().isEmpty())
            ExcelExportDialog->setObjectName(QString::fromUtf8("ExcelExportDialog"));
        ExcelExportDialog->resize(387, 172);
        label = new QLabel(ExcelExportDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 11, 99, 16));
        label_2 = new QLabel(ExcelExportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 42, 43, 16));
        label_3 = new QLabel(ExcelExportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 74, 99, 24));
        editFolderPath = new QLineEdit(ExcelExportDialog);
        editFolderPath->setObjectName(QString::fromUtf8("editFolderPath"));
        editFolderPath->setGeometry(QRect(124, 74, 201, 24));
        toolButtonBrowse = new QToolButton(ExcelExportDialog);
        toolButtonBrowse->setObjectName(QString::fromUtf8("toolButtonBrowse"));
        toolButtonBrowse->setGeometry(QRect(348, 74, 28, 23));
        buttonSubmit = new QPushButton(ExcelExportDialog);
        buttonSubmit->setObjectName(QString::fromUtf8("buttonSubmit"));
        buttonSubmit->setGeometry(QRect(296, 136, 80, 25));
        label_4 = new QLabel(ExcelExportDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 105, 65, 16));
        editFileName = new QLineEdit(ExcelExportDialog);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));
        editFileName->setGeometry(QRect(124, 105, 108, 24));
        buttonCancel = new QPushButton(ExcelExportDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setGeometry(QRect(209, 136, 80, 25));
        editPointName = new QLineEdit(ExcelExportDialog);
        editPointName->setObjectName(QString::fromUtf8("editPointName"));
        editPointName->setEnabled(false);
        editPointName->setGeometry(QRect(124, 11, 108, 24));
        dateEditLeftBound = new QDateEdit(ExcelExportDialog);
        dateEditLeftBound->setObjectName(QString::fromUtf8("dateEditLeftBound"));
        dateEditLeftBound->setGeometry(QRect(124, 42, 78, 25));
        dateEditLeftBound->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEditLeftBound->setProperty("showGroupSeparator", QVariant(false));
        dateEditLeftBound->setMinimumDate(QDate(2000, 1, 1));
        dateEditLeftBound->setCalendarPopup(true);
        dateEditRightBound = new QDateEdit(ExcelExportDialog);
        dateEditRightBound->setObjectName(QString::fromUtf8("dateEditRightBound"));
        dateEditRightBound->setGeometry(QRect(230, 40, 78, 25));
        dateEditRightBound->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEditRightBound->setProperty("showGroupSeparator", QVariant(false));
        dateEditRightBound->setMinimumDate(QDate(2000, 1, 1));
        dateEditRightBound->setCalendarPopup(true);

        retranslateUi(ExcelExportDialog);

        QMetaObject::connectSlotsByName(ExcelExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExcelExportDialog)
    {
        ExcelExportDialog->setWindowTitle(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \320\272\320\275\320\270\320\263\321\203 Excel", nullptr));
        label->setText(QCoreApplication::translate("ExcelExportDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\203\320\275\320\272\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("ExcelExportDialog", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262", nullptr));
        toolButtonBrowse->setText(QCoreApplication::translate("ExcelExportDialog", "...", nullptr));
        buttonSubmit->setText(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("ExcelExportDialog", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ExcelExportDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        dateEditLeftBound->setDisplayFormat(QCoreApplication::translate("ExcelExportDialog", "MM.yyyy", nullptr));
        dateEditRightBound->setDisplayFormat(QCoreApplication::translate("ExcelExportDialog", "MM.yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExcelExportDialog: public Ui_ExcelExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELEXPORTDIALOG_H
