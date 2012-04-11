#==============================================================================
# 31.03.2012
# author: Alexander Fischer
# 
# Makefile for odeint
# 
#
#==============================================================================

CF = -O2 -lntl
DCF = -lntl -Wall -g

INCLUDE = include
LIB = lib
SRC = src

#==============================================================================

default: 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -L $(LIB) -o odeint.exe

local: 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -o odeint.exe	

debug: 
	g++ $(SRC)/* $(DCF) -I $(INCLUDE) -L $(LIB) -o odeint_debug.exe

#==============================================================================
