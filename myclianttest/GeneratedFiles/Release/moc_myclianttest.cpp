/****************************************************************************
** Meta object code from reading C++ file 'myclianttest.h'
**
** Created: Sat Oct 6 18:17:40 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myclianttest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclianttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myclianttest[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      32,   26,   13,   13, 0x0a,
      53,   13,   13,   13, 0x0a,
      79,   68,   13,   13, 0x0a,
      93,   13,   13,   13, 0x0a,
     105,   13,   13,   13, 0x0a,
     117,  112,   13,   13, 0x0a,
     143,  137,   13,   13, 0x0a,
     170,  137,   13,   13, 0x0a,
     208,  203,   13,   13, 0x0a,
     225,   13,   13,   13, 0x0a,
     244,  235,   13,   13, 0x0a,
     280,  271,   13,   13, 0x0a,
     307,   13,   13,   13, 0x0a,
     323,   13,   13,   13, 0x0a,
     334,  137,   13,   13, 0x0a,
     361,   13,   13,   13, 0x0a,
     378,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_myclianttest[] = {
    "myclianttest\0\0readyRead()\0bytes\0"
    "bytesWritten(qint64)\0disconnected()\0"
    "serverpath\0list(QString)\0connected()\0"
    "test()\0Path\0mycomputer(QString)\0index\0"
    "doubleClicked(QModelIndex)\0"
    "doubleClickedServer(QModelIndex)\0path\0"
    "setpath(QString)\0getpath()\0listitem\0"
    "servercomputer(QByteArray)\0downitem\0"
    "serverfiledown(QByteArray)\0getserverpath()\0"
    "download()\0Serverclicked(QModelIndex)\0"
    "gotomotherpath()\0gotoservermotherpath()\0"
};

const QMetaObject myclianttest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_myclianttest,
      qt_meta_data_myclianttest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myclianttest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myclianttest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myclianttest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myclianttest))
        return static_cast<void*>(const_cast< myclianttest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int myclianttest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readyRead(); break;
        case 1: bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: disconnected(); break;
        case 3: list((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: connected(); break;
        case 5: test(); break;
        case 6: mycomputer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: doubleClickedServer((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: setpath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: getpath(); break;
        case 11: servercomputer((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: serverfiledown((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: getserverpath(); break;
        case 14: download(); break;
        case 15: Serverclicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: gotomotherpath(); break;
        case 17: gotoservermotherpath(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
