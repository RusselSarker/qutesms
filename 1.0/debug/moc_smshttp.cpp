/****************************************************************************
** Meta object code from reading C++ file 'smshttp.h'
**
** Created: Thu Apr 16 20:27:57 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../smshttp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smshttp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_smshttp[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      17,    8,    8,    8, 0x0a,
      28,    8,    8,    8, 0x0a,
      38,    8,    8,    8, 0x0a,
      56,   52,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_smshttp[] = {
    "smshttp\0\0logIn()\0showHelp()\0sendSms()\0"
    "updateChars()\0num\0showNumber(int)\0"
};

const QMetaObject smshttp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_smshttp,
      qt_meta_data_smshttp, 0 }
};

const QMetaObject *smshttp::metaObject() const
{
    return &staticMetaObject;
}

void *smshttp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smshttp))
        return static_cast<void*>(const_cast< smshttp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int smshttp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: logIn(); break;
        case 1: showHelp(); break;
        case 2: sendSms(); break;
        case 3: updateChars(); break;
        case 4: showNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
