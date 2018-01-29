/****************************************************************************
** Meta object code from reading C++ file 'nbasemarqueelabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inc/nbasemarqueelabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nbasemarqueelabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NBaseMarqueeLabel_t {
    QByteArrayData data[19];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NBaseMarqueeLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NBaseMarqueeLabel_t qt_meta_stringdata_NBaseMarqueeLabel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NBaseMarqueeLabel"
QT_MOC_LITERAL(1, 18, 15), // "intervalChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "mInterval"
QT_MOC_LITERAL(4, 45, 13), // "activeChanged"
QT_MOC_LITERAL(5, 59, 6), // "active"
QT_MOC_LITERAL(6, 66, 16), // "directionChanged"
QT_MOC_LITERAL(7, 83, 9), // "Direction"
QT_MOC_LITERAL(8, 93, 9), // "direction"
QT_MOC_LITERAL(9, 103, 5), // "reset"
QT_MOC_LITERAL(10, 109, 9), // "setActive"
QT_MOC_LITERAL(11, 119, 11), // "setInterval"
QT_MOC_LITERAL(12, 131, 4), // "msec"
QT_MOC_LITERAL(13, 136, 5), // "start"
QT_MOC_LITERAL(14, 142, 4), // "stop"
QT_MOC_LITERAL(15, 147, 12), // "setDirection"
QT_MOC_LITERAL(16, 160, 15), // "param_direciton"
QT_MOC_LITERAL(17, 176, 11), // "RightToLeft"
QT_MOC_LITERAL(18, 188, 11) // "BottomToTop"

    },
    "NBaseMarqueeLabel\0intervalChanged\0\0"
    "mInterval\0activeChanged\0active\0"
    "directionChanged\0Direction\0direction\0"
    "reset\0setActive\0setInterval\0msec\0start\0"
    "stop\0setDirection\0param_direciton\0"
    "RightToLeft\0BottomToTop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NBaseMarqueeLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   68,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   16,

 // enums: name, flags, count, data
       7, 0x0,    2,   84,

 // enum data: key, value
      17, uint(NBaseMarqueeLabel::RightToLeft),
      18, uint(NBaseMarqueeLabel::BottomToTop),

       0        // eod
};

void NBaseMarqueeLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NBaseMarqueeLabel *_t = static_cast<NBaseMarqueeLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->intervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->directionChanged((*reinterpret_cast< Direction(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: _t->stop(); break;
        case 8: _t->setDirection((*reinterpret_cast< Direction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NBaseMarqueeLabel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseMarqueeLabel::intervalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NBaseMarqueeLabel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseMarqueeLabel::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NBaseMarqueeLabel::*_t)(Direction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseMarqueeLabel::directionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject NBaseMarqueeLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_NBaseMarqueeLabel.data,
      qt_meta_data_NBaseMarqueeLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NBaseMarqueeLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NBaseMarqueeLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NBaseMarqueeLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int NBaseMarqueeLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NBaseMarqueeLabel::intervalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NBaseMarqueeLabel::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NBaseMarqueeLabel::directionChanged(Direction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
