/****************************************************************************
** Meta object code from reading C++ file 'logindlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../logindlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginDlg_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDlg_t qt_meta_stringdata_LoginDlg = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LoginDlg"
QT_MOC_LITERAL(1, 9, 15), // "checkVerifycode"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 23), // "checkVerifycodeFinished"
QT_MOC_LITERAL(4, 50, 7), // "getCode"
QT_MOC_LITERAL(5, 58, 4), // "code"
QT_MOC_LITERAL(6, 63, 20), // "getVerifyImgFinished"
QT_MOC_LITERAL(7, 84, 7), // "imgdata"
QT_MOC_LITERAL(8, 92, 13), // "loginFinished"
QT_MOC_LITERAL(9, 106, 7), // "loginok"
QT_MOC_LITERAL(10, 114, 7), // "message"
QT_MOC_LITERAL(11, 122, 12) // "rtnButtonClk"

    },
    "LoginDlg\0checkVerifycode\0\0"
    "checkVerifycodeFinished\0getCode\0code\0"
    "getVerifyImgFinished\0imgdata\0loginFinished\0"
    "loginok\0message\0rtnButtonClk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    2,   40,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    2,   48,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    9,   10,
    QMetaType::Void,

       0        // eod
};

void LoginDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDlg *_t = static_cast<LoginDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkVerifycode(); break;
        case 1: _t->checkVerifycodeFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->getVerifyImgFinished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->loginFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->rtnButtonClk(); break;
        default: ;
        }
    }
}

const QMetaObject LoginDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDlg.data,
      qt_meta_data_LoginDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDlg.stringdata0))
        return static_cast<void*>(const_cast< LoginDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
