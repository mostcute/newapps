/****************************************************************************
** Meta object code from reading C++ file 'nbaseledwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inc/nbaseledwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nbaseledwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NBaseLEDWidget_t {
    QByteArrayData data[18];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NBaseLEDWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NBaseLEDWidget_t qt_meta_stringdata_NBaseLEDWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NBaseLEDWidget"
QT_MOC_LITERAL(1, 15, 7), // "timeOut"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "setTextColor"
QT_MOC_LITERAL(4, 37, 9), // "colorText"
QT_MOC_LITERAL(5, 47, 18), // "setBackgroundColor"
QT_MOC_LITERAL(6, 66, 15), // "colorBackground"
QT_MOC_LITERAL(7, 82, 9), // "setEffect"
QT_MOC_LITERAL(8, 92, 6), // "Effect"
QT_MOC_LITERAL(9, 99, 6), // "effect"
QT_MOC_LITERAL(10, 106, 7), // "setText"
QT_MOC_LITERAL(11, 114, 4), // "text"
QT_MOC_LITERAL(12, 119, 8), // "setTimer"
QT_MOC_LITERAL(13, 128, 5), // "timer"
QT_MOC_LITERAL(14, 134, 11), // "startEffect"
QT_MOC_LITERAL(15, 146, 5), // "start"
QT_MOC_LITERAL(16, 152, 7), // "sliding"
QT_MOC_LITERAL(17, 160, 12) // "intermittent"

    },
    "NBaseLEDWidget\0timeOut\0\0setTextColor\0"
    "colorText\0setBackgroundColor\0"
    "colorBackground\0setEffect\0Effect\0"
    "effect\0setText\0text\0setTimer\0timer\0"
    "startEffect\0start\0sliding\0intermittent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NBaseLEDWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   68, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,
      12,    1,   62,    2, 0x0a /* Public */,
      14,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,

 // properties: name, type, flags
       9, 0x80000000 | 8, 0x0009510b,
       4, QMetaType::QColor, 0x00095003,
       6, QMetaType::QColor, 0x00095003,
      11, QMetaType::QString, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      15, QMetaType::Bool, 0x00095003,

 // enums: name, flags, count, data
       8, 0x0,    2,   90,

 // enum data: key, value
      16, uint(NBaseLEDWidget::sliding),
      17, uint(NBaseLEDWidget::intermittent),

       0        // eod
};

void NBaseLEDWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NBaseLEDWidget *_t = static_cast<NBaseLEDWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeOut(); break;
        case 1: _t->setTextColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setEffect((*reinterpret_cast< Effect(*)>(_a[1]))); break;
        case 4: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->startEffect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NBaseLEDWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseLEDWidget::timeOut)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        NBaseLEDWidget *_t = static_cast<NBaseLEDWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Effect*>(_v) = _t->effect(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->colorText(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->colorBackground(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->timerInterval(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        NBaseLEDWidget *_t = static_cast<NBaseLEDWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEffect(*reinterpret_cast< Effect*>(_v)); break;
        case 1: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setTimer(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->startEffect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject NBaseLEDWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NBaseLEDWidget.data,
      qt_meta_data_NBaseLEDWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NBaseLEDWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NBaseLEDWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NBaseLEDWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NBaseLEDWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NBaseLEDWidget::timeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
