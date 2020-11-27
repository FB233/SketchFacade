/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "onNew"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "onClearSketch"
QT_MOC_LITERAL(4, 32, 11), // "onOpenImage"
QT_MOC_LITERAL(5, 44, 9), // "onOpenCGA"
QT_MOC_LITERAL(6, 54, 14), // "onSaveGeometry"
QT_MOC_LITERAL(7, 69, 17), // "onAddBuildingMass"
QT_MOC_LITERAL(8, 87, 18), // "onCopyBuildingMass"
QT_MOC_LITERAL(9, 106, 20), // "onDeleteBuildingMass"
QT_MOC_LITERAL(10, 127, 6), // "onUndo"
QT_MOC_LITERAL(11, 134, 12), // "onViewShadow"
QT_MOC_LITERAL(12, 147, 15), // "onViewRendering"
QT_MOC_LITERAL(13, 163, 17), // "onViewGroundPlane"
QT_MOC_LITERAL(14, 181, 9), // "onSetting"
QT_MOC_LITERAL(15, 191, 15), // "onGrammarWindow"
QT_MOC_LITERAL(16, 207, 14), // "onStageChanged"
QT_MOC_LITERAL(17, 222, 13), // "onModeChanged"
QT_MOC_LITERAL(18, 236, 11), // "addListItem"
QT_MOC_LITERAL(19, 248, 4), // "text"
QT_MOC_LITERAL(20, 253, 5), // "image"
QT_MOC_LITERAL(21, 259, 12), // "option_index"
QT_MOC_LITERAL(22, 272, 13) // "camera_update"

    },
    "MainWindow\0onNew\0\0onClearSketch\0"
    "onOpenImage\0onOpenCGA\0onSaveGeometry\0"
    "onAddBuildingMass\0onCopyBuildingMass\0"
    "onDeleteBuildingMass\0onUndo\0onViewShadow\0"
    "onViewRendering\0onViewGroundPlane\0"
    "onSetting\0onGrammarWindow\0onStageChanged\0"
    "onModeChanged\0addListItem\0text\0image\0"
    "option_index\0camera_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    0,  113,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    3,  120,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage, QMetaType::Int,   19,   20,   21,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNew(); break;
        case 1: _t->onClearSketch(); break;
        case 2: _t->onOpenImage(); break;
        case 3: _t->onOpenCGA(); break;
        case 4: _t->onSaveGeometry(); break;
        case 5: _t->onAddBuildingMass(); break;
        case 6: _t->onCopyBuildingMass(); break;
        case 7: _t->onDeleteBuildingMass(); break;
        case 8: _t->onUndo(); break;
        case 9: _t->onViewShadow(); break;
        case 10: _t->onViewRendering(); break;
        case 11: _t->onViewGroundPlane(); break;
        case 12: _t->onSetting(); break;
        case 13: _t->onGrammarWindow(); break;
        case 14: _t->onStageChanged(); break;
        case 15: _t->onModeChanged(); break;
        case 16: _t->addListItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->camera_update(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
