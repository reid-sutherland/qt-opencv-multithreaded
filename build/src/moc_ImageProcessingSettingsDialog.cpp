/****************************************************************************
** Meta object code from reading C++ file 'ImageProcessingSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ImageProcessingSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageProcessingSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageProcessingSettingsDialog_t {
    QByteArrayData data[16];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessingSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessingSettingsDialog_t qt_meta_stringdata_ImageProcessingSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ImageProcessingSettingsDialog"
QT_MOC_LITERAL(1, 30, 26), // "newImageProcessingSettings"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 23), // "ImageProcessingSettings"
QT_MOC_LITERAL(4, 82, 8), // "settings"
QT_MOC_LITERAL(5, 91, 24), // "resetAllDialogToDefaults"
QT_MOC_LITERAL(6, 116, 30), // "updateStoredSettingsFromDialog"
QT_MOC_LITERAL(7, 147, 27), // "resetSmoothDialogToDefaults"
QT_MOC_LITERAL(8, 175, 27), // "resetDilateDialogToDefaults"
QT_MOC_LITERAL(9, 203, 26), // "resetErodeDialogToDefaults"
QT_MOC_LITERAL(10, 230, 25), // "resetFlipDialogToDefaults"
QT_MOC_LITERAL(11, 256, 26), // "resetCannyDialogToDefaults"
QT_MOC_LITERAL(12, 283, 14), // "validateDialog"
QT_MOC_LITERAL(13, 298, 16), // "smoothTypeChange"
QT_MOC_LITERAL(14, 315, 16), // "QAbstractButton*"
QT_MOC_LITERAL(15, 332, 6) // "button"

    },
    "ImageProcessingSettingsDialog\0"
    "newImageProcessingSettings\0\0"
    "ImageProcessingSettings\0settings\0"
    "resetAllDialogToDefaults\0"
    "updateStoredSettingsFromDialog\0"
    "resetSmoothDialogToDefaults\0"
    "resetDilateDialogToDefaults\0"
    "resetErodeDialogToDefaults\0"
    "resetFlipDialogToDefaults\0"
    "resetCannyDialogToDefaults\0validateDialog\0"
    "smoothTypeChange\0QAbstractButton*\0"
    "button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessingSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void ImageProcessingSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageProcessingSettingsDialog *_t = static_cast<ImageProcessingSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImageProcessingSettings((*reinterpret_cast< ImageProcessingSettings(*)>(_a[1]))); break;
        case 1: _t->resetAllDialogToDefaults(); break;
        case 2: _t->updateStoredSettingsFromDialog(); break;
        case 3: _t->resetSmoothDialogToDefaults(); break;
        case 4: _t->resetDilateDialogToDefaults(); break;
        case 5: _t->resetErodeDialogToDefaults(); break;
        case 6: _t->resetFlipDialogToDefaults(); break;
        case 7: _t->resetCannyDialogToDefaults(); break;
        case 8: _t->validateDialog(); break;
        case 9: _t->smoothTypeChange((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageProcessingSettingsDialog::*_t)(ImageProcessingSettings );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageProcessingSettingsDialog::newImageProcessingSettings)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ImageProcessingSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImageProcessingSettingsDialog.data,
      qt_meta_data_ImageProcessingSettingsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageProcessingSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessingSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessingSettingsDialog.stringdata0))
        return static_cast<void*>(const_cast< ImageProcessingSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImageProcessingSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ImageProcessingSettingsDialog::newImageProcessingSettings(ImageProcessingSettings _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
