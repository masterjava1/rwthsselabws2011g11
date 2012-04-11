# -------------------------------------------------
# Project created by QtCreator 2012-04-04T15:24:10
# -------------------------------------------------
TARGET = Test1
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    exportdialog.cpp \
    parameter.cpp \
    warningdialog.cpp \
    errordialog.cpp \
    parset.cpp \
    ntl_ext.cpp \
    StepperBase.cpp \
    RHS_van.cpp \
    RuntimeException.cpp
HEADERS += mainwindow.h \
    exportdialog.h \
    parameter.h \
    warningdialog.h \
    errordialog.h \
    parset.h \
    Odeint.h \
    Output.h \
    RHS_gyro.h \
    StepperDopr853m.h \
    ntl_ext.h \
    StepperBase.h \
    write_tec.h \
    RuntimeException.h \
    RHS_van.h

FORMS += mainwindow.ui \
    exportdialog.ui \
    parameter.ui \
    warningdialog.ui \
    errordialog.ui


LIBS += -L/usr/local/lib -lntl -lblitz
