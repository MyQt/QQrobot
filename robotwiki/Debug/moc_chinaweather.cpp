/****************************************************************************
** Meta object code from reading C++ file 'chinaweather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chinaweather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chinaweather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChinaWeather_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChinaWeather_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChinaWeather_t qt_meta_stringdata_ChinaWeather = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChinaWeather"
QT_MOC_LITERAL(1, 13, 11), // "sentWeather"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "Weather"
QT_MOC_LITERAL(4, 34, 12), // "analysisJson"
QT_MOC_LITERAL(5, 47, 11), // "getCityCode"
QT_MOC_LITERAL(6, 59, 4) // "city"

    },
    "ChinaWeather\0sentWeather\0\0Weather\0"
    "analysisJson\0getCityCode\0city"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChinaWeather[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    1,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    6,

       0        // eod
};

void ChinaWeather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChinaWeather *_t = static_cast<ChinaWeather *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sentWeather((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->analysisJson(); break;
        case 2: { QString _r = _t->getCityCode((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChinaWeather::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChinaWeather::sentWeather)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChinaWeather::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChinaWeather.data,
      qt_meta_data_ChinaWeather,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChinaWeather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChinaWeather::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChinaWeather.stringdata0))
        return static_cast<void*>(const_cast< ChinaWeather*>(this));
    return QObject::qt_metacast(_clname);
}

int ChinaWeather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ChinaWeather::sentWeather(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
