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
    QByteArrayData data[22];
    char stringdata0[274];
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
QT_MOC_LITERAL(4, 32, 9), // "onOpenCGA"
QT_MOC_LITERAL(5, 42, 14), // "onSaveGeometry"
QT_MOC_LITERAL(6, 57, 17), // "onAddBuildingMass"
QT_MOC_LITERAL(7, 75, 18), // "onCopyBuildingMass"
QT_MOC_LITERAL(8, 94, 20), // "onDeleteBuildingMass"
QT_MOC_LITERAL(9, 115, 6), // "onUndo"
QT_MOC_LITERAL(10, 122, 12), // "onViewShadow"
QT_MOC_LITERAL(11, 135, 15), // "onViewRendering"
QT_MOC_LITERAL(12, 151, 17), // "onViewGroundPlane"
QT_MOC_LITERAL(13, 169, 9), // "onSetting"
QT_MOC_LITERAL(14, 179, 15), // "onGrammarWindow"
QT_MOC_LITERAL(15, 195, 14), // "onStageChanged"
QT_MOC_LITERAL(16, 210, 13), // "onModeChanged"
QT_MOC_LITERAL(17, 224, 11), // "addListItem"
QT_MOC_LITERAL(18, 236, 4), // "text"
QT_MOC_LITERAL(19, 241, 5), // "image"
QT_MOC_LITERAL(20, 247, 12), // "option_index"
QT_MOC_LITERAL(21, 260, 13) // "camera_update"

    },
    "MainWindow\0onNew\0\0onClearSketch\0"
    "onOpenCGA\0onSaveGeometry\0onAddBuildingMass\0"
    "onCopyBuildingMass\0onDeleteBuildingMass\0"
    "onUndo\0onViewShadow\0onViewRendering\0"
    "onViewGroundPlane\0onSetting\0onGrammarWindow\0"
    "onStageChanged\0onModeChanged\0addListItem\0"
    "text\0image\0option_index\0camera_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
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
      17,    3,  114,    2, 0x0a /* Public */,
      21,    0,  121,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::QString, QMetaType::QImage, QMetaType::Int,   18,   19,   20,
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
        case 2: _t->onOpenCGA(); break;
        case 3: _t->onSaveGeometry(); break;
        case 4: _t->onAddBuildingMass(); break;
        case 5: _t->onCopyBuildingMass(); break;
        case 6: _t->onDeleteBuildingMass(); break;
        case 7: _t->onUndo(); break;
        case 8: _t->onViewShadow(); break;
        case 9: _t->onViewRendering(); break;
        case 10: _t->onViewGroundPlane(); break;
        case 11: _t->onSetting(); break;
        case 12: _t->onGrammarWindow(); break;
        case 13: _t->onStageChanged(); break;
        case 14: _t->onModeChanged(); break;
        case 15: _t->addListItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->camera_update(); break;
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
