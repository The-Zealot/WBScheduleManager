/********************************************************************************
** Form generated from reading UI file 'editpointdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOINTDIALOG_H
#define UI_EDITPOINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditPointDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *editStartDate;
    QLineEdit *editOpenDate;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDateEdit *dateEditOpen;
    QLabel *label_4;
    QDateEdit *dateEditStart;
    QLabel *label_5;
    QTimeEdit *timeEditEndOfShift;
    QLabel *label_6;
    QComboBox *comboBoxSchedule;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonApply;
    QPushButton *buttonClose;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *editPointName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *comboBoxMarketplace;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QComboBox *comboBoxFirstEmployee;
    QComboBox *comboBoxSecondEmployee;

    void setupUi(QDialog *EditPointDialog)
    {
        if (EditPointDialog->objectName().isEmpty())
            EditPointDialog->setObjectName(QString::fromUtf8("EditPointDialog"));
        EditPointDialog->resize(355, 234);
        groupBox = new QGroupBox(EditPointDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setGeometry(QRect(360, 11, 101, 147));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editStartDate = new QLineEdit(groupBox);
        editStartDate->setObjectName(QString::fromUtf8("editStartDate"));
        editStartDate->setEnabled(false);

        verticalLayout->addWidget(editStartDate);

        editOpenDate = new QLineEdit(groupBox);
        editOpenDate->setObjectName(QString::fromUtf8("editOpenDate"));
        editOpenDate->setEnabled(false);

        verticalLayout->addWidget(editOpenDate);

        layoutWidget = new QWidget(EditPointDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 336, 214));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        dateEditOpen = new QDateEdit(layoutWidget);
        dateEditOpen->setObjectName(QString::fromUtf8("dateEditOpen"));

        gridLayout->addWidget(dateEditOpen, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        dateEditStart = new QDateEdit(layoutWidget);
        dateEditStart->setObjectName(QString::fromUtf8("dateEditStart"));

        gridLayout->addWidget(dateEditStart, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        timeEditEndOfShift = new QTimeEdit(layoutWidget);
        timeEditEndOfShift->setObjectName(QString::fromUtf8("timeEditEndOfShift"));
        timeEditEndOfShift->setEnabled(false);
        timeEditEndOfShift->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(21, 0, 0)));

        gridLayout->addWidget(timeEditEndOfShift, 2, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        comboBoxSchedule = new QComboBox(layoutWidget);
        comboBoxSchedule->setObjectName(QString::fromUtf8("comboBoxSchedule"));

        gridLayout->addWidget(comboBoxSchedule, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonApply = new QPushButton(layoutWidget);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));

        horizontalLayout->addWidget(buttonApply);

        buttonClose = new QPushButton(layoutWidget);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        horizontalLayout->addWidget(buttonClose);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        editPointName = new QLineEdit(layoutWidget);
        editPointName->setObjectName(QString::fromUtf8("editPointName"));

        verticalLayout_2->addWidget(editPointName);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        comboBoxMarketplace = new QComboBox(layoutWidget);
        comboBoxMarketplace->addItem(QString());
        comboBoxMarketplace->addItem(QString());
        comboBoxMarketplace->addItem(QString());
        comboBoxMarketplace->setObjectName(QString::fromUtf8("comboBoxMarketplace"));
        comboBoxMarketplace->setEditable(true);

        verticalLayout_3->addWidget(comboBoxMarketplace);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        comboBoxFirstEmployee = new QComboBox(layoutWidget);
        comboBoxFirstEmployee->setObjectName(QString::fromUtf8("comboBoxFirstEmployee"));

        verticalLayout_4->addWidget(comboBoxFirstEmployee);

        comboBoxSecondEmployee = new QComboBox(layoutWidget);
        comboBoxSecondEmployee->setObjectName(QString::fromUtf8("comboBoxSecondEmployee"));

        verticalLayout_4->addWidget(comboBoxSecondEmployee);


        gridLayout_2->addLayout(verticalLayout_4, 2, 0, 2, 1);

        QWidget::setTabOrder(editPointName, comboBoxFirstEmployee);
        QWidget::setTabOrder(comboBoxFirstEmployee, comboBoxMarketplace);
        QWidget::setTabOrder(comboBoxMarketplace, comboBoxSecondEmployee);
        QWidget::setTabOrder(comboBoxSecondEmployee, dateEditOpen);
        QWidget::setTabOrder(dateEditOpen, dateEditStart);
        QWidget::setTabOrder(dateEditStart, timeEditEndOfShift);
        QWidget::setTabOrder(timeEditEndOfShift, comboBoxSchedule);
        QWidget::setTabOrder(comboBoxSchedule, buttonApply);
        QWidget::setTabOrder(buttonApply, buttonClose);
        QWidget::setTabOrder(buttonClose, editStartDate);
        QWidget::setTabOrder(editStartDate, editOpenDate);

        retranslateUi(EditPointDialog);

        comboBoxMarketplace->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(EditPointDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPointDialog)
    {
        EditPointDialog->setWindowTitle(QCoreApplication::translate("EditPointDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\321\203\320\275\320\272\321\202\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditPointDialog", "Hidden fields", nullptr));
        label_3->setText(QCoreApplication::translate("EditPointDialog", "\320\236\321\202\320\272\321\200\321\213\321\202\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("EditPointDialog", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_5->setText(QCoreApplication::translate("EditPointDialog", "\320\232\320\276\320\275\320\265\321\206 \321\201\320\274\320\265\320\275\321\213", nullptr));
        label_6->setText(QCoreApplication::translate("EditPointDialog", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        buttonApply->setText(QCoreApplication::translate("EditPointDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        buttonClose->setText(QCoreApplication::translate("EditPointDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("EditPointDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("EditPointDialog", "\320\237\320\273\320\276\321\211\320\260\320\264\320\272\320\260", nullptr));
        comboBoxMarketplace->setItemText(0, QCoreApplication::translate("EditPointDialog", "Wildberries", nullptr));
        comboBoxMarketplace->setItemText(1, QCoreApplication::translate("EditPointDialog", "Ozon", nullptr));
        comboBoxMarketplace->setItemText(2, QCoreApplication::translate("EditPointDialog", "\320\257\320\275\320\264\320\265\320\272\321\201.\320\234\320\260\321\200\320\272\320\265\321\202", nullptr));

        label_7->setText(QCoreApplication::translate("EditPointDialog", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPointDialog: public Ui_EditPointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOINTDIALOG_H
