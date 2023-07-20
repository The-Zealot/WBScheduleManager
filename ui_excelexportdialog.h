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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExcelExportDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *editPointName;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dateEditLeftBound;
    QDateEdit *dateEditRightBound;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFolderPath;
    QToolButton *toolButtonBrowse;
    QLineEdit *editFileName;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxHideDayCost;
    QCheckBox *checkBoxFinalTable;
    QPushButton *buttonSubmit;
    QPushButton *buttonCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ExcelExportDialog)
    {
        if (ExcelExportDialog->objectName().isEmpty())
            ExcelExportDialog->setObjectName(QString::fromUtf8("ExcelExportDialog"));
        ExcelExportDialog->resize(478, 178);
        gridLayout = new QGridLayout(ExcelExportDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ExcelExportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(ExcelExportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(ExcelExportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(ExcelExportDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editPointName = new QLineEdit(ExcelExportDialog);
        editPointName->setObjectName(QString::fromUtf8("editPointName"));
        editPointName->setEnabled(false);

        verticalLayout->addWidget(editPointName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dateEditLeftBound = new QDateEdit(ExcelExportDialog);
        dateEditLeftBound->setObjectName(QString::fromUtf8("dateEditLeftBound"));
        dateEditLeftBound->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEditLeftBound->setProperty("showGroupSeparator", QVariant(false));
        dateEditLeftBound->setMinimumDate(QDate(2000, 1, 1));
        dateEditLeftBound->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEditLeftBound);

        dateEditRightBound = new QDateEdit(ExcelExportDialog);
        dateEditRightBound->setObjectName(QString::fromUtf8("dateEditRightBound"));
        dateEditRightBound->setEnabled(false);
        dateEditRightBound->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEditRightBound->setProperty("showGroupSeparator", QVariant(false));
        dateEditRightBound->setMinimumDate(QDate(2000, 1, 1));
        dateEditRightBound->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEditRightBound);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editFolderPath = new QLineEdit(ExcelExportDialog);
        editFolderPath->setObjectName(QString::fromUtf8("editFolderPath"));

        horizontalLayout->addWidget(editFolderPath);

        toolButtonBrowse = new QToolButton(ExcelExportDialog);
        toolButtonBrowse->setObjectName(QString::fromUtf8("toolButtonBrowse"));

        horizontalLayout->addWidget(toolButtonBrowse);


        verticalLayout->addLayout(horizontalLayout);

        editFileName = new QLineEdit(ExcelExportDialog);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));

        verticalLayout->addWidget(editFileName);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBoxHideDayCost = new QCheckBox(ExcelExportDialog);
        checkBoxHideDayCost->setObjectName(QString::fromUtf8("checkBoxHideDayCost"));

        verticalLayout_3->addWidget(checkBoxHideDayCost);

        checkBoxFinalTable = new QCheckBox(ExcelExportDialog);
        checkBoxFinalTable->setObjectName(QString::fromUtf8("checkBoxFinalTable"));
        checkBoxFinalTable->setEnabled(true);

        verticalLayout_3->addWidget(checkBoxFinalTable);


        gridLayout->addLayout(verticalLayout_3, 0, 3, 1, 2);

        buttonSubmit = new QPushButton(ExcelExportDialog);
        buttonSubmit->setObjectName(QString::fromUtf8("buttonSubmit"));

        gridLayout->addWidget(buttonSubmit, 1, 4, 1, 1);

        buttonCancel = new QPushButton(ExcelExportDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        gridLayout->addWidget(buttonCancel, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 3);


        retranslateUi(ExcelExportDialog);

        QMetaObject::connectSlotsByName(ExcelExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExcelExportDialog)
    {
        ExcelExportDialog->setWindowTitle(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262 \320\272\320\275\320\270\320\263\321\203 Excel", nullptr));
        label->setText(QCoreApplication::translate("ExcelExportDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\203\320\275\320\272\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("ExcelExportDialog", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262", nullptr));
        label_4->setText(QCoreApplication::translate("ExcelExportDialog", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        dateEditLeftBound->setDisplayFormat(QCoreApplication::translate("ExcelExportDialog", "MM.yyyy", nullptr));
        dateEditRightBound->setDisplayFormat(QCoreApplication::translate("ExcelExportDialog", "MM.yyyy", nullptr));
        toolButtonBrowse->setText(QCoreApplication::translate("ExcelExportDialog", "...", nullptr));
        checkBoxHideDayCost->setText(QCoreApplication::translate("ExcelExportDialog", "\320\241\320\272\321\200\321\213\321\202\321\214 \320\267\320\260\321\200\320\277\320\273\320\260\321\202\321\203", nullptr));
        checkBoxFinalTable->setText(QCoreApplication::translate("ExcelExportDialog", "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        buttonSubmit->setText(QCoreApplication::translate("ExcelExportDialog", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ExcelExportDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExcelExportDialog: public Ui_ExcelExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELEXPORTDIALOG_H
