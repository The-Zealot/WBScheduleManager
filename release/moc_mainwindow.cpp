/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 9), // "takeColor"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 10), // "QLineEdit*"
QT_MOC_LITERAL(33, 4), // "edit"
QT_MOC_LITERAL(38, 13), // "changeSchedle"
QT_MOC_LITERAL(52, 14), // "updateCalendar"
QT_MOC_LITERAL(67, 13), // "resetCalendar"
QT_MOC_LITERAL(81, 13), // "payEverything"
QT_MOC_LITERAL(95, 19), // "setStatusBarMessage"
QT_MOC_LITERAL(115, 15), // "doActionToolbar"
QT_MOC_LITERAL(131, 11), // "addEmployee"
QT_MOC_LITERAL(143, 14), // "removeEmployee"
QT_MOC_LITERAL(158, 14), // "updateEmployee"
QT_MOC_LITERAL(173, 15), // "tableItemSelect"
QT_MOC_LITERAL(189, 11), // "QModelIndex"
QT_MOC_LITERAL(201, 5), // "index"
QT_MOC_LITERAL(207, 12), // "saveSettings"
QT_MOC_LITERAL(220, 11) // "openDocInfo"

    },
    "MainWindow\0takeColor\0\0QLineEdit*\0edit\0"
    "changeSchedle\0updateCalendar\0resetCalendar\0"
    "payEverything\0setStatusBarMessage\0"
    "doActionToolbar\0addEmployee\0removeEmployee\0"
    "updateEmployee\0tableItemSelect\0"
    "QModelIndex\0index\0saveSettings\0"
    "openDocInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x08,    0 /* Private */,
       5,    0,   95,    2, 0x08,    2 /* Private */,
       6,    0,   96,    2, 0x08,    3 /* Private */,
       7,    0,   97,    2, 0x08,    4 /* Private */,
       8,    0,   98,    2, 0x08,    5 /* Private */,
       9,    0,   99,    2, 0x08,    6 /* Private */,
      10,    0,  100,    2, 0x08,    7 /* Private */,
      11,    0,  101,    2, 0x08,    8 /* Private */,
      12,    0,  102,    2, 0x08,    9 /* Private */,
      13,    0,  103,    2, 0x08,   10 /* Private */,
      14,    1,  104,    2, 0x08,   11 /* Private */,
      17,    0,  107,    2, 0x08,   13 /* Private */,
      18,    0,  108,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->takeColor((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 1: _t->changeSchedle(); break;
        case 2: _t->updateCalendar(); break;
        case 3: _t->resetCalendar(); break;
        case 4: _t->payEverything(); break;
        case 5: _t->setStatusBarMessage(); break;
        case 6: _t->doActionToolbar(); break;
        case 7: _t->addEmployee(); break;
        case 8: _t->removeEmployee(); break;
        case 9: _t->updateEmployee(); break;
        case 10: _t->tableItemSelect((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->saveSettings(); break;
        case 12: _t->openDocInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
