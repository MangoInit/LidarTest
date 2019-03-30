/****************************************************************************
** Meta object code from reading C++ file 'mav_udp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mav_udp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mav_udp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MAV_UDP_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAV_UDP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAV_UDP_t qt_meta_stringdata_MAV_UDP = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MAV_UDP"
QT_MOC_LITERAL(1, 8, 17), // "receive_a_mavlink"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "mavlink_message_t"
QT_MOC_LITERAL(4, 45, 3), // "msg"
QT_MOC_LITERAL(5, 49, 16), // "signal_connected"
QT_MOC_LITERAL(6, 66, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(7, 87, 15) // "parse_a_mavlink"

    },
    "MAV_UDP\0receive_a_mavlink\0\0mavlink_message_t\0"
    "msg\0signal_connected\0readPendingDatagrams\0"
    "parse_a_mavlink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAV_UDP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MAV_UDP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAV_UDP *_t = static_cast<MAV_UDP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receive_a_mavlink((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 1: _t->signal_connected(); break;
        case 2: _t->readPendingDatagrams(); break;
        case 3: _t->parse_a_mavlink((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MAV_UDP::*_t)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAV_UDP::receive_a_mavlink)) {
                *result = 0;
            }
        }
        {
            typedef void (MAV_UDP::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MAV_UDP::signal_connected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MAV_UDP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MAV_UDP.data,
      qt_meta_data_MAV_UDP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MAV_UDP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAV_UDP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MAV_UDP.stringdata0))
        return static_cast<void*>(const_cast< MAV_UDP*>(this));
    return QObject::qt_metacast(_clname);
}

int MAV_UDP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MAV_UDP::receive_a_mavlink(mavlink_message_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAV_UDP::signal_connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
