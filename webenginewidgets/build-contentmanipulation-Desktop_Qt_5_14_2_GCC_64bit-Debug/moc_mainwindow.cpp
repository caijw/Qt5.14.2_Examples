/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../contentmanipulation/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "adjustLocation"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "changeLocation"
QT_MOC_LITERAL(4, 42, 11), // "adjustTitle"
QT_MOC_LITERAL(5, 54, 11), // "setProgress"
QT_MOC_LITERAL(6, 66, 1), // "p"
QT_MOC_LITERAL(7, 68, 13), // "finishLoading"
QT_MOC_LITERAL(8, 82, 10), // "viewSource"
QT_MOC_LITERAL(9, 93, 17), // "highlightAllLinks"
QT_MOC_LITERAL(10, 111, 12), // "rotateImages"
QT_MOC_LITERAL(11, 124, 6), // "invert"
QT_MOC_LITERAL(12, 131, 15), // "removeGifImages"
QT_MOC_LITERAL(13, 147, 18), // "removeInlineFrames"
QT_MOC_LITERAL(14, 166, 20), // "removeObjectElements"
QT_MOC_LITERAL(15, 187, 22) // "removeEmbeddedElements"

    },
    "MainWindow\0adjustLocation\0\0changeLocation\0"
    "adjustTitle\0setProgress\0p\0finishLoading\0"
    "viewSource\0highlightAllLinks\0rotateImages\0"
    "invert\0removeGifImages\0removeInlineFrames\0"
    "removeObjectElements\0removeEmbeddedElements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    1,   77,    2, 0x09 /* Protected */,
       7,    1,   80,    2, 0x09 /* Protected */,
       8,    0,   83,    2, 0x09 /* Protected */,
       9,    0,   84,    2, 0x09 /* Protected */,
      10,    1,   85,    2, 0x09 /* Protected */,
      12,    0,   88,    2, 0x09 /* Protected */,
      13,    0,   89,    2, 0x09 /* Protected */,
      14,    0,   90,    2, 0x09 /* Protected */,
      15,    0,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adjustLocation(); break;
        case 1: _t->changeLocation(); break;
        case 2: _t->adjustTitle(); break;
        case 3: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finishLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->viewSource(); break;
        case 6: _t->highlightAllLinks(); break;
        case 7: _t->rotateImages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->removeGifImages(); break;
        case 9: _t->removeInlineFrames(); break;
        case 10: _t->removeObjectElements(); break;
        case 11: _t->removeEmbeddedElements(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
