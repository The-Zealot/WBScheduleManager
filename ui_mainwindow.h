/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCalendarWidget *calendarWidget;
    QTextBrowser *textBrowserLoggs;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *toolButtonArrow;
    QToolButton *toolButtonEmployees;
    QToolButton *toolButtonSalary;
    QToolButton *toolButtonPaymentTarget;
    QToolButton *toolButtonPaymentGeneral;
    QToolButton *toolButtonClear;
    QToolButton *toolButtonCalculate;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonLoad;
    QToolButton *toolButtonInfo;
    QTextBrowser *textBrowserShiftInfo;
    QWidget *tab_2;
    QTableView *tableView;
    QLineEdit *editHex;
    QPushButton *buttonEdit;
    QPushButton *buttonRemove;
    QPushButton *buttonAdd;
    QLineEdit *editEmployee1_2;
    QPushButton *widgetColor_2;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editEmployee1;
    QPushButton *widgetColor;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editEmployee2;
    QPushButton *widgetColor2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *editSalary;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonPay;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(742, 468);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 501, 431));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 100, 301, 291));
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget QToolButton {\n"
"  	color: white;\n"
"	background-color: rgb(0, 120, 215);\n"
"  }\n"
"  \n"
"  QCalendarWidget QSpinBox { \n"
"  	color: white; \n"
"	background-color: rgb(0, 120, 215);\n"
"  	selection-background-color: rgb(136, 136, 136);\n"
"  	selection-color: rgb(255, 255, 255);\n"
"  }\n"
"  /* header row */\n"
"  QCalendarWidget QWidget { alternate-background-color: rgb(210, 210, 210); }\n"
"   \n"
"  /* normal days */\n"
"  QCalendarWidget QAbstractItemView:enabled \n"
"  {\n"
"  	color: black;  \n"
"  	background-color: rgb(220, 220, 220);  \n"
"	selection-background-color: rgb(0, 100, 255); \n"
"  	selection-color: rgb(255, 255, 255); \n"
"  }\n"
"   \n"
"  /* days in other months */\n"
"  /* navigation bar */\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar\n"
"{  \n"
"	background-color: rgb(0, 120, 215);\n"
"}\n"
"QCalendarWidget QAbstractItemView:disabled \n"
"{ \n"
"color: rgb(77, 77, 77); \n"
"}"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        textBrowserLoggs = new QTextBrowser(tab);
        textBrowserLoggs->setObjectName(QString::fromUtf8("textBrowserLoggs"));
        textBrowserLoggs->setGeometry(QRect(320, 250, 171, 141));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowserLoggs->sizePolicy().hasHeightForWidth());
        textBrowserLoggs->setSizePolicy(sizePolicy);
        textBrowserLoggs->setMaximumSize(QSize(16777215, 16777215));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 86));
        horizontalLayout_9 = new QHBoxLayout(groupBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        toolButtonArrow = new QToolButton(groupBox);
        toolButtonArrow->setObjectName(QString::fromUtf8("toolButtonArrow"));
        toolButtonArrow->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonArrow);

        toolButtonEmployees = new QToolButton(groupBox);
        toolButtonEmployees->setObjectName(QString::fromUtf8("toolButtonEmployees"));
        toolButtonEmployees->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonEmployees);

        toolButtonSalary = new QToolButton(groupBox);
        toolButtonSalary->setObjectName(QString::fromUtf8("toolButtonSalary"));
        toolButtonSalary->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonSalary);

        toolButtonPaymentTarget = new QToolButton(groupBox);
        toolButtonPaymentTarget->setObjectName(QString::fromUtf8("toolButtonPaymentTarget"));
        toolButtonPaymentTarget->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonPaymentTarget);

        toolButtonPaymentGeneral = new QToolButton(groupBox);
        toolButtonPaymentGeneral->setObjectName(QString::fromUtf8("toolButtonPaymentGeneral"));
        toolButtonPaymentGeneral->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonPaymentGeneral);

        toolButtonClear = new QToolButton(groupBox);
        toolButtonClear->setObjectName(QString::fromUtf8("toolButtonClear"));
        toolButtonClear->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonClear);

        toolButtonCalculate = new QToolButton(groupBox);
        toolButtonCalculate->setObjectName(QString::fromUtf8("toolButtonCalculate"));
        toolButtonCalculate->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonCalculate);

        toolButtonSave = new QToolButton(groupBox);
        toolButtonSave->setObjectName(QString::fromUtf8("toolButtonSave"));
        toolButtonSave->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonSave);

        toolButtonLoad = new QToolButton(groupBox);
        toolButtonLoad->setObjectName(QString::fromUtf8("toolButtonLoad"));
        toolButtonLoad->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonLoad);

        toolButtonInfo = new QToolButton(groupBox);
        toolButtonInfo->setObjectName(QString::fromUtf8("toolButtonInfo"));
        toolButtonInfo->setIconSize(QSize(32, 32));

        horizontalLayout_9->addWidget(toolButtonInfo);

        textBrowserShiftInfo = new QTextBrowser(tab);
        textBrowserShiftInfo->setObjectName(QString::fromUtf8("textBrowserShiftInfo"));
        textBrowserShiftInfo->setGeometry(QRect(320, 100, 171, 141));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 321, 381));
        editHex = new QLineEdit(tab_2);
        editHex->setObjectName(QString::fromUtf8("editHex"));
        editHex->setGeometry(QRect(340, 40, 101, 24));
        buttonEdit = new QPushButton(tab_2);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));
        buttonEdit->setGeometry(QRect(340, 130, 80, 25));
        buttonRemove = new QPushButton(tab_2);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));
        buttonRemove->setGeometry(QRect(340, 100, 80, 25));
        buttonAdd = new QPushButton(tab_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setGeometry(QRect(340, 70, 80, 25));
        editEmployee1_2 = new QLineEdit(tab_2);
        editEmployee1_2->setObjectName(QString::fromUtf8("editEmployee1_2"));
        editEmployee1_2->setGeometry(QRect(340, 10, 151, 24));
        widgetColor_2 = new QPushButton(tab_2);
        widgetColor_2->setObjectName(QString::fromUtf8("widgetColor_2"));
        widgetColor_2->setGeometry(QRect(450, 40, 42, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetColor_2->sizePolicy().hasHeightForWidth());
        widgetColor_2->setSizePolicy(sizePolicy1);
        widgetColor_2->setMinimumSize(QSize(42, 0));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 40, 207, 199));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editEmployee1 = new QLineEdit(layoutWidget);
        editEmployee1->setObjectName(QString::fromUtf8("editEmployee1"));

        horizontalLayout->addWidget(editEmployee1);

        widgetColor = new QPushButton(layoutWidget);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));
        sizePolicy1.setHeightForWidth(widgetColor->sizePolicy().hasHeightForWidth());
        widgetColor->setSizePolicy(sizePolicy1);
        widgetColor->setMinimumSize(QSize(42, 0));

        horizontalLayout->addWidget(widgetColor);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editEmployee2 = new QLineEdit(layoutWidget);
        editEmployee2->setObjectName(QString::fromUtf8("editEmployee2"));

        horizontalLayout_2->addWidget(editEmployee2);

        widgetColor2 = new QPushButton(layoutWidget);
        widgetColor2->setObjectName(QString::fromUtf8("widgetColor2"));
        sizePolicy1.setHeightForWidth(widgetColor2->sizePolicy().hasHeightForWidth());
        widgetColor2->setSizePolicy(sizePolicy1);
        widgetColor2->setMinimumSize(QSize(42, 0));

        horizontalLayout_2->addWidget(widgetColor2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2023, 2, 20), QTime(0, 0, 0)));

        horizontalLayout_6->addWidget(dateEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        editSalary = new QLineEdit(layoutWidget);
        editSalary->setObjectName(QString::fromUtf8("editSalary"));

        horizontalLayout_3->addWidget(editSalary);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        buttonPay = new QPushButton(layoutWidget);
        buttonPay->setObjectName(QString::fromUtf8("buttonPay"));

        horizontalLayout_5->addWidget(buttonPay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
        textBrowserLoggs->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\274\320\265\320\275 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 %1: %2 (%3 \321\200\321\203\320\261.)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 %4: "
                        "%5 (%6 \321\200\321\203\320\261.)</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        toolButtonArrow->setText(QString());
        toolButtonEmployees->setText(QString());
        toolButtonSalary->setText(QString());
        toolButtonPaymentTarget->setText(QString());
        toolButtonPaymentGeneral->setText(QString());
        toolButtonClear->setText(QString());
        toolButtonCalculate->setText(QString());
        toolButtonSave->setText(QString());
        toolButtonLoad->setText(QString());
        toolButtonInfo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        editHex->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        buttonEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        buttonRemove->setText(QCoreApplication::translate("MainWindow", "\320\243\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        editEmployee1_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        widgetColor_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        editEmployee1->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \342\204\2261", nullptr));
        widgetColor->setText(QString());
        editEmployee2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \342\204\2262", nullptr));
        widgetColor2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\264\320\260\321\202\320\260:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\342\202\275</span></p></body></html>", nullptr));
        buttonPay->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\273\320\260\321\202\320\260/\320\241\320\261\321\200\320\276\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
