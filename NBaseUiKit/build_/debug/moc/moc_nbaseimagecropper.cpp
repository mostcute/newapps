/****************************************************************************
** Meta object code from reading C++ file 'nbaseimagecropper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inc/nbaseimagecropper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nbaseimagecropper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NBaseImageCropper_t {
    QByteArrayData data[22];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NBaseImageCropper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NBaseImageCropper_t qt_meta_stringdata_NBaseImageCropper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NBaseImageCropper"
QT_MOC_LITERAL(1, 18, 15), // "singalCropImage"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "image"
QT_MOC_LITERAL(4, 41, 13), // "setProportion"
QT_MOC_LITERAL(5, 55, 10), // "paramWidth"
QT_MOC_LITERAL(6, 66, 11), // "paramHeight"
QT_MOC_LITERAL(7, 78, 8), // "setImage"
QT_MOC_LITERAL(8, 87, 9), // "imagePath"
QT_MOC_LITERAL(9, 97, 12), // "setCropStyle"
QT_MOC_LITERAL(10, 110, 7), // "bgColor"
QT_MOC_LITERAL(11, 118, 11), // "borderColor"
QT_MOC_LITERAL(12, 130, 7), // "setSize"
QT_MOC_LITERAL(13, 138, 5), // "width"
QT_MOC_LITERAL(14, 144, 6), // "height"
QT_MOC_LITERAL(15, 151, 9), // "cropImage"
QT_MOC_LITERAL(16, 161, 16), // "getCurrentPixMap"
QT_MOC_LITERAL(17, 178, 16), // "setCurrentPixMap"
QT_MOC_LITERAL(18, 195, 5), // "value"
QT_MOC_LITERAL(19, 201, 15), // "setFTProportion"
QT_MOC_LITERAL(20, 217, 15), // "setOOProportion"
QT_MOC_LITERAL(21, 233, 15) // "setNoProportion"

    },
    "NBaseImageCropper\0singalCropImage\0\0"
    "image\0setProportion\0paramWidth\0"
    "paramHeight\0setImage\0imagePath\0"
    "setCropStyle\0bgColor\0borderColor\0"
    "setSize\0width\0height\0cropImage\0"
    "getCurrentPixMap\0setCurrentPixMap\0"
    "value\0setFTProportion\0setOOProportion\0"
    "setNoProportion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NBaseImageCropper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   72,    2, 0x0a /* Public */,
       7,    1,   77,    2, 0x0a /* Public */,
       9,    2,   80,    2, 0x0a /* Public */,
      12,    2,   85,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x0a /* Public */,
      17,    1,   92,    2, 0x0a /* Public */,
      19,    0,   95,    2, 0x08 /* Private */,
      20,    0,   96,    2, 0x08 /* Private */,
      21,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QColor, QMetaType::QColor,   10,   11,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,   13,   14,
    QMetaType::QPixmap,
    QMetaType::QPixmap,
    QMetaType::Void, QMetaType::QPixmap,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NBaseImageCropper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NBaseImageCropper *_t = static_cast<NBaseImageCropper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->singalCropImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->setProportion((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const quint8(*)>(_a[2]))); break;
        case 2: _t->setImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setCropStyle((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 4: _t->setSize((*reinterpret_cast< const quint16(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 5: { QPixmap _r = _t->cropImage();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 6: { QPixmap _r = _t->getCurrentPixMap();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setCurrentPixMap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 8: _t->setFTProportion(); break;
        case 9: _t->setOOProportion(); break;
        case 10: _t->setNoProportion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NBaseImageCropper::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NBaseImageCropper::singalCropImage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NBaseImageCropper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NBaseImageCropper.data,
      qt_meta_data_NBaseImageCropper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NBaseImageCropper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NBaseImageCropper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NBaseImageCropper.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NBaseImageCropper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NBaseImageCropper::singalCropImage(QPixmap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
