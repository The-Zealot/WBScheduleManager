QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alertwidget.cpp \
    employeedialog.cpp \
    main.cpp \
    mainwindow.cpp \
    toolbar.cpp

HEADERS += \
    alertwidget.h \
    defines.h \
    employee.h \
    employeedialog.h \
    mainwindow.h \
    toolbar.h

FORMS += \
    employeedialog.ui \
    mainwindow.ui

RC_ICONS = app.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    toolBar/icons/arrow.png \
    toolBar/icons/calculate.png \
    toolBar/icons/clear.png \
    toolBar/icons/employee.png \
    toolBar/icons/paymentGeneral.png \
    toolBar/icons/paymentTarget.png \
    toolBar/icons/salary.png \
    toolBar/icons/save.png

RESOURCES += \
    resource.qrc
