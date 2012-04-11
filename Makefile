#==============================================================================
# 31.03.2012
# author: Alexander Fischer
# 
# Makefile for odeint
# 
#
#==============================================================================

CF = -O1 -lntl -m64 -Wl,-O1 -lQtGui -lQtCore -lpthread
DCF = -lntl -Wall -g

INCLUDE = include
LIB = lib
SRC = src

#==============================================================================

default: 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -L $(LIB) -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -o odeint.exe 

local:
	mv include/NTL include/NTL_bu 
	mv include/blitz include/blitz_bu 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -o odeint.exe	
	mv include/NTL_bu include/NTL
	mv include/blitz_bu include/blitz 

debug: 
	g++ $(SRC)/* $(DCF) -I $(INCLUDE) -L $(LIB) -o odeint_debug.exe

#==============================================================================
