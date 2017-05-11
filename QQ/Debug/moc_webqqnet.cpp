/****************************************************************************
** Meta object code from reading C++ file 'webqqnet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../webqqnet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webqqnet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebQQNet_t {
    QByteArrayData data[21];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebQQNet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebQQNet_t qt_meta_stringdata_WebQQNet = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WebQQNet"
QT_MOC_LITERAL(1, 9, 23), // "checkVerifycodeFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "getCode"
QT_MOC_LITERAL(4, 42, 4), // "code"
QT_MOC_LITERAL(5, 47, 20), // "getVerifyImgFinished"
QT_MOC_LITERAL(6, 68, 7), // "imgdata"
QT_MOC_LITERAL(7, 76, 13), // "loginFinished"
QT_MOC_LITERAL(8, 90, 7), // "loginok"
QT_MOC_LITERAL(9, 98, 7), // "message"
QT_MOC_LITERAL(10, 106, 11), // "msgReceived"
QT_MOC_LITERAL(11, 118, 15), // "sendMsgFinished"
QT_MOC_LITERAL(12, 134, 5), // "txuin"
QT_MOC_LITERAL(13, 140, 3), // "msg"
QT_MOC_LITERAL(14, 144, 4), // "isok"
QT_MOC_LITERAL(15, 149, 6), // "sysMsg"
QT_MOC_LITERAL(16, 156, 12), // "httpFinished"
QT_MOC_LITERAL(17, 169, 14), // "QNetworkReply*"
QT_MOC_LITERAL(18, 184, 16), // "httpPollFinished"
QT_MOC_LITERAL(19, 201, 19), // "httpExtInfoFinished"
QT_MOC_LITERAL(20, 221, 7) // "sendMsg"

    },
    "WebQQNet\0checkVerifycodeFinished\0\0"
    "getCode\0code\0getVerifyImgFinished\0"
    "imgdata\0loginFinished\0loginok\0message\0"
    "msgReceived\0sendMsgFinished\0txuin\0msg\0"
    "isok\0sysMsg\0httpFinished\0QNetworkReply*\0"
    "httpPollFinished\0httpExtInfoFinished\0"
    "sendMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebQQNet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       7,    2,   72,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,
      11,    3,   78,    2, 0x06 /* Public */,
      15,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   88,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,
      19,    1,   94,    2, 0x0a /* Public */,
      20,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,

       0        // eod
};

void WebQQNet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebQQNet *_t = static_cast<WebQQNet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkVerifycodeFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->getVerifyImgFinished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->loginFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->msgReceived(); break;
        case 4: _t->sendMsgFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->sysMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->httpFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->httpPollFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->httpExtInfoFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->sendMsg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WebQQNet::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::checkVerifycodeFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WebQQNet::*_t)(const QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::getVerifyImgFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WebQQNet::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::loginFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WebQQNet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::msgReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WebQQNet::*_t)(QString , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::sendMsgFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WebQQNet::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebQQNet::sysMsg)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WebQQNet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebQQNet.data,
      qt_meta_data_WebQQNet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WebQQNet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebQQNet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WebQQNet.stringdata0))
        return static_cast<void*>(const_cast< WebQQNet*>(this));
    return QObject::qt_metacast(_clname);
}

int WebQQNet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WebQQNet::checkVerifycodeFinished(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebQQNet::getVerifyImgFinished(const QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebQQNet::loginFinished(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebQQNet::msgReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WebQQNet::sendMsgFinished(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WebQQNet::sysMsg(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
