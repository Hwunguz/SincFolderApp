/****************************************************************************
** Meta object code from reading C++ file 'clientserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SincFolderApp/clientserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientServer_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientServer_t qt_meta_stringdata_ClientServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientServer"
QT_MOC_LITERAL(1, 13, 13), // "reqvConnectUs"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "User*"
QT_MOC_LITERAL(4, 34, 19), // "recvBroadcastForCon"
QT_MOC_LITERAL(5, 54, 8), // "sincFile"
QT_MOC_LITERAL(6, 63, 8), // "filepath"
QT_MOC_LITERAL(7, 72, 8), // "loadFile"
QT_MOC_LITERAL(8, 81, 8), // "filePath"
QT_MOC_LITERAL(9, 90, 4), // "data"
QT_MOC_LITERAL(10, 95, 9), // "connectUs"
QT_MOC_LITERAL(11, 105, 2), // "us"
QT_MOC_LITERAL(12, 108, 9), // "disconnUs"
QT_MOC_LITERAL(13, 118, 13) // "newConnection"

    },
    "ClientServer\0reqvConnectUs\0\0User*\0"
    "recvBroadcastForCon\0sincFile\0filepath\0"
    "loadFile\0filePath\0data\0connectUs\0us\0"
    "disconnUs\0newConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    2,   56,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,

       0        // eod
};

void ClientServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reqvConnectUs((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 1: _t->recvBroadcastForCon(); break;
        case 2: _t->sincFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->loadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->connectUs((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 5: _t->disconnUs((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 6: _t->newConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientServer::*)(User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientServer::reqvConnectUs)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientServer.data,
    qt_meta_data_ClientServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ClientServer::reqvConnectUs(User * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
