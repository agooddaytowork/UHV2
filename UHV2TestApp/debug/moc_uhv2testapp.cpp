/****************************************************************************
** Meta object code from reading C++ file 'uhv2testapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../uhv2testapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uhv2testapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UHV2TestApp_t {
    QByteArrayData data[13];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UHV2TestApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UHV2TestApp_t qt_meta_stringdata_UHV2TestApp = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UHV2TestApp"
QT_MOC_LITERAL(1, 12, 16), // "quitSerialThread"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "sigWriteToSerialInterface"
QT_MOC_LITERAL(4, 56, 4), // "data"
QT_MOC_LITERAL(5, 61, 35), // "on_pushButton_SerialConnect_c..."
QT_MOC_LITERAL(6, 97, 7), // "checked"
QT_MOC_LITERAL(7, 105, 37), // "on_comboBoxSerial_currentInde..."
QT_MOC_LITERAL(8, 143, 5), // "index"
QT_MOC_LITERAL(9, 149, 34), // "slotReceiveDataFromSerialInte..."
QT_MOC_LITERAL(10, 184, 26), // "serialInterfaceIsConnected"
QT_MOC_LITERAL(11, 211, 29), // "serialInterfaceIsNoTConnected"
QT_MOC_LITERAL(12, 241, 21) // "on_pushButton_clicked"

    },
    "UHV2TestApp\0quitSerialThread\0\0"
    "sigWriteToSerialInterface\0data\0"
    "on_pushButton_SerialConnect_clicked\0"
    "checked\0on_comboBoxSerial_currentIndexChanged\0"
    "index\0slotReceiveDataFromSerialInterface\0"
    "serialInterfaceIsConnected\0"
    "serialInterfaceIsNoTConnected\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UHV2TestApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UHV2TestApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UHV2TestApp *_t = static_cast<UHV2TestApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quitSerialThread(); break;
        case 1: _t->sigWriteToSerialInterface((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_SerialConnect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxSerial_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotReceiveDataFromSerialInterface((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->serialInterfaceIsConnected(); break;
        case 6: _t->serialInterfaceIsNoTConnected(); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UHV2TestApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UHV2TestApp::quitSerialThread)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UHV2TestApp::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UHV2TestApp::sigWriteToSerialInterface)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UHV2TestApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UHV2TestApp.data,
      qt_meta_data_UHV2TestApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UHV2TestApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UHV2TestApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UHV2TestApp.stringdata0))
        return static_cast<void*>(const_cast< UHV2TestApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UHV2TestApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UHV2TestApp::quitSerialThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UHV2TestApp::sigWriteToSerialInterface(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
