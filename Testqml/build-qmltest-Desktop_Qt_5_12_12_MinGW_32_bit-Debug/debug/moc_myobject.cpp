/****************************************************************************
** Meta object code from reading C++ file 'myobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmltest/myobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyObject_t {
    QByteArrayData data[10];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyObject_t qt_meta_stringdata_MyObject = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyObject"
QT_MOC_LITERAL(1, 9, 13), // "iValueChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "sStringChanged"
QT_MOC_LITERAL(4, 39, 7), // "cppSlot"
QT_MOC_LITERAL(5, 47, 1), // "i"
QT_MOC_LITERAL(6, 49, 1), // "s"
QT_MOC_LITERAL(7, 51, 4), // "func"
QT_MOC_LITERAL(8, 56, 6), // "iValue"
QT_MOC_LITERAL(9, 63, 7) // "sString"

    },
    "MyObject\0iValueChanged\0\0sStringChanged\0"
    "cppSlot\0i\0s\0func\0iValue\0sString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void MyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iValueChanged(); break;
        case 1: _t->sStringChanged(); break;
        case 2: _t->cppSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->func(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::iValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyObject::sStringChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MyObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->iValue(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MyObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyObject::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyObject.data,
    qt_meta_data_MyObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyObject::iValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyObject::sStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
