/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Apr 11 11:57:41 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      36,   34,   11,   11, 0x0a,
      60,   11,   11,   11, 0x0a,
      75,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,
     153,   11,   11,   11, 0x08,
     188,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ExportbuttonClicked()\0P\0"
    "parWindowClosed(ParSet)\0WindowClosed()\0"
    "on_actionPositionsClicked_triggered()\0"
    "on_actionDerivativesClicked_triggered()\0"
    "on_actionAnglesClicked_triggered()\0"
    "on_actionSlideTime_triggered()\0"
    "on_actionOpenParameterOptions_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ExportbuttonClicked(); break;
        case 1: parWindowClosed((*reinterpret_cast< ParSet(*)>(_a[1]))); break;
        case 2: WindowClosed(); break;
        case 3: on_actionPositionsClicked_triggered(); break;
        case 4: on_actionDerivativesClicked_triggered(); break;
        case 5: on_actionAnglesClicked_triggered(); break;
        case 6: on_actionSlideTime_triggered(); break;
        case 7: on_actionOpenParameterOptions_triggered(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
