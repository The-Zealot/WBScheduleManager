QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

MAJOR   = 2;
MINOR   = 2;
RELEASE = 7;
BUILD   = 230517;

VERSION = 2.2.7.230517
QMAKE_TARGET_COMPANY = The_Zealot
QMAKE_TARGET_PRODUCT = WBSchedleManager
QMAKE_TARGET_DESCRIPTION = Managment the shifts of all employees involved in the WBPoint
QMAKE_TARGET_COPYRIGHT = Yaroslav Solovev

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alertwidget.cpp \
    colorwidget.cpp \
    deletedialog.cpp \
    editpointdialog.cpp \
    employeedialog.cpp \
    main.cpp \
    mainwindow.cpp \
    salarydialog.cpp \
    toolbar.cpp

HEADERS += \
    alertwidget.h \
    colorwidget.h \
    defines.h \
    deletedialog.h \
    editpointdialog.h \
    employee.h \
    employeedialog.h \
    mainwindow.h \
    salarydialog.h \
    toolbar.h

FORMS += \
    deletedialog.ui \
    editpointdialog.ui \
    employeedialog.ui \
    mainwindow.ui \
    salarydialog.ui

RC_ICONS = app.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    icons/help.png \
    toolBar/icons/arrow.png \
    toolBar/icons/calculate.png \
    toolBar/icons/clear.png \
    toolBar/icons/clearGeneral.png \
    toolBar/icons/clearTarget.png \
    toolBar/icons/employee.png \
    toolBar/icons/info.png \
    toolBar/icons/load.png \
    toolBar/icons/paymentGeneral.png \
    toolBar/icons/paymentTarget.png \
    toolBar/icons/salary.png \
    toolBar/icons/save.png

RESOURCES += \
    resource.qrc
