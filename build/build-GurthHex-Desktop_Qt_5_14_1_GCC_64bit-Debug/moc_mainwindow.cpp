/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/GurthHex/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "OnClickFileNew"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "OnClickFileOpen"
QT_MOC_LITERAL(4, 43, 15), // "OnClickFileSave"
QT_MOC_LITERAL(5, 59, 17), // "OnClickFileSaveas"
QT_MOC_LITERAL(6, 77, 15), // "OnClickFileExit"
QT_MOC_LITERAL(7, 93, 15), // "OnClickEditUndo"
QT_MOC_LITERAL(8, 109, 15), // "OnClickEditFind"
QT_MOC_LITERAL(9, 125, 19), // "OnClickEditReplease"
QT_MOC_LITERAL(10, 145, 15), // "OnClickEditCopy"
QT_MOC_LITERAL(11, 161, 14), // "OnClickEditCut"
QT_MOC_LITERAL(12, 176, 16), // "OnClickEditPaste"
QT_MOC_LITERAL(13, 193, 16), // "OnClickEditClear"
QT_MOC_LITERAL(14, 210, 19), // "OnClickEditClearall"
QT_MOC_LITERAL(15, 230, 17), // "OnClickToolOption"
QT_MOC_LITERAL(16, 248, 16), // "OnClickHelpAbout"
QT_MOC_LITERAL(17, 265, 15), // "receivefinddata"
QT_MOC_LITERAL(18, 281, 8), // "finddata"
QT_MOC_LITERAL(19, 290, 18), // "receivereplacedata"
QT_MOC_LITERAL(20, 309, 6), // "target"
QT_MOC_LITERAL(21, 316, 11), // "replacewith"
QT_MOC_LITERAL(22, 328, 5) // "isall"

    },
    "MainWindow\0OnClickFileNew\0\0OnClickFileOpen\0"
    "OnClickFileSave\0OnClickFileSaveas\0"
    "OnClickFileExit\0OnClickEditUndo\0"
    "OnClickEditFind\0OnClickEditReplease\0"
    "OnClickEditCopy\0OnClickEditCut\0"
    "OnClickEditPaste\0OnClickEditClear\0"
    "OnClickEditClearall\0OnClickToolOption\0"
    "OnClickHelpAbout\0receivefinddata\0"
    "finddata\0receivereplacedata\0target\0"
    "replacewith\0isall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    1,  114,    2, 0x08 /* Private */,
      19,    3,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnClickFileNew(); break;
        case 1: _t->OnClickFileOpen(); break;
        case 2: _t->OnClickFileSave(); break;
        case 3: _t->OnClickFileSaveas(); break;
        case 4: _t->OnClickFileExit(); break;
        case 5: _t->OnClickEditUndo(); break;
        case 6: _t->OnClickEditFind(); break;
        case 7: _t->OnClickEditReplease(); break;
        case 8: _t->OnClickEditCopy(); break;
        case 9: _t->OnClickEditCut(); break;
        case 10: _t->OnClickEditPaste(); break;
        case 11: _t->OnClickEditClear(); break;
        case 12: _t->OnClickEditClearall(); break;
        case 13: _t->OnClickToolOption(); break;
        case 14: _t->OnClickHelpAbout(); break;
        case 15: _t->receivefinddata((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->receivereplacedata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE