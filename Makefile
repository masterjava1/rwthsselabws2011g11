#############################################################################
# Makefile for building: QT+odeint
# Generated by qmake (2.01a) (Qt 4.6.3) on: Thu Apr 12 00:49:46 2012
# Project:  QT+odeint.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile QT+odeint.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -L/usr/local/lib -L/usr/lib -lntl -lblitz -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = errordialog.cpp \
		exportdialog.cpp \
		main.cpp \
		mainwindow.cpp \
		mydialog.cpp \
		ntl_ext.cpp \
		parameter.cpp \
		parameterdialog.cpp \
		parset.cpp \
		slider.cpp \
		warningdialog.cpp \
		RuntimeException.cpp \
		StepperBase.cpp moc_errordialog.cpp \
		moc_exportdialog.cpp \
		moc_mainwindow.cpp \
		moc_mydialog.cpp \
		moc_parameter.cpp \
		moc_parameterdialog.cpp \
		moc_slider.cpp \
		moc_warningdialog.cpp
OBJECTS       = errordialog.o \
		exportdialog.o \
		main.o \
		mainwindow.o \
		mydialog.o \
		ntl_ext.o \
		parameter.o \
		parameterdialog.o \
		parset.o \
		slider.o \
		warningdialog.o \
		RuntimeException.o \
		StepperBase.o \
		moc_errordialog.o \
		moc_exportdialog.o \
		moc_mainwindow.o \
		moc_mydialog.o \
		moc_parameter.o \
		moc_parameterdialog.o \
		moc_slider.o \
		moc_warningdialog.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		QT+odeint.pro
QMAKE_TARGET  = QT+odeint
DESTDIR       = 
TARGET        = QT+odeint

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_errordialog.h ui_exportdialog.h ui_mainwindow.h ui_mydialog.h ui_parameter.h ui_parameterdialog.h ui_warningdialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: QT+odeint.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile QT+odeint.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile QT+odeint.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/QT+odeint1.0.0 || $(MKDIR) .tmp/QT+odeint1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/QT+odeint1.0.0/ && $(COPY_FILE) --parents errordialog.h exportdialog.h mainwindow.h mydialog.h ntl_ext.h Odeint.h Output.h parameter.h parameterdialog.h parset.h RHS_gyro.h RuntimeException.h slider.h StepperBase.h StepperDopr853m.h warningdialog.h .tmp/QT+odeint1.0.0/ && $(COPY_FILE) --parents errordialog.cpp exportdialog.cpp main.cpp mainwindow.cpp mydialog.cpp ntl_ext.cpp parameter.cpp parameterdialog.cpp parset.cpp slider.cpp warningdialog.cpp RuntimeException.cpp StepperBase.cpp .tmp/QT+odeint1.0.0/ && $(COPY_FILE) --parents errordialog.ui exportdialog.ui mainwindow.ui mydialog.ui parameter.ui parameterdialog.ui warningdialog.ui .tmp/QT+odeint1.0.0/ && (cd `dirname .tmp/QT+odeint1.0.0` && $(TAR) QT+odeint1.0.0.tar QT+odeint1.0.0 && $(COMPRESS) QT+odeint1.0.0.tar) && $(MOVE) `dirname .tmp/QT+odeint1.0.0`/QT+odeint1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/QT+odeint1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_errordialog.cpp moc_exportdialog.cpp moc_mainwindow.cpp moc_mydialog.cpp moc_parameter.cpp moc_parameterdialog.cpp moc_slider.cpp moc_warningdialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_errordialog.cpp moc_exportdialog.cpp moc_mainwindow.cpp moc_mydialog.cpp moc_parameter.cpp moc_parameterdialog.cpp moc_slider.cpp moc_warningdialog.cpp
moc_errordialog.cpp: errordialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) errordialog.h -o moc_errordialog.cpp

moc_exportdialog.cpp: exportdialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) exportdialog.h -o moc_exportdialog.cpp

moc_mainwindow.cpp: parameter.h \
		parset.h \
		exportdialog.h \
		ui_mainwindow.h \
		Odeint.h \
		Output.h \
		RuntimeException.h \
		StepperDopr853m.h \
		ntl_ext.h \
		StepperBase.h \
		RHS_gyro.h \
		write_tec.h \
		mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_mydialog.cpp: mydialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mydialog.h -o moc_mydialog.cpp

moc_parameter.cpp: parset.h \
		parameter.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) parameter.h -o moc_parameter.cpp

moc_parameterdialog.cpp: parameterdialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) parameterdialog.h -o moc_parameterdialog.cpp

moc_slider.cpp: slider.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) slider.h -o moc_slider.cpp

moc_warningdialog.cpp: warningdialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) warningdialog.h -o moc_warningdialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_errordialog.h ui_exportdialog.h ui_mainwindow.h ui_mydialog.h ui_parameter.h ui_parameterdialog.h ui_warningdialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_errordialog.h ui_exportdialog.h ui_mainwindow.h ui_mydialog.h ui_parameter.h ui_parameterdialog.h ui_warningdialog.h
ui_errordialog.h: errordialog.ui
	/usr/bin/uic-qt4 errordialog.ui -o ui_errordialog.h

ui_exportdialog.h: exportdialog.ui
	/usr/bin/uic-qt4 exportdialog.ui -o ui_exportdialog.h

ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_mydialog.h: mydialog.ui
	/usr/bin/uic-qt4 mydialog.ui -o ui_mydialog.h

ui_parameter.h: parameter.ui
	/usr/bin/uic-qt4 parameter.ui -o ui_parameter.h

ui_parameterdialog.h: parameterdialog.ui
	/usr/bin/uic-qt4 parameterdialog.ui -o ui_parameterdialog.h

ui_warningdialog.h: warningdialog.ui
	/usr/bin/uic-qt4 warningdialog.ui -o ui_warningdialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

errordialog.o: errordialog.cpp errordialog.h \
		ui_errordialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o errordialog.o errordialog.cpp

exportdialog.o: exportdialog.cpp exportdialog.h \
		ui_exportdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o exportdialog.o exportdialog.cpp

main.o: main.cpp mainwindow.h \
		parameter.h \
		parset.h \
		exportdialog.h \
		ui_mainwindow.h \
		Odeint.h \
		Output.h \
		RuntimeException.h \
		StepperDopr853m.h \
		ntl_ext.h \
		StepperBase.h \
		RHS_gyro.h \
		write_tec.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		parameter.h \
		parset.h \
		exportdialog.h \
		ui_mainwindow.h \
		Odeint.h \
		Output.h \
		RuntimeException.h \
		StepperDopr853m.h \
		ntl_ext.h \
		StepperBase.h \
		RHS_gyro.h \
		write_tec.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

mydialog.o: mydialog.cpp mydialog.h \
		ui_mydialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mydialog.o mydialog.cpp

ntl_ext.o: ntl_ext.cpp ntl_ext.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ntl_ext.o ntl_ext.cpp

parameter.o: parameter.cpp parameter.h \
		parset.h \
		ui_parameter.h \
		warningdialog.h \
		errordialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o parameter.o parameter.cpp

parameterdialog.o: parameterdialog.cpp parameterdialog.h \
		ui_parameterdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o parameterdialog.o parameterdialog.cpp

parset.o: parset.cpp parset.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o parset.o parset.cpp

slider.o: slider.cpp slider.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o slider.o slider.cpp

warningdialog.o: warningdialog.cpp warningdialog.h \
		ui_warningdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o warningdialog.o warningdialog.cpp

RuntimeException.o: RuntimeException.cpp RuntimeException.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RuntimeException.o RuntimeException.cpp

StepperBase.o: StepperBase.cpp StepperBase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o StepperBase.o StepperBase.cpp

moc_errordialog.o: moc_errordialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_errordialog.o moc_errordialog.cpp

moc_exportdialog.o: moc_exportdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_exportdialog.o moc_exportdialog.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_mydialog.o: moc_mydialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mydialog.o moc_mydialog.cpp

moc_parameter.o: moc_parameter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_parameter.o moc_parameter.cpp

moc_parameterdialog.o: moc_parameterdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_parameterdialog.o moc_parameterdialog.cpp

moc_slider.o: moc_slider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_slider.o moc_slider.cpp

moc_warningdialog.o: moc_warningdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_warningdialog.o moc_warningdialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

