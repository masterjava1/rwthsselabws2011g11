#==============================================================================
# 31.03.2012
# author: Alexander Fischer
# 
# Makefile for odeint
# 
#
#==============================================================================

# CF = -O2 -lntl -fopenmp
CF = -O2 -lntl 
DCF = -lntl -Wall -g

INCLUDE = include
LIB = lib
SRC = src

#==============================================================================

default: 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -L $(LIB) -o odeint.exe

local:
	mv include/NTL include/NTL_bu 
	mv include/blitz include/blitz_bu 
	g++ $(SRC)/* $(CF) -I $(INCLUDE) -o odeint.exe	
	mv include/NTL_bu include/NTL
	mv include/blitz_bu include/blitz 

debug: 
	g++ $(SRC)/* $(DCF) -I $(INCLUDE) -L $(LIB) -o odeint_debug.exe

local_debug:
	mv include/NTL include/NTL_bu 
	mv include/blitz include/blitz_bu 
	g++ $(SRC)/* $(DCF) -I $(INCLUDE) -o odeint.exe  
	mv include/NTL_bu include/NTL
	mv include/blitz_bu include/blitz 

fix:
	mv include/NTL_bu include/NTL
	mv include/blitz_bu include/blitz	
#==============================================================================
