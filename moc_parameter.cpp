/****************************************************************************
** Meta object code from reading C++ file 'parameter.h'
**
** Created: Thu Apr 12 05:26:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "parameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Parameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      36,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   10,   10,   10, 0x0a,
      66,   10,   10,   10, 0x08,
     107,   10,   10,   10, 0x08,
     145,   10,   10,   10, 0x08,
     172,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Parameter[] = {
    "Parameter\0\0P\0closeParWindow(ParSet)\0"
    "closeWindow()\0FrictionCheck()\0"
    "on_actionCancelButtonClicked_triggered()\0"
    "on_actionSetButtonClicked_triggered()\0"
    "on_export_button_clicked()\0"
    "on_import_button_clicked()\0"
};

void Parameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Parameter *_t = static_cast<Parameter *>(_o);
        switch (_id) {
        case 0: _t->closeParWindow((*reinterpret_cast< ParSet(*)>(_a[1]))); break;
        case 1: _t->closeWindow(); break;
        case 2: _t->FrictionCheck(); break;
        case 3: _t->on_actionCancelButtonClicked_triggered(); break;
        case 4: _t->on_actionSetButtonClicked_triggered(); break;
        case 5: _t->on_export_button_clicked(); break;
        case 6: _t->on_import_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Parameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Parameter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Parameter,
      qt_meta_data_Parameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Parameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Parameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Parameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Parameter))
        return static_cast<void*>(const_cast< Parameter*>(this));
    return QDialog::qt_metacast(_clname);
}

int Parameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Parameter::closeParWindow(ParSet _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Parameter::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
