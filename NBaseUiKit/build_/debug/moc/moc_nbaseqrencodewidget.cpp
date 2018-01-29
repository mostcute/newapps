/****************************************************************************
** Meta object code from reading C++ file 'nbaseqrencodewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inc/nbaseqrencodewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nbaseqrencodewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NBaseQREncodeWidget_t {
    QByteArrayData data[26];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NBaseQREncodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NBaseQREncodeWidget_t qt_meta_stringdata_NBaseQREncodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "NBaseQREncodeWidget"
QT_MOC_LITERAL(1, 20, 13), // "qrDataChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "qrdata"
QT_MOC_LITERAL(4, 42, 13), // "qrLogoChanged"
QT_MOC_LITERAL(5, 56, 6), // "qrlogo"
QT_MOC_LITERAL(6, 63, 13), // "qrSizeChanged"
QT_MOC_LITERAL(7, 77, 6), // "qrsize"
QT_MOC_LITERAL(8, 84, 13), // "qrModeChanged"
QT_MOC_LITERAL(9, 98, 7), // "QR_MODE"
QT_MOC_LITERAL(10, 106, 7), // "qrmodel"
QT_MOC_LITERAL(11, 114, 14), // "qrLevelChanged"
QT_MOC_LITERAL(12, 129, 8), // "QR_LEVEL"
QT_MOC_LITERAL(13, 138, 7), // "qrlevel"
QT_MOC_LITERAL(14, 146, 16), // "qrCasesenChanged"
QT_MOC_LITERAL(15, 163, 9), // "qrcasesen"
QT_MOC_LITERAL(16, 173, 15), // "qrMarginChanged"
QT_MOC_LITERAL(17, 189, 8), // "qrmargin"
QT_MOC_LITERAL(18, 198, 16), // "qrPercentChanged"
QT_MOC_LITERAL(19, 215, 9), // "qrpercent"
QT_MOC_LITERAL(20, 225, 19), // "qrForegroundChanged"
QT_MOC_LITERAL(21, 245, 4), // "qrfg"
QT_MOC_LITERAL(22, 250, 19), // "qrBackgroundChanged"
QT_MOC_LITERAL(23, 270, 4), // "qrbg"
QT_MOC_LITERAL(24, 275, 17), // "qrSaveFileChanged"
QT_MOC_LITERAL(25, 293, 10) // "qrfilepath"

    },
    "NBaseQREncodeWidget\0qrDataChanged\0\0"
    "qrdata\0qrLogoChanged\0qrlogo\0qrSizeChanged\0"
    "qrsize\0qrModeChanged\0QR_MODE\0qrmodel\0"
    "qrLevelChanged\0QR_LEVEL\0qrlevel\0"
    "qrCasesenChanged\0qrcasesen\0qrMarginChanged\0"
    "qrmargin\0qrPercentChanged\0qrpercent\0"
    "qrForegroundChanged\0qrfg\0qrBackgroundChanged\0"
    "qrbg\0qrSaveFileChanged\0qrfilepath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NBaseQREncodeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,
      11,    1,   81,    2, 0x06 /* Public */,
      14,    1,   84,    2, 0x06 /* Public */,
      16,    1,   87,    2, 0x06 /* Public */,
      18,    1,   90,    2, 0x06 /* Public */,
      20,    1,   93,    2, 0x06 /* Public */,
      22,    1,   96,    2, 0x06 /* Public */,
      24,    1,   99,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QSize,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QReal,   19,
    QMetaType::Void, QMetaType::QColor,   21,
    QMetaType::Void, QMetaType::QColor,   23,
    QMetaType::Void, QMetaType::QString,   25,

       0        // eod
};

void NBaseQREncodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NBaseQREncodeWidget *_t = static_cast<NBaseQREncodeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qrDataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->qrLogoChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->qrSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 3: _t->qrModeChanged((*reinterpret_cast< QR_MODE(*)>(_a[1]))); break;
        case 4: _t->qrLevelChanged((*reinterpret_cast< QR_LEVEL(*)>(_a[1]))); break;
        case 5: _t->qrCasesenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->qrMarginChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->qrPercentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->qrForegroundChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->qrBackgroundChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->qrSaveFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrLogoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(QR_MODE );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(QR_LEVEL );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrLevelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrCasesenChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrMarginChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrPercentChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrForegroundChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrBackgroundChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (NBaseQREncodeWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseQREncodeWidget::qrSaveFileChanged)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject NBaseQREncodeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NBaseQREncodeWidget.data,
      qt_meta_data_NBaseQREncodeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NBaseQREncodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NBaseQREncodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NBaseQREncodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NBaseQREncodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NBaseQREncodeWidget::qrDataChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NBaseQREncodeWidget::qrLogoChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NBaseQREncodeWidget::qrSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NBaseQREncodeWidget::qrModeChanged(QR_MODE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NBaseQREncodeWidget::qrLevelChanged(QR_LEVEL _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NBaseQREncodeWidget::qrCasesenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NBaseQREncodeWidget::qrMarginChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NBaseQREncodeWidget::qrPercentChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NBaseQREncodeWidget::qrForegroundChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NBaseQREncodeWidget::qrBackgroundChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NBaseQREncodeWidget::qrSaveFileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
