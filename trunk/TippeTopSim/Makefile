# ==================================================================
# Makefile for TippeTopSim
# alexander.fischer@rwth-aachen.de
#
# NOTE:
# This makefile uses prebuilt libraries (NTL, blitz and qt)
# if you want to build TippeTopSim on different architectures
# than the RWTH Linux Cluster environment you have to recompile them
#
# usage:
# $make
# $make clean
# ==================================================================
CXX = g++
UIC = tools/uic
MOC = tools/moc
CF = -O2 -fpermissive -lQtGui -lQtCore -lntl 
DEFINES = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB \
   -DQT_SHARED
APP = TippeTopSim.exe
LIBS = -L lib
INCLUDE = -I include \
   -I include/blitz \
   -I include/NTL \
   -I mkspecs/linux-g++-64 \
   -I include/QtCore \
   -I include/QtGui
SOURCES = src/ntl_ext.cpp \
   src/RuntimeException.cpp \
   src/StepperBase.cpp \
   src/parset.cpp \
   src/errordialog.cpp \
   src/exportdialog.cpp \
   src/parameter.cpp \
   src/parameterdialog.cpp \
   src/qcustomplot.cpp \
   src/mainwindow.cpp \
   src/slider.cpp \
   src/warningdialog.cpp \
   src/mydialog.cpp \
   src/main.cpp
FORMS = ui/errordialog.ui \
   ui/exportdialog.ui \
   ui/mainwindow.ui \
   ui/mydialog.ui \
   ui/parameter.ui \
   ui/parameterdialog.ui \
   ui/warningdialog.ui
FORMS_H = include/ui_errordialog.h \
   include/ui_exportdialog.h \
   include/ui_mainwindow.h \
   include/ui_mydialog.h \
   include/ui_parameter.h \
   include/ui_parameterdialog.h \
   include/ui_warningdialog.h
MOC_SOURCES = src/moc_errordialog.cpp \
   src/moc_exportdialog.cpp \
   src/moc_mainwindow.cpp \
   src/moc_mydialog.cpp \
   src/moc_parameter.cpp \
   src/moc_parameterdialog.cpp \
   src/moc_qcustomplot.cpp \
   src/moc_slider.cpp \
   src/moc_warningdialog.cpp
SOURCES += $(MOC_SOURCES)
# ==================================================================
all: $(FORMS) $(FORMS_H) $(MOC_SOURCES) $(APP)

# Parse *.ui files
include/ui_%.h: ui/%.ui
	$(UIC) $< -o $@

# moc 
src/moc_%.cpp: include/%.h
	$(MOC) $(INCLUDE) $(DEFINES) $< -o $@

# Build application 
$(APP): $(SOURCES) $(FORMS) $(FORMS_H) $(MOC_SOURCES) 
	$(CXX) $(SOURCES) $(CF) $(DEFINES) $(LIBS) $(INCLUDE) -o $(APP)
# ==================================================================
.PHONY : clean
clean:
	rm include/ui_*
	rm src/moc_*
# ==================================================================
