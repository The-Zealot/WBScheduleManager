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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_12;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxPoint;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxPayedDays;
    QCheckBox *checkBoxFinishedDays;
    QCheckBox *checkBoxShifts;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowserShiftInfo;
    QTextBrowser *textBrowserLoggs;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButtonArrow;
    QToolButton *toolButtonEmployees;
    QToolButton *toolButtonSalary;
    QToolButton *toolButtonPaymentTarget;
    QToolButton *toolButtonPaymentGeneral;
    QToolButton *toolButtonCalculate;
    QToolButton *toolButtonClear;
    QFrame *line;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonLoad;
    QToolButton *toolButtonReset;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLineEdit *editHex;
    ColorWidget *colorWidget;
    QLineEdit *editEmployeeName;
    QLineEdit *editSalary;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QPushButton *buttonEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QTableView *tableViewPoints;
    QTextBrowser *textBrowserStats;
    QPushButton *buttonAddPoint;
    QPushButton *buttonDeletePoint;
    QPushButton *buttonStatistics;
    QPushButton *buttonReport;
    QLineEdit *editPointName;
    QLineEdit *lineEdit_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editColorPayedDay;
    ColorWidget *colorWidgetPayedDay;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *editColorFinishedDay;
    ColorWidget *colorWidgetFinishedDay;
    QHBoxLayout *horizontalLayout_23;
    QLineEdit *editColorWorkDay;
    ColorWidget *colorWidgetWorkDay;
    QHBoxLayout *horizontalLayout_24;
    QLineEdit *editColorHoliday;
    ColorWidget *colorWidgetHoliday;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_5;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *buttonSaveSettings;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_6;
    QToolButton *toolButton_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QProgressBar *progressBar;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *editServerIP;
    QLabel *label;
    QLineEdit *editServerPort;
    QWidget *tab_5;
    QGridLayout *gridLayout_10;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_11;
    QLabel *labelNews;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(607, 490);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_12 = new QGridLayout(centralwidget);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(true);
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBoxPoint = new QComboBox(groupBox_3);
        comboBoxPoint->setObjectName(QString::fromUtf8("comboBoxPoint"));

        verticalLayout->addWidget(comboBoxPoint);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
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

        verticalLayout->addWidget(calendarWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBoxPayedDays = new QCheckBox(groupBox_3);
        checkBoxPayedDays->setObjectName(QString::fromUtf8("checkBoxPayedDays"));
        checkBoxPayedDays->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxPayedDays);

        checkBoxFinishedDays = new QCheckBox(groupBox_3);
        checkBoxFinishedDays->setObjectName(QString::fromUtf8("checkBoxFinishedDays"));
        checkBoxFinishedDays->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxFinishedDays);

        checkBoxShifts = new QCheckBox(groupBox_3);
        checkBoxShifts->setObjectName(QString::fromUtf8("checkBoxShifts"));
        checkBoxShifts->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxShifts);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        textBrowserShiftInfo = new QTextBrowser(groupBox_4);
        textBrowserShiftInfo->setObjectName(QString::fromUtf8("textBrowserShiftInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowserShiftInfo->sizePolicy().hasHeightForWidth());
        textBrowserShiftInfo->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(textBrowserShiftInfo);

        textBrowserLoggs = new QTextBrowser(groupBox_4);
        textBrowserLoggs->setObjectName(QString::fromUtf8("textBrowserLoggs"));
        sizePolicy1.setHeightForWidth(textBrowserLoggs->sizePolicy().hasHeightForWidth());
        textBrowserLoggs->setSizePolicy(sizePolicy1);
        textBrowserLoggs->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(textBrowserLoggs);


        gridLayout_3->addWidget(groupBox_4, 1, 1, 1, 1);

        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButtonArrow = new QToolButton(frame);
        toolButtonArrow->setObjectName(QString::fromUtf8("toolButtonArrow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/toolBar/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonArrow->setIcon(icon);
        toolButtonArrow->setIconSize(QSize(24, 24));
        toolButtonArrow->setCheckable(false);
        toolButtonArrow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButtonArrow->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonArrow);

        toolButtonEmployees = new QToolButton(frame);
        toolButtonEmployees->setObjectName(QString::fromUtf8("toolButtonEmployees"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/toolBar/employee.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonEmployees->setIcon(icon1);
        toolButtonEmployees->setIconSize(QSize(24, 24));
        toolButtonEmployees->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonEmployees);

        toolButtonSalary = new QToolButton(frame);
        toolButtonSalary->setObjectName(QString::fromUtf8("toolButtonSalary"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/toolBar/salary.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSalary->setIcon(icon2);
        toolButtonSalary->setIconSize(QSize(24, 24));
        toolButtonSalary->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonSalary);

        toolButtonPaymentTarget = new QToolButton(frame);
        toolButtonPaymentTarget->setObjectName(QString::fromUtf8("toolButtonPaymentTarget"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/toolBar/paymentTarget.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPaymentTarget->setIcon(icon3);
        toolButtonPaymentTarget->setIconSize(QSize(24, 24));
        toolButtonPaymentTarget->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonPaymentTarget);

        toolButtonPaymentGeneral = new QToolButton(frame);
        toolButtonPaymentGeneral->setObjectName(QString::fromUtf8("toolButtonPaymentGeneral"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/toolBar/paymentGeneral.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonPaymentGeneral->setIcon(icon4);
        toolButtonPaymentGeneral->setIconSize(QSize(24, 24));
        toolButtonPaymentGeneral->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonPaymentGeneral);

        toolButtonCalculate = new QToolButton(frame);
        toolButtonCalculate->setObjectName(QString::fromUtf8("toolButtonCalculate"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/toolBar/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonCalculate->setIcon(icon5);
        toolButtonCalculate->setIconSize(QSize(24, 24));
        toolButtonCalculate->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonCalculate);

        toolButtonClear = new QToolButton(frame);
        toolButtonClear->setObjectName(QString::fromUtf8("toolButtonClear"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/toolBar/clearTarget.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonClear->setIcon(icon6);
        toolButtonClear->setIconSize(QSize(24, 24));
        toolButtonClear->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonClear);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line);

        toolButtonSave = new QToolButton(frame);
        toolButtonSave->setObjectName(QString::fromUtf8("toolButtonSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/toolBar/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSave->setIcon(icon7);
        toolButtonSave->setIconSize(QSize(24, 24));
        toolButtonSave->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonSave);

        toolButtonLoad = new QToolButton(frame);
        toolButtonLoad->setObjectName(QString::fromUtf8("toolButtonLoad"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/toolBar/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLoad->setIcon(icon8);
        toolButtonLoad->setIconSize(QSize(24, 24));
        toolButtonLoad->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonLoad);

        toolButtonReset = new QToolButton(frame);
        toolButtonReset->setObjectName(QString::fromUtf8("toolButtonReset"));
        toolButtonReset->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/toolBar/clearGeneral.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonReset->setIcon(icon9);
        toolButtonReset->setIconSize(QSize(24, 24));
        toolButtonReset->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonReset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_3->addWidget(frame, 0, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_7->addWidget(tableView, 0, 0, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editHex = new QLineEdit(tab_2);
        editHex->setObjectName(QString::fromUtf8("editHex"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editHex->sizePolicy().hasHeightForWidth());
        editHex->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(editHex, 1, 0, 1, 1);

        colorWidget = new ColorWidget(tab_2);
        colorWidget->setObjectName(QString::fromUtf8("colorWidget"));
        sizePolicy2.setHeightForWidth(colorWidget->sizePolicy().hasHeightForWidth());
        colorWidget->setSizePolicy(sizePolicy2);
        colorWidget->setMinimumSize(QSize(42, 0));

        gridLayout->addWidget(colorWidget, 1, 1, 1, 1);

        editEmployeeName = new QLineEdit(tab_2);
        editEmployeeName->setObjectName(QString::fromUtf8("editEmployeeName"));
        sizePolicy2.setHeightForWidth(editEmployeeName->sizePolicy().hasHeightForWidth());
        editEmployeeName->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(editEmployeeName, 0, 0, 1, 2);

        editSalary = new QLineEdit(tab_2);
        editSalary->setObjectName(QString::fromUtf8("editSalary"));
        sizePolicy2.setHeightForWidth(editSalary->sizePolicy().hasHeightForWidth());
        editSalary->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(editSalary, 2, 0, 1, 2);

        buttonAdd = new QPushButton(tab_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 3, 0, 1, 2);

        buttonRemove = new QPushButton(tab_2);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        gridLayout->addWidget(buttonRemove, 4, 0, 1, 2);

        buttonEdit = new QPushButton(tab_2);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        gridLayout->addWidget(buttonEdit, 5, 0, 1, 2);


        gridLayout_7->addLayout(gridLayout, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableViewPoints = new QTableView(tab_3);
        tableViewPoints->setObjectName(QString::fromUtf8("tableViewPoints"));

        gridLayout_2->addWidget(tableViewPoints, 0, 0, 1, 2);

        textBrowserStats = new QTextBrowser(tab_3);
        textBrowserStats->setObjectName(QString::fromUtf8("textBrowserStats"));

        gridLayout_2->addWidget(textBrowserStats, 0, 2, 1, 2);

        buttonAddPoint = new QPushButton(tab_3);
        buttonAddPoint->setObjectName(QString::fromUtf8("buttonAddPoint"));

        gridLayout_2->addWidget(buttonAddPoint, 2, 0, 1, 1);

        buttonDeletePoint = new QPushButton(tab_3);
        buttonDeletePoint->setObjectName(QString::fromUtf8("buttonDeletePoint"));

        gridLayout_2->addWidget(buttonDeletePoint, 2, 1, 1, 1);

        buttonStatistics = new QPushButton(tab_3);
        buttonStatistics->setObjectName(QString::fromUtf8("buttonStatistics"));
        buttonStatistics->setEnabled(true);

        gridLayout_2->addWidget(buttonStatistics, 2, 2, 1, 1);

        buttonReport = new QPushButton(tab_3);
        buttonReport->setObjectName(QString::fromUtf8("buttonReport"));
        buttonReport->setEnabled(false);
        buttonReport->setCheckable(false);
        buttonReport->setChecked(false);
        buttonReport->setAutoDefault(false);
        buttonReport->setFlat(false);

        gridLayout_2->addWidget(buttonReport, 2, 3, 1, 1);

        editPointName = new QLineEdit(tab_3);
        editPointName->setObjectName(QString::fromUtf8("editPointName"));
        editPointName->setReadOnly(false);
        editPointName->setClearButtonEnabled(true);

        gridLayout_2->addWidget(editPointName, 1, 0, 1, 2);

        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_2, 1, 2, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_9 = new QGridLayout(tab_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editColorPayedDay = new QLineEdit(groupBox_5);
        editColorPayedDay->setObjectName(QString::fromUtf8("editColorPayedDay"));

        horizontalLayout->addWidget(editColorPayedDay);

        colorWidgetPayedDay = new ColorWidget(groupBox_5);
        colorWidgetPayedDay->setObjectName(QString::fromUtf8("colorWidgetPayedDay"));
        sizePolicy2.setHeightForWidth(colorWidgetPayedDay->sizePolicy().hasHeightForWidth());
        colorWidgetPayedDay->setSizePolicy(sizePolicy2);
        colorWidgetPayedDay->setMinimumSize(QSize(42, 0));

        horizontalLayout->addWidget(colorWidgetPayedDay);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        editColorFinishedDay = new QLineEdit(groupBox_5);
        editColorFinishedDay->setObjectName(QString::fromUtf8("editColorFinishedDay"));

        horizontalLayout_9->addWidget(editColorFinishedDay);

        colorWidgetFinishedDay = new ColorWidget(groupBox_5);
        colorWidgetFinishedDay->setObjectName(QString::fromUtf8("colorWidgetFinishedDay"));
        sizePolicy2.setHeightForWidth(colorWidgetFinishedDay->sizePolicy().hasHeightForWidth());
        colorWidgetFinishedDay->setSizePolicy(sizePolicy2);
        colorWidgetFinishedDay->setMinimumSize(QSize(42, 0));

        horizontalLayout_9->addWidget(colorWidgetFinishedDay);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        editColorWorkDay = new QLineEdit(groupBox_5);
        editColorWorkDay->setObjectName(QString::fromUtf8("editColorWorkDay"));

        horizontalLayout_23->addWidget(editColorWorkDay);

        colorWidgetWorkDay = new ColorWidget(groupBox_5);
        colorWidgetWorkDay->setObjectName(QString::fromUtf8("colorWidgetWorkDay"));
        sizePolicy2.setHeightForWidth(colorWidgetWorkDay->sizePolicy().hasHeightForWidth());
        colorWidgetWorkDay->setSizePolicy(sizePolicy2);
        colorWidgetWorkDay->setMinimumSize(QSize(42, 0));

        horizontalLayout_23->addWidget(colorWidgetWorkDay);


        verticalLayout_4->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        editColorHoliday = new QLineEdit(groupBox_5);
        editColorHoliday->setObjectName(QString::fromUtf8("editColorHoliday"));

        horizontalLayout_24->addWidget(editColorHoliday);

        colorWidgetHoliday = new ColorWidget(groupBox_5);
        colorWidgetHoliday->setObjectName(QString::fromUtf8("colorWidgetHoliday"));
        sizePolicy2.setHeightForWidth(colorWidgetHoliday->sizePolicy().hasHeightForWidth());
        colorWidgetHoliday->setSizePolicy(sizePolicy2);
        colorWidgetHoliday->setMinimumSize(QSize(42, 0));

        horizontalLayout_24->addWidget(colorWidgetHoliday);


        verticalLayout_4->addLayout(horizontalLayout_24);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        gridLayout_9->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lineEdit_5 = new QLineEdit(groupBox_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_11->addWidget(lineEdit_5);

        toolButton = new QToolButton(groupBox_6);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_11->addWidget(toolButton);


        gridLayout_8->addLayout(horizontalLayout_11, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        horizontalSlider = new QSlider(groupBox_6);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(50);
        horizontalSlider->setMaximum(150);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider);


        gridLayout_8->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(groupBox_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_12->addWidget(pushButton_2);

        buttonSaveSettings = new QPushButton(groupBox_6);
        buttonSaveSettings->setObjectName(QString::fromUtf8("buttonSaveSettings"));

        horizontalLayout_12->addWidget(buttonSaveSettings);


        gridLayout_8->addLayout(horizontalLayout_12, 7, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBox_4 = new QCheckBox(groupBox_6);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_4->addWidget(checkBox_4, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(groupBox_6);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_4->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_4->addWidget(checkBox_2, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lineEdit_6 = new QLineEdit(groupBox_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_13->addWidget(lineEdit_6);

        toolButton_2 = new QToolButton(groupBox_6);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_13->addWidget(toolButton_2);


        gridLayout_8->addLayout(horizontalLayout_13, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 5, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineEdit_3 = new QLineEdit(groupBox_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_5->addWidget(lineEdit_3, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 1, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_5->addWidget(lineEdit_4, 0, 2, 1, 1);

        progressBar = new QProgressBar(groupBox_6);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout_5->addWidget(progressBar, 1, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_5, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_4, 6, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_6, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        editServerIP = new QLineEdit(groupBox_2);
        editServerIP->setObjectName(QString::fromUtf8("editServerIP"));

        horizontalLayout_4->addWidget(editServerIP);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        editServerPort = new QLineEdit(groupBox_2);
        editServerPort->setObjectName(QString::fromUtf8("editServerPort"));

        horizontalLayout_4->addWidget(editServerPort);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout_9->addWidget(groupBox_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_10 = new QGridLayout(tab_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tab_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 601, 430));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        labelNews = new QLabel(scrollAreaWidgetContents);
        labelNews->setObjectName(QString::fromUtf8("labelNews"));
        labelNews->setTextFormat(Qt::AutoText);
        labelNews->setScaledContents(true);
        labelNews->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelNews->setWordWrap(true);

        gridLayout_11->addWidget(labelNews, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_10->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_12->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(calendarWidget, checkBoxFinishedDays);
        QWidget::setTabOrder(checkBoxFinishedDays, tableView);
        QWidget::setTabOrder(tableView, editEmployeeName);
        QWidget::setTabOrder(editEmployeeName, editHex);
        QWidget::setTabOrder(editHex, colorWidget);
        QWidget::setTabOrder(colorWidget, editSalary);
        QWidget::setTabOrder(editSalary, buttonAdd);
        QWidget::setTabOrder(buttonAdd, buttonRemove);
        QWidget::setTabOrder(buttonRemove, buttonEdit);
        QWidget::setTabOrder(buttonEdit, tableViewPoints);
        QWidget::setTabOrder(tableViewPoints, editPointName);
        QWidget::setTabOrder(editPointName, buttonAddPoint);
        QWidget::setTabOrder(buttonAddPoint, buttonDeletePoint);
        QWidget::setTabOrder(buttonDeletePoint, textBrowserStats);
        QWidget::setTabOrder(textBrowserStats, lineEdit_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);
        buttonReport->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        checkBoxPayedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\207\320\265\320\275\320\275\321\213\320\265", nullptr));
        checkBoxFinishedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\321\213\320\265", nullptr));
        checkBoxShifts->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\321\213", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        textBrowserLoggs->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        toolButtonArrow->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonArrow->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonEmployees->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonEmployees->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonSalary->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonSalary->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonPaymentTarget->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214 \320\272\320\276\320\275\320\272\321\200\320\265\321\202\320\275\321\203\321\216 \321\201\320\274\320\265\320\275\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaymentTarget->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonPaymentGeneral->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214 \320\262\321\201\320\265 \321\201\320\274\320\265\320\275\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaymentGeneral->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonCalculate->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\321\200\320\260\321\201\321\207\320\265\321\202 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonCalculate->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonClear->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonClear->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonSave->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonSave->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonLoad->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonLoad->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonReset->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonReset->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        editHex->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        colorWidget->setText(QString());
        editEmployeeName->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        editSalary->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonRemove->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        buttonEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        textBrowserStats->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        buttonAddPoint->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDeletePoint->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        buttonStatistics->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        buttonReport->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\202", nullptr));
        editPointName->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\203\320\275\320\272\321\202\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202\321\213", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\320\265 \321\206\320\262\320\265\321\202\320\260", nullptr));
#if QT_CONFIG(tooltip)
        editColorPayedDay->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\320\277\320\273\320\260\321\207\320\265\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorPayedDay->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\320\277\320\273\320\260\321\207\320\265\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
        colorWidgetPayedDay->setText(QString());
#if QT_CONFIG(tooltip)
        editColorFinishedDay->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorFinishedDay->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
        colorWidgetFinishedDay->setText(QString());
#if QT_CONFIG(tooltip)
        editColorWorkDay->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorWorkDay->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\264\320\275\321\217", nullptr));
        colorWidgetWorkDay->setText(QString());
#if QT_CONFIG(tooltip)
        editColorHoliday->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\262\321\213\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorHoliday->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\262\321\213\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\264\320\275\321\217", nullptr));
        colorWidgetHoliday->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Customize", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "log file", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Window size?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        buttonSaveSettings->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "record changed history", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "count hours worked", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "use remote db", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "count break time", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "settings list", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "convert to", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "current soft version: 3.0.2a", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\202\321\214 \320\270 \321\201\320\265\321\200\320\262\320\265\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\275\320\276\320\271 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        labelNews->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\262\320\265\321\200\321\201\320\270\320\270 3.0.2a</p><p>- \320\230\320\267\320\274\320\265\320\275\320\265\320\275 \320\264\320\270\320\267\320\260\320\271\320\275 \320\262\320\272\320\273\320\260\320\264\320\272\320\270 <span style=\" font-weight:600;\">\320\223\321\200\320\260\321\204\320\270\320\272</span>. </p><p>- \320\240\320\260\320\267\320\264\320\265\320\273 \321\201 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260\320\274\320\270 \320\262\321\213\320\275\320\265\321\201\320\265\320\275 \320\262 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\203\321\216 \320\262\320\272\320\273\320\260\320\264\320\272\321\203.</p><p>- \320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\272\320\260 \320\264\320\273\321\217 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\277\320\276\321\201"
                        "\320\273\320\265\320\264\320\275\320\265\320\263\320\276 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217 <span style=\" font-weight:600;\">\320\247\321\202\320\276 \320\275\320\276\320\262\320\276\320\263\320\276?</span></p><p>- \320\230\320\267\320\274\320\265\320\275\320\265\320\275 \320\277\321\200\320\270\320\275\321\206\320\270\320\277 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\320\265\321\200\320\265\321\200\320\260\321\201\321\207\320\265\321\202\320\260 \320\263\321\200\320\260\321\204\320\270\320\272\320\260. \320\242\320\265\320\277\320\265\321\200\321\214, \320\277\321\200\320\265\320\266\320\264\320\265 \321\207\320\265\320\274 \320\263\321\200\320\260\321\204\320\270\320\272 \320\261\321\203\320\264\320\265\321\202 \320\277\320\265\321\200\320\265\321\201\321\207\320\270\321\202\320\260\320\275 \321\201 \320\275\320\276\320\262\321\213\320\274\320\270 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\320\274\320\270, \320\277\320"
                        "\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\216 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\321\203\321\216 \320\264\320\260\321\202\321\203 \320\276\321\202\321\201\321\207\320\265\321\202\320\260.</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276 \320\275\320\276\320\262\320\276\320\263\320\276?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
