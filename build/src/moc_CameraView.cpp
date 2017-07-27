/****************************************************************************
** Meta object code from reading C++ file 'CameraView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/CameraView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraView_t {
    QByteArrayData data[22];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraView_t qt_meta_stringdata_CameraView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CameraView"
QT_MOC_LITERAL(1, 11, 23), // "newImageProcessingFlags"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "ImageProcessingFlags"
QT_MOC_LITERAL(4, 57, 20), // "imageProcessingFlags"
QT_MOC_LITERAL(5, 78, 6), // "setROI"
QT_MOC_LITERAL(6, 85, 3), // "roi"
QT_MOC_LITERAL(7, 89, 26), // "setImageProcessingSettings"
QT_MOC_LITERAL(8, 116, 12), // "newMouseData"
QT_MOC_LITERAL(9, 129, 9), // "MouseData"
QT_MOC_LITERAL(10, 139, 9), // "mouseData"
QT_MOC_LITERAL(11, 149, 25), // "updateMouseCursorPosLabel"
QT_MOC_LITERAL(12, 175, 16), // "clearImageBuffer"
QT_MOC_LITERAL(13, 192, 11), // "updateFrame"
QT_MOC_LITERAL(14, 204, 5), // "frame"
QT_MOC_LITERAL(15, 210, 27), // "updateProcessingThreadStats"
QT_MOC_LITERAL(16, 238, 20), // "ThreadStatisticsData"
QT_MOC_LITERAL(17, 259, 8), // "statData"
QT_MOC_LITERAL(18, 268, 24), // "updateCaptureThreadStats"
QT_MOC_LITERAL(19, 293, 23), // "handleContextMenuAction"
QT_MOC_LITERAL(20, 317, 8), // "QAction*"
QT_MOC_LITERAL(21, 326, 6) // "action"

    },
    "CameraView\0newImageProcessingFlags\0\0"
    "ImageProcessingFlags\0imageProcessingFlags\0"
    "setROI\0roi\0setImageProcessingSettings\0"
    "newMouseData\0MouseData\0mouseData\0"
    "updateMouseCursorPosLabel\0clearImageBuffer\0"
    "updateFrame\0frame\0updateProcessingThreadStats\0"
    "ThreadStatisticsData\0statData\0"
    "updateCaptureThreadStats\0"
    "handleContextMenuAction\0QAction*\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      13,    1,   76,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,
      18,    1,   82,    2, 0x08 /* Private */,
      19,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRect,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void CameraView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraView *_t = static_cast<CameraView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImageProcessingFlags((*reinterpret_cast< ImageProcessingFlags(*)>(_a[1]))); break;
        case 1: _t->setROI((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 2: _t->setImageProcessingSettings(); break;
        case 3: _t->newMouseData((*reinterpret_cast< MouseData(*)>(_a[1]))); break;
        case 4: _t->updateMouseCursorPosLabel(); break;
        case 5: _t->clearImageBuffer(); break;
        case 6: _t->updateFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 7: _t->updateProcessingThreadStats((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 8: _t->updateCaptureThreadStats((*reinterpret_cast< ThreadStatisticsData(*)>(_a[1]))); break;
        case 9: _t->handleContextMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CameraView::*_t)(ImageProcessingFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraView::newImageProcessingFlags)) {
                *result = 0;
            }
        }
        {
            typedef void (CameraView::*_t)(QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraView::setROI)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CameraView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraView.data,
      qt_meta_data_CameraView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraView.stringdata0))
        return static_cast<void*>(const_cast< CameraView*>(this));
    return QWidget::qt_metacast(_clname);
}

int CameraView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CameraView::newImageProcessingFlags(ImageProcessingFlags _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraView::setROI(QRect _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
