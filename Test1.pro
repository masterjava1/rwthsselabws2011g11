# -------------------------------------------------
# Project created by QtCreator 2012-04-04T15:24:10
# -------------------------------------------------
TARGET = Test1
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    parameter.cpp \
    warningdialog.cpp \
    parset.cpp \
    ntl_ext.cpp \
    StepperBase.cpp \
    RHS_van.cpp \
    RuntimeException.cpp \
    qcustomplot.cpp
HEADERS += mainwindow.h \
    parameter.h \
    warningdialog.h \
    parset.h \
    Odeint.h \
    Output.h \
    RHS_gyro.h \
    StepperDopr853m.h \
    ntl_ext.h \
    StepperBase.h \
    write_tec.h \
    RuntimeException.h \
    qcustomplot.h \
    RHS_van.h

FORMS += mainwindow.ui \
    parameter.ui \
    warningdialog.ui


LIBS += -L/usr/local/lib -L/usr/lib -lntl -lblitz

QMAKE_CXXFLAGS=-fpermissive
