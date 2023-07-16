QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#VERSION = 3.0.2a.23061717
#QMAKE_TARGET_COMPANY = The_Zealot
#QMAKE_TARGET_PRODUCT = WBScheduleManager
#QMAKE_TARGET_DESCRIPTION = Managment the shifts of all employees involved in the WBPoint
#QMAKE_TARGET_COPYRIGHT = Yaroslav Solovev

build_nr.commands = build.bat
build_nr.depends = FORCE
QMAKE_EXTRA_TARGETS += build_nr
PRE_TARGETDEPS += build_nr

#QMAKE_PRE_LINK += build.bat

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
    excelexportdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    requesteditdialog.cpp \
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
    excelexportdialog.h \
    mainwindow.h \
    requesteditdialog.h \
    salarydialog.h \
    toolbar.h

FORMS += \
    deletedialog.ui \
    editpointdialog.ui \
    employeedialog.ui \
    excelexportdialog.ui \
    mainwindow.ui \
    requesteditdialog.ui \
    salarydialog.ui

#RC_ICONS = app.ico
RC_FILE = resource.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    build.bat \
    icons/add.png \
    icons/bugReport.png \
    icons/delete.png \
    icons/help.png \
    icons/noIcon.png \
    readme.html \
    toolBar/icons/arrow.png \
    toolBar/icons/calculate.png \
    toolBar/icons/clear.png \
    toolBar/icons/clearGeneral.png \
    toolBar/icons/clearTarget.png \
    toolBar/icons/employee.png \
    toolBar/icons/employeeNew.png \
    toolBar/icons/info.png \
    toolBar/icons/load.png \
    toolBar/icons/paymentGeneral.png \
    toolBar/icons/paymentTarget.png \
    toolBar/icons/point.png \
    toolBar/icons/requestEdit.png \
    toolBar/icons/salary.png \
    toolBar/icons/save.png \
    toolBar/icons/serverLoad.png \
    toolBar/icons/toExcel.png

RESOURCES += \
    resource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/ -lQXlsx
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/ -lQXlsxd
else:unix: LIBS += -L$$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/ -lQXlsx

INCLUDEPATH += $$PWD/../../AlienProject/QXlsx/header
DEPENDPATH += $$PWD/../../AlienProject/QXlsx/header

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/libQXlsx.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/libQXlsxd.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/QXlsx.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/QXlsxd.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../AlienProject/build-QXlsx-Desktop_Qt_5_12_3_MinGW_64_bit-Release/lib-release/libQXlsx.a
