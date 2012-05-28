/****************************************************************************
** Meta object code from reading C++ file 'eclass.h'
**
** Created: Sun 27. May 22:56:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eclass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_eclass[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,    7,   28,    7, 0x0a,
      49,   45,   28,    7, 0x0a,
      63,    7,    7,    7, 0x0a,
      80,   70,    7,    7, 0x0a,
      94,    8,    7,    7, 0x0a,
     124,  113,  107,    7, 0x0a,
     142,    7,   28,    7, 0x0a,
     160,  158,  154,    7, 0x0a,
     169,    7,   28,    7, 0x0a,
     187,  178,   28,    7, 0x0a,

 // methods: signature, parameters, type, tag, flags
     202,    7,   28,    7, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_eclass[] = {
    "eclass\0\0time\0mytick(qint64)\0QString\0"
    "hello2()\0str\0play(QString)\0stop()\0"
    "newVolume\0volume(qreal)\0seek(qint64)\0"
    "qreal\0seek_width\0seek_curr(qint64)\0"
    "time_curr()\0int\0n\0kol(int)\0insert()\0"
    "filename\0title(QString)\0hello()\0"
};

void eclass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        eclass *_t = static_cast<eclass *>(_o);
        switch (_id) {
        case 0: _t->mytick((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: { QString _r = _t->hello2();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->play((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->stop(); break;
        case 4: _t->volume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: { qreal _r = _t->seek_curr((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->time_curr();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->kol((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->insert();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->title((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->hello();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData eclass::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject eclass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_eclass,
      qt_meta_data_eclass, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &eclass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *eclass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *eclass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_eclass))
        return static_cast<void*>(const_cast< eclass*>(this));
    return QObject::qt_metacast(_clname);
}

int eclass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void eclass::mytick(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
