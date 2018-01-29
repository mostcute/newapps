/****************************************************************************
** Meta object code from reading C++ file 'nbasepopwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inc/nbasepopwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nbasepopwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NBasePopWidget_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NBasePopWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NBasePopWidget_t qt_meta_stringdata_NBasePopWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NBasePopWidget"
QT_MOC_LITERAL(1, 15, 13), // "showPopDialog"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "paramRemainTime"
QT_MOC_LITERAL(4, 46, 14), // "closePopDialog"
QT_MOC_LITERAL(5, 61, 14), // "pausePopDialog"
QT_MOC_LITERAL(6, 76, 14), // "startPopDialog"
QT_MOC_LITERAL(7, 91, 14), // "closeAnimation"
QT_MOC_LITERAL(8, 106, 8), // "clearAll"
QT_MOC_LITERAL(9, 115, 13), // "showAnimation"
QT_MOC_LITERAL(10, 129, 21), // "animationValueChanged"
QT_MOC_LITERAL(11, 151, 11) // "param_value"

    },
    "NBasePopWidget\0showPopDialog\0\0"
    "paramRemainTime\0closePopDialog\0"
    "pausePopDialog\0startPopDialog\0"
    "closeAnimation\0clearAll\0showAnimation\0"
    "animationValueChanged\0param_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NBasePopWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       1,    0,   62,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   63,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   11,

       0        // eod
};

void NBasePopWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NBasePopWidget *_t = static_cast<NBasePopWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPopDialog((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->showPopDialog(); break;
        case 2: _t->closePopDialog(); break;
        case 3: _t->pausePopDialog(); break;
        case 4: _t->startPopDialog(); break;
        case 5: _t->closeAnimation(); break;
        case 6: _t->clearAll(); break;
        case 7: _t->showAnimation(); break;
        case 8: _t->animationValueChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NBasePopWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NBasePopWidget.data,
      qt_meta_data_NBasePopWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NBasePopWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NBasePopWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NBasePopWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NBasePopWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
