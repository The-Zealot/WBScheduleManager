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
#include <QtWidgets/QCheckBox>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowserShiftInfo;
    QTextBrowser *textBrowserLoggs;
    QWidget *tab_2;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *editEmployeeName;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editHex;
    QPushButton *widgetColor_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editSalary;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QPushButton *buttonEdit;
    QWidget *tab_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxFinishedDays;
    QCheckBox *checkBoxPayedDays;
    QCheckBox *checkBoxShifts;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *editEmployee1;
    QLineEdit *editEmployee2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editColorPayedDay;
    QPushButton *widgetColor;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *editColorFinishedDay;
    QPushButton *widgetColor2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QDateEdit *dateEditOpen;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *dateEditStartpoint;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSchedle;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSaveSettings;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(748, 486);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 501, 451));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(11, 104, 285, 303));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);
        calendarWidget->setMinimumSize(QSize(0, 0));
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
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 475, 86));
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

        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(303, 104, 183, 303));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textBrowserShiftInfo = new QTextBrowser(layoutWidget);
        textBrowserShiftInfo->setObjectName(QString::fromUtf8("textBrowserShiftInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowserShiftInfo->sizePolicy().hasHeightForWidth());
        textBrowserShiftInfo->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(textBrowserShiftInfo);

        textBrowserLoggs = new QTextBrowser(layoutWidget);
        textBrowserLoggs->setObjectName(QString::fromUtf8("textBrowserLoggs"));
        sizePolicy1.setHeightForWidth(textBrowserLoggs->sizePolicy().hasHeightForWidth());
        textBrowserLoggs->setSizePolicy(sizePolicy1);
        textBrowserLoggs->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(textBrowserLoggs);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 321, 381));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(340, 10, 151, 193));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editEmployeeName = new QLineEdit(layoutWidget1);
        editEmployeeName->setObjectName(QString::fromUtf8("editEmployeeName"));

        verticalLayout_2->addWidget(editEmployeeName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editHex = new QLineEdit(layoutWidget1);
        editHex->setObjectName(QString::fromUtf8("editHex"));

        horizontalLayout->addWidget(editHex);

        widgetColor_2 = new QPushButton(layoutWidget1);
        widgetColor_2->setObjectName(QString::fromUtf8("widgetColor_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetColor_2->sizePolicy().hasHeightForWidth());
        widgetColor_2->setSizePolicy(sizePolicy2);
        widgetColor_2->setMinimumSize(QSize(42, 0));

        horizontalLayout->addWidget(widgetColor_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editSalary = new QLineEdit(layoutWidget1);
        editSalary->setObjectName(QString::fromUtf8("editSalary"));

        horizontalLayout_3->addWidget(editSalary);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonAdd = new QPushButton(layoutWidget1);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        verticalLayout->addWidget(buttonAdd);

        buttonRemove = new QPushButton(layoutWidget1);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        verticalLayout->addWidget(buttonRemove);

        buttonEdit = new QPushButton(layoutWidget1);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        verticalLayout->addWidget(buttonEdit);


        verticalLayout_4->addLayout(verticalLayout);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(520, 40, 209, 421));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBoxFinishedDays = new QCheckBox(layoutWidget2);
        checkBoxFinishedDays->setObjectName(QString::fromUtf8("checkBoxFinishedDays"));
        checkBoxFinishedDays->setChecked(true);

        verticalLayout_3->addWidget(checkBoxFinishedDays);

        checkBoxPayedDays = new QCheckBox(layoutWidget2);
        checkBoxPayedDays->setObjectName(QString::fromUtf8("checkBoxPayedDays"));
        checkBoxPayedDays->setChecked(true);

        verticalLayout_3->addWidget(checkBoxPayedDays);

        checkBoxShifts = new QCheckBox(layoutWidget2);
        checkBoxShifts->setObjectName(QString::fromUtf8("checkBoxShifts"));
        checkBoxShifts->setChecked(true);

        verticalLayout_3->addWidget(checkBoxShifts);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        editEmployee1 = new QLineEdit(layoutWidget2);
        editEmployee1->setObjectName(QString::fromUtf8("editEmployee1"));

        verticalLayout_5->addWidget(editEmployee1);

        editEmployee2 = new QLineEdit(layoutWidget2);
        editEmployee2->setObjectName(QString::fromUtf8("editEmployee2"));

        verticalLayout_5->addWidget(editEmployee2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editColorPayedDay = new QLineEdit(layoutWidget2);
        editColorPayedDay->setObjectName(QString::fromUtf8("editColorPayedDay"));

        horizontalLayout_2->addWidget(editColorPayedDay);

        widgetColor = new QPushButton(layoutWidget2);
        widgetColor->setObjectName(QString::fromUtf8("widgetColor"));
        sizePolicy2.setHeightForWidth(widgetColor->sizePolicy().hasHeightForWidth());
        widgetColor->setSizePolicy(sizePolicy2);
        widgetColor->setMinimumSize(QSize(42, 0));

        horizontalLayout_2->addWidget(widgetColor);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        editColorFinishedDay = new QLineEdit(layoutWidget2);
        editColorFinishedDay->setObjectName(QString::fromUtf8("editColorFinishedDay"));

        horizontalLayout_7->addWidget(editColorFinishedDay);

        widgetColor2 = new QPushButton(layoutWidget2);
        widgetColor2->setObjectName(QString::fromUtf8("widgetColor2"));
        sizePolicy2.setHeightForWidth(widgetColor2->sizePolicy().hasHeightForWidth());
        widgetColor2->setSizePolicy(sizePolicy2);
        widgetColor2->setMinimumSize(QSize(42, 0));

        horizontalLayout_7->addWidget(widgetColor2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        dateEditOpen = new QDateEdit(layoutWidget2);
        dateEditOpen->setObjectName(QString::fromUtf8("dateEditOpen"));

        horizontalLayout_8->addWidget(dateEditOpen);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        dateEditStartpoint = new QDateEdit(layoutWidget2);
        dateEditStartpoint->setObjectName(QString::fromUtf8("dateEditStartpoint"));
        dateEditStartpoint->setDateTime(QDateTime(QDate(2023, 2, 20), QTime(0, 0, 0)));

        horizontalLayout_6->addWidget(dateEditStartpoint);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBoxSchedle = new QComboBox(layoutWidget2);
        comboBoxSchedle->setObjectName(QString::fromUtf8("comboBoxSchedle"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxSchedle->sizePolicy().hasHeightForWidth());
        comboBoxSchedle->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(comboBoxSchedle);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        buttonSaveSettings = new QPushButton(layoutWidget2);
        buttonSaveSettings->setObjectName(QString::fromUtf8("buttonSaveSettings"));

        horizontalLayout_5->addWidget(buttonSaveSettings);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, calendarWidget);
        QWidget::setTabOrder(calendarWidget, toolButtonArrow);
        QWidget::setTabOrder(toolButtonArrow, toolButtonEmployees);
        QWidget::setTabOrder(toolButtonEmployees, toolButtonSalary);
        QWidget::setTabOrder(toolButtonSalary, toolButtonPaymentTarget);
        QWidget::setTabOrder(toolButtonPaymentTarget, toolButtonPaymentGeneral);
        QWidget::setTabOrder(toolButtonPaymentGeneral, toolButtonClear);
        QWidget::setTabOrder(toolButtonClear, toolButtonCalculate);
        QWidget::setTabOrder(toolButtonCalculate, toolButtonSave);
        QWidget::setTabOrder(toolButtonSave, toolButtonLoad);
        QWidget::setTabOrder(toolButtonLoad, toolButtonInfo);
        QWidget::setTabOrder(toolButtonInfo, textBrowserShiftInfo);
        QWidget::setTabOrder(textBrowserShiftInfo, textBrowserLoggs);
        QWidget::setTabOrder(textBrowserLoggs, checkBoxFinishedDays);
        QWidget::setTabOrder(checkBoxFinishedDays, checkBoxPayedDays);
        QWidget::setTabOrder(checkBoxPayedDays, checkBoxShifts);
        QWidget::setTabOrder(checkBoxShifts, editEmployee1);
        QWidget::setTabOrder(editEmployee1, editEmployee2);
        QWidget::setTabOrder(editEmployee2, editColorPayedDay);
        QWidget::setTabOrder(editColorPayedDay, widgetColor);
        QWidget::setTabOrder(widgetColor, editColorFinishedDay);
        QWidget::setTabOrder(editColorFinishedDay, widgetColor2);
        QWidget::setTabOrder(widgetColor2, dateEditOpen);
        QWidget::setTabOrder(dateEditOpen, dateEditStartpoint);
        QWidget::setTabOrder(dateEditStartpoint, comboBoxSchedle);
        QWidget::setTabOrder(comboBoxSchedle, buttonSaveSettings);
        QWidget::setTabOrder(buttonSaveSettings, tableView);
        QWidget::setTabOrder(tableView, editEmployeeName);
        QWidget::setTabOrder(editEmployeeName, editHex);
        QWidget::setTabOrder(editHex, widgetColor_2);
        QWidget::setTabOrder(widgetColor_2, editSalary);
        QWidget::setTabOrder(editSalary, buttonAdd);
        QWidget::setTabOrder(buttonAdd, buttonRemove);
        QWidget::setTabOrder(buttonRemove, buttonEdit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
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
        textBrowserLoggs->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\274\320\265\320\275 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\276:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 %1: %2 (%3 \321\200\321\203\320\261.)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272 %4: "
                        "%5 (%6 \321\200\321\203\320\261.)</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        editEmployeeName->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        editHex->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        widgetColor_2->setText(QString());
        editSalary->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\342\202\275</span></p></body></html>", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonRemove->setText(QCoreApplication::translate("MainWindow", "\320\243\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        checkBoxFinishedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\321\213\320\265 \320\264\320\275\320\270", nullptr));
        checkBoxPayedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\207\320\265\320\275\320\275\321\213\320\265 \320\264\320\275\320\270", nullptr));
        checkBoxShifts->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\321\213", nullptr));
        editEmployee1->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \342\204\2261", nullptr));
        editEmployee2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260 \342\204\2262", nullptr));
        editColorPayedDay->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\320\277\320\273\320\260\321\207\320\265\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
        widgetColor->setText(QString());
        editColorFinishedDay->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
        widgetColor2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\264\320\260\321\202\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272:", nullptr));
        buttonSaveSettings->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
