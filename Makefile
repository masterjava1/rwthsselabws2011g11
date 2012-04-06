#==============================================================================
# 31.03.2012
# 
# Makefile for odeint
# blitz 0.9 required!
#
#==============================================================================

CF = -O2
DCF = -Wall -g

FILES = StepperBase.cpp main.cpp

#==============================================================================

default: $(FILES)
	g++ $(FILES) $(CF) -o odeint.exe

debug: $(FILES)
	g++ $(FILES) $(DCF) -o odeint_debug.exe

#==============================================================================
