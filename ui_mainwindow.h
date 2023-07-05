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
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxEmployeeView;
    QLabel *label_2;
    QComboBox *comboBoxPoint;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxPayedDays;
    QCheckBox *checkBoxFinishedDays;
    QCheckBox *checkBoxShifts;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButtonArrow;
    QToolButton *toolButtonEmployees;
    QToolButton *toolButtonSalary;
    QToolButton *toolButtonPaymentTarget;
    QToolButton *toolButtonPaymentGeneral;
    QToolButton *toolButtonCalculate;
    QToolButton *toolButtonClear;
    QToolButton *toolButtonReset;
    QFrame *line;
    QToolButton *toolButtonSave;
    QToolButton *toolButtonLoad;
    QToolButton *toolButtonServerLoad;
    QToolButton *toolButtonRequestEditor;
    QFrame *line_2;
    QToolButton *toolButtonExportToExcel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowserShiftInfo;
    QTextBrowser *textBrowserLoggs;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QTableView *tableView;
    QGridLayout *gridLayout;
    ColorWidget *colorWidget;
    QLineEdit *editSalary;
    QPushButton *buttonAdd;
    QLineEdit *editEmployeeName;
    QPushButton *buttonEdit;
    QLineEdit *editHex;
    QPushButton *buttonRemove;
    QPushButton *buttonLoadEmployee;
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
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
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
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_25;
    QLineEdit *editColorOzonPoint;
    ColorWidget *colorWidgetOzonPoint;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *editColorWBPoint;
    ColorWidget *colorWidgetWBPoint;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *editColorYandexPoint;
    ColorWidget *colorWidgetYandexPoint;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxBackup;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSlider *sliderFirst;
    QSlider *sliderSecond;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *comboBoxSchedule;
    QToolButton *buttonDeleteSchedule;
    QToolButton *buttonAddSchedule;
    QLabel *labelSchedule;
    QLabel *labelShiftCount;
    QSpacerItem *verticalSpacer;
    QLabel *labelVersion;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *buttonSaveSettings;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_24;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *editServerIP;
    QLineEdit *editServerPort;
    QLineEdit *editServerPassword;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QCheckBox *checkBox_10;
    QSpacerItem *verticalSpacer_3;
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
        MainWindow->resize(607, 498);
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
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBoxEmployeeView = new QCheckBox(groupBox_3);
        checkBoxEmployeeView->setObjectName(QString::fromUtf8("checkBoxEmployeeView"));
        checkBoxEmployeeView->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBoxEmployeeView->sizePolicy().hasHeightForWidth());
        checkBoxEmployeeView->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(checkBoxEmployeeView);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        comboBoxPoint = new QComboBox(groupBox_3);
        comboBoxPoint->setObjectName(QString::fromUtf8("comboBoxPoint"));

        horizontalLayout_6->addWidget(comboBoxPoint);


        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy1);
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

        gridLayout_6->addWidget(calendarWidget, 1, 0, 1, 1);

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


        gridLayout_6->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
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
        icon1.addFile(QString::fromUtf8(":/image/toolBar/employeeNew.png"), QSize(), QIcon::Normal, QIcon::Off);
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

        toolButtonReset = new QToolButton(frame);
        toolButtonReset->setObjectName(QString::fromUtf8("toolButtonReset"));
        toolButtonReset->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/toolBar/clearGeneral.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonReset->setIcon(icon7);
        toolButtonReset->setIconSize(QSize(24, 24));
        toolButtonReset->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonReset);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line);

        toolButtonSave = new QToolButton(frame);
        toolButtonSave->setObjectName(QString::fromUtf8("toolButtonSave"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/toolBar/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonSave->setIcon(icon8);
        toolButtonSave->setIconSize(QSize(24, 24));
        toolButtonSave->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonSave);

        toolButtonLoad = new QToolButton(frame);
        toolButtonLoad->setObjectName(QString::fromUtf8("toolButtonLoad"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/toolBar/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonLoad->setIcon(icon9);
        toolButtonLoad->setIconSize(QSize(24, 24));
        toolButtonLoad->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonLoad);

        toolButtonServerLoad = new QToolButton(frame);
        toolButtonServerLoad->setObjectName(QString::fromUtf8("toolButtonServerLoad"));
        toolButtonServerLoad->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/toolBar/serverLoad.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonServerLoad->setIcon(icon10);
        toolButtonServerLoad->setIconSize(QSize(24, 24));
        toolButtonServerLoad->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonServerLoad);

        toolButtonRequestEditor = new QToolButton(frame);
        toolButtonRequestEditor->setObjectName(QString::fromUtf8("toolButtonRequestEditor"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/icons/noIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonRequestEditor->setIcon(icon11);
        toolButtonRequestEditor->setIconSize(QSize(24, 24));
        toolButtonRequestEditor->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonRequestEditor);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line_2);

        toolButtonExportToExcel = new QToolButton(frame);
        toolButtonExportToExcel->setObjectName(QString::fromUtf8("toolButtonExportToExcel"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/toolBar/toExcel.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonExportToExcel->setIcon(icon12);
        toolButtonExportToExcel->setIconSize(QSize(24, 24));
        toolButtonExportToExcel->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonExportToExcel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_3->addWidget(frame, 0, 0, 1, 2);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        textBrowserShiftInfo = new QTextBrowser(groupBox_4);
        textBrowserShiftInfo->setObjectName(QString::fromUtf8("textBrowserShiftInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowserShiftInfo->sizePolicy().hasHeightForWidth());
        textBrowserShiftInfo->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(textBrowserShiftInfo);

        textBrowserLoggs = new QTextBrowser(groupBox_4);
        textBrowserLoggs->setObjectName(QString::fromUtf8("textBrowserLoggs"));
        sizePolicy2.setHeightForWidth(textBrowserLoggs->sizePolicy().hasHeightForWidth());
        textBrowserLoggs->setSizePolicy(sizePolicy2);
        textBrowserLoggs->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(textBrowserLoggs);


        gridLayout_3->addWidget(groupBox_4, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSortingEnabled(true);

        gridLayout_7->addWidget(tableView, 0, 0, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        colorWidget = new ColorWidget(tab_2);
        colorWidget->setObjectName(QString::fromUtf8("colorWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(colorWidget->sizePolicy().hasHeightForWidth());
        colorWidget->setSizePolicy(sizePolicy3);
        colorWidget->setMinimumSize(QSize(42, 0));

        gridLayout->addWidget(colorWidget, 1, 1, 1, 1);

        editSalary = new QLineEdit(tab_2);
        editSalary->setObjectName(QString::fromUtf8("editSalary"));
        sizePolicy3.setHeightForWidth(editSalary->sizePolicy().hasHeightForWidth());
        editSalary->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(editSalary, 2, 0, 1, 2);

        buttonAdd = new QPushButton(tab_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 3, 0, 1, 2);

        editEmployeeName = new QLineEdit(tab_2);
        editEmployeeName->setObjectName(QString::fromUtf8("editEmployeeName"));
        sizePolicy3.setHeightForWidth(editEmployeeName->sizePolicy().hasHeightForWidth());
        editEmployeeName->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(editEmployeeName, 0, 0, 1, 2);

        buttonEdit = new QPushButton(tab_2);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        gridLayout->addWidget(buttonEdit, 5, 0, 1, 2);

        editHex = new QLineEdit(tab_2);
        editHex->setObjectName(QString::fromUtf8("editHex"));
        sizePolicy3.setHeightForWidth(editHex->sizePolicy().hasHeightForWidth());
        editHex->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(editHex, 1, 0, 1, 1);

        buttonRemove = new QPushButton(tab_2);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        gridLayout->addWidget(buttonRemove, 4, 0, 1, 2);

        buttonLoadEmployee = new QPushButton(tab_2);
        buttonLoadEmployee->setObjectName(QString::fromUtf8("buttonLoadEmployee"));
        buttonLoadEmployee->setEnabled(false);

        gridLayout->addWidget(buttonLoadEmployee, 6, 0, 1, 2);


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
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(groupBox_5);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setContextMenuPolicy(Qt::PreventContextMenu);
        scrollArea_2->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background: white;\n"
"}\n"
"QScrollBar {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #eaeaea, stop:0.5 #f0f0f0, stop:1 #eaeaea);\n"
"    margin: 0px 0px 0px 0px;\n"
"   /* border: 1px solid #727272;*/\n"
"    /*border-radius: 8px;*/\n"
"    min-height: 0px;\n"
"	width: 7px;\n"
"}\n"
"QScrollBar::handle {\n"
"    margin: 2px 2px 2px 2px;\n"
"    /*background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #f2f2f2, stop:1 #efefef);*/\n"
"    /*border-radius: 5px;*/\n"
"    /*border: 1px solid #323232;*/\n"
"	background: #b4b4b4;\n"
"	width: 5px;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    /*border: 1px solid;\n"
"    border-image: url(./image/up-arrow.png);*/\n"
"    background: none;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    /*margin: 0px 0px 0px 0px;*/\n"
"    /*background: qlineargradient(x1:0, y1:0, x2:0.5, y2:0, x3:1, y3:0, stop:0 #313131, sto"
                        "p:0.5 #383838, stop:1 #313131);*/\n"
"    /*border-image: url(./image/down-arrow.png);\n"
"    border: 1px solid;*/\n"
"    background: none;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"QScrollBar::add-page, QScrollBar::sub-page {\n"
"    background: none;\n"
"}\n"
"QAbstractScrollArea {\n"
"        background: white;\n"
"}"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setLineWidth(1);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 244, 263));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editColorPayedDay = new QLineEdit(scrollAreaWidgetContents_2);
        editColorPayedDay->setObjectName(QString::fromUtf8("editColorPayedDay"));

        horizontalLayout->addWidget(editColorPayedDay);

        colorWidgetPayedDay = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetPayedDay->setObjectName(QString::fromUtf8("colorWidgetPayedDay"));
        sizePolicy3.setHeightForWidth(colorWidgetPayedDay->sizePolicy().hasHeightForWidth());
        colorWidgetPayedDay->setSizePolicy(sizePolicy3);
        colorWidgetPayedDay->setMinimumSize(QSize(42, 0));

        horizontalLayout->addWidget(colorWidgetPayedDay);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        editColorFinishedDay = new QLineEdit(scrollAreaWidgetContents_2);
        editColorFinishedDay->setObjectName(QString::fromUtf8("editColorFinishedDay"));

        horizontalLayout_9->addWidget(editColorFinishedDay);

        colorWidgetFinishedDay = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetFinishedDay->setObjectName(QString::fromUtf8("colorWidgetFinishedDay"));
        sizePolicy3.setHeightForWidth(colorWidgetFinishedDay->sizePolicy().hasHeightForWidth());
        colorWidgetFinishedDay->setSizePolicy(sizePolicy3);
        colorWidgetFinishedDay->setMinimumSize(QSize(42, 0));

        horizontalLayout_9->addWidget(colorWidgetFinishedDay);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        editColorWorkDay = new QLineEdit(scrollAreaWidgetContents_2);
        editColorWorkDay->setObjectName(QString::fromUtf8("editColorWorkDay"));

        horizontalLayout_23->addWidget(editColorWorkDay);

        colorWidgetWorkDay = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetWorkDay->setObjectName(QString::fromUtf8("colorWidgetWorkDay"));
        sizePolicy3.setHeightForWidth(colorWidgetWorkDay->sizePolicy().hasHeightForWidth());
        colorWidgetWorkDay->setSizePolicy(sizePolicy3);
        colorWidgetWorkDay->setMinimumSize(QSize(42, 0));

        horizontalLayout_23->addWidget(colorWidgetWorkDay);


        verticalLayout_6->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        editColorHoliday = new QLineEdit(scrollAreaWidgetContents_2);
        editColorHoliday->setObjectName(QString::fromUtf8("editColorHoliday"));

        horizontalLayout_24->addWidget(editColorHoliday);

        colorWidgetHoliday = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetHoliday->setObjectName(QString::fromUtf8("colorWidgetHoliday"));
        sizePolicy3.setHeightForWidth(colorWidgetHoliday->sizePolicy().hasHeightForWidth());
        colorWidgetHoliday->setSizePolicy(sizePolicy3);
        colorWidgetHoliday->setMinimumSize(QSize(42, 0));

        horizontalLayout_24->addWidget(colorWidgetHoliday);


        verticalLayout_6->addLayout(horizontalLayout_24);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line_3);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        editColorOzonPoint = new QLineEdit(scrollAreaWidgetContents_2);
        editColorOzonPoint->setObjectName(QString::fromUtf8("editColorOzonPoint"));

        horizontalLayout_25->addWidget(editColorOzonPoint);

        colorWidgetOzonPoint = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetOzonPoint->setObjectName(QString::fromUtf8("colorWidgetOzonPoint"));
        sizePolicy3.setHeightForWidth(colorWidgetOzonPoint->sizePolicy().hasHeightForWidth());
        colorWidgetOzonPoint->setSizePolicy(sizePolicy3);
        colorWidgetOzonPoint->setMinimumSize(QSize(42, 0));

        horizontalLayout_25->addWidget(colorWidgetOzonPoint);


        verticalLayout_6->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        editColorWBPoint = new QLineEdit(scrollAreaWidgetContents_2);
        editColorWBPoint->setObjectName(QString::fromUtf8("editColorWBPoint"));

        horizontalLayout_26->addWidget(editColorWBPoint);

        colorWidgetWBPoint = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetWBPoint->setObjectName(QString::fromUtf8("colorWidgetWBPoint"));
        sizePolicy3.setHeightForWidth(colorWidgetWBPoint->sizePolicy().hasHeightForWidth());
        colorWidgetWBPoint->setSizePolicy(sizePolicy3);
        colorWidgetWBPoint->setMinimumSize(QSize(42, 0));

        horizontalLayout_26->addWidget(colorWidgetWBPoint);


        verticalLayout_6->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        editColorYandexPoint = new QLineEdit(scrollAreaWidgetContents_2);
        editColorYandexPoint->setObjectName(QString::fromUtf8("editColorYandexPoint"));

        horizontalLayout_27->addWidget(editColorYandexPoint);

        colorWidgetYandexPoint = new ColorWidget(scrollAreaWidgetContents_2);
        colorWidgetYandexPoint->setObjectName(QString::fromUtf8("colorWidgetYandexPoint"));
        sizePolicy3.setHeightForWidth(colorWidgetYandexPoint->sizePolicy().hasHeightForWidth());
        colorWidgetYandexPoint->setSizePolicy(sizePolicy3);
        colorWidgetYandexPoint->setMinimumSize(QSize(42, 0));

        horizontalLayout_27->addWidget(colorWidgetYandexPoint);


        verticalLayout_6->addLayout(horizontalLayout_27);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_8->addWidget(scrollArea_2, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_13 = new QGridLayout(groupBox_6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
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


        gridLayout_13->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBox_3 = new QCheckBox(groupBox_6);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setEnabled(false);

        verticalLayout_4->addWidget(checkBox_3);

        checkBox = new QCheckBox(groupBox_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy4);

        verticalLayout_4->addWidget(checkBox);


        horizontalLayout_10->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBoxBackup = new QComboBox(groupBox_6);
        comboBoxBackup->addItem(QString());
        comboBoxBackup->addItem(QString());
        comboBoxBackup->addItem(QString());
        comboBoxBackup->setObjectName(QString::fromUtf8("comboBoxBackup"));
        comboBoxBackup->setEnabled(false);

        verticalLayout->addWidget(comboBoxBackup);


        horizontalLayout_10->addLayout(verticalLayout);


        gridLayout_13->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sliderFirst = new QSlider(groupBox_6);
        sliderFirst->setObjectName(QString::fromUtf8("sliderFirst"));
        sliderFirst->setMaximum(7);
        sliderFirst->setPageStep(1);
        sliderFirst->setValue(0);
        sliderFirst->setOrientation(Qt::Vertical);
        sliderFirst->setInvertedAppearance(false);
        sliderFirst->setInvertedControls(false);

        horizontalLayout_5->addWidget(sliderFirst);

        sliderSecond = new QSlider(groupBox_6);
        sliderSecond->setObjectName(QString::fromUtf8("sliderSecond"));
        sliderSecond->setMinimum(0);
        sliderSecond->setMaximum(7);
        sliderSecond->setPageStep(1);
        sliderSecond->setValue(0);
        sliderSecond->setOrientation(Qt::Vertical);

        horizontalLayout_5->addWidget(sliderSecond);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(7);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        comboBoxSchedule = new QComboBox(groupBox_6);
        comboBoxSchedule->setObjectName(QString::fromUtf8("comboBoxSchedule"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(comboBoxSchedule->sizePolicy().hasHeightForWidth());
        comboBoxSchedule->setSizePolicy(sizePolicy5);

        horizontalLayout_13->addWidget(comboBoxSchedule);

        buttonDeleteSchedule = new QToolButton(groupBox_6);
        buttonDeleteSchedule->setObjectName(QString::fromUtf8("buttonDeleteSchedule"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDeleteSchedule->setIcon(icon13);

        horizontalLayout_13->addWidget(buttonDeleteSchedule);

        buttonAddSchedule = new QToolButton(groupBox_6);
        buttonAddSchedule->setObjectName(QString::fromUtf8("buttonAddSchedule"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/image/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAddSchedule->setIcon(icon14);

        horizontalLayout_13->addWidget(buttonAddSchedule);


        verticalLayout_2->addLayout(horizontalLayout_13);

        labelSchedule = new QLabel(groupBox_6);
        labelSchedule->setObjectName(QString::fromUtf8("labelSchedule"));
        labelSchedule->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelSchedule);

        labelShiftCount = new QLabel(groupBox_6);
        labelShiftCount->setObjectName(QString::fromUtf8("labelShiftCount"));
        sizePolicy2.setHeightForWidth(labelShiftCount->sizePolicy().hasHeightForWidth());
        labelShiftCount->setSizePolicy(sizePolicy2);
        labelShiftCount->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelShiftCount);


        gridLayout_4->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_4, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer, 3, 0, 1, 1);

        labelVersion = new QLabel(groupBox_6);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_13->addWidget(labelVersion, 4, 0, 1, 1);

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


        gridLayout_13->addLayout(horizontalLayout_12, 5, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_6, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_24 = new QGridLayout(groupBox_2);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setEnabled(false);

        gridLayout_24->addWidget(checkBox_4, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_7->addWidget(label_3);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_7->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        editServerIP = new QLineEdit(groupBox_2);
        editServerIP->setObjectName(QString::fromUtf8("editServerIP"));

        verticalLayout_5->addWidget(editServerIP);

        editServerPort = new QLineEdit(groupBox_2);
        editServerPort->setObjectName(QString::fromUtf8("editServerPort"));

        verticalLayout_5->addWidget(editServerPort);

        editServerPassword = new QLineEdit(groupBox_2);
        editServerPassword->setObjectName(QString::fromUtf8("editServerPassword"));

        verticalLayout_5->addWidget(editServerPassword);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout_24->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setEnabled(false);

        horizontalLayout_8->addWidget(checkBox_2);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setItalic(true);
        font.setUnderline(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFlat(true);

        horizontalLayout_8->addWidget(pushButton);


        gridLayout_24->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        checkBox_10 = new QCheckBox(groupBox_2);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setEnabled(false);

        gridLayout_24->addWidget(checkBox_10, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_24->addItem(verticalSpacer_3, 4, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_10 = new QGridLayout(tab_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tab_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background: white;"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 603, 440));
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

        tabWidget->setCurrentIndex(3);
        buttonReport->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxEmployeeView->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\276\321\202 \320\273\320\270\321\206\320\260 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202:", nullptr));
        checkBoxPayedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\207\320\265\320\275\320\275\321\213\320\265", nullptr));
        checkBoxFinishedDays->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\275\321\213\320\265", nullptr));
        checkBoxShifts->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\321\213", nullptr));
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
        toolButtonPaymentTarget->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214 \321\201\320\274\320\265\320\275\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonPaymentTarget->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonPaymentGeneral->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\273\320\260\321\202\320\270\321\202\321\214 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \321\201\320\274\320\265\320\275", nullptr));
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
        toolButtonReset->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \320\263\321\200\320\260\321\204\320\270\320\272\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonReset->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonSave->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonSave->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonLoad->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonLoad->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonServerLoad->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toolButtonRequestEditor->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\267\320\260\320\277\321\200\320\276\321\201\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButtonRequestEditor->setText(QString());
#if QT_CONFIG(tooltip)
        toolButtonExportToExcel->setToolTip(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \320\262 Excel", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        textBrowserLoggs->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        colorWidget->setText(QString());
        editSalary->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        editEmployeeName->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        buttonEdit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        editHex->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202", nullptr));
        buttonRemove->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        buttonLoadEmployee->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
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
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202\320\276\320\262\320\260\321\217 \320\277\320\260\320\273\320\270\321\202\321\200\320\260", nullptr));
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
#if QT_CONFIG(tooltip)
        editColorOzonPoint->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 Ozon", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorOzonPoint->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 Ozon", nullptr));
        colorWidgetOzonPoint->setText(QString());
#if QT_CONFIG(tooltip)
        editColorWBPoint->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 Wildberries", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorWBPoint->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 Wildberries", nullptr));
        colorWidgetWBPoint->setText(QString());
#if QT_CONFIG(tooltip)
        editColorYandexPoint->setToolTip(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 \320\257\320\275\320\264\320\265\320\272\321\201.\320\234\320\260\321\200\320\272\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorYandexPoint->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\277\321\203\320\275\320\272\321\202\320\260 \320\257\320\275\320\264\320\265\320\272\321\201.\320\234\320\260\321\200\320\272\320\265\321\202", nullptr));
        colorWidgetYandexPoint->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "convert to", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "backup", nullptr));
#if QT_CONFIG(tooltip)
        checkBox->setToolTip(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox->setText(QCoreApplication::translate("MainWindow", "logging", nullptr));
        comboBoxBackup->setItemText(0, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\264\320\265\320\275\321\214", nullptr));
        comboBoxBackup->setItemText(1, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        comboBoxBackup->setItemText(2, QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));

#if QT_CONFIG(tooltip)
        buttonDeleteSchedule->setToolTip(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonAddSchedule->setToolTip(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSchedule->setText(QCoreApplication::translate("MainWindow", "0/0", nullptr));
        labelShiftCount->setText(QCoreApplication::translate("MainWindow", "Shift count per month", nullptr));
        labelVersion->setText(QCoreApplication::translate("MainWindow", "current soft version: MAJ.MIN.RLS", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        buttonSaveSettings->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\202\321\214 \320\270 \321\201\320\265\321\200\320\262\320\265\321\200", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271 \320\276\321\202\320\262\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "check state", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_10->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \321\201\320\265\321\200\320\262\320\265\321\200 \320\277\321\200\320\270 \320\272\320\260\320\266\320\264\320\276\320\274 \320\267\320\260\320\277\321\203\321\201\320\272\320\265 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_10->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\270 \321\201\321\202\320\260\321\200\321\202\320\265 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        labelNews->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\262\320\265\321\200\321\201\320\270\320\270 MAJOR.MINOR.RELEASE</p><p align=\"center\">Change list:</p><ul><li>change #1</li><li>change #2</li></ul></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\247\321\202\320\276 \320\275\320\276\320\262\320\276\320\263\320\276?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
