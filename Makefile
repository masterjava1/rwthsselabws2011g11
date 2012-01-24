#=================================================================================
# 24.01.2012
#
# RWTH SSELAB WS11/12
# alexander.fischer@rwth-aachen.de
#
#=================================================================================

CF = -O2
DEBUGFLAGS = -g -Wall
DEBUGFLAGS_INTEL =  -g  -check all -warn all,nodec,nointerfaces \
               -traceback -fpe0 -ftrapuv \
               -implicitnone -check all -warn unused -fp-stack-check

FILES = precmod.f out.f atv01.f RHS.f rkv56.f kreisel.f

#=================================================================================

default: $(FILES) 
	gfortran $(FILES) $(CF) -o kreisel.exe

intel: RHS.f rkv56.f kreisel.f
	ifort $(FILES) $(CF) -o kreisel_intel.exe

debug: RHS.f rkv56.f kreisel.f
	gfortran  $(DEBUGFLAGS) $(FILES) -o kreisel_debug.exe

debug_intel: RHS.f rkv56.f kreisel.f
	ifort $(DEBUGFLAGS_INTEL) $(FILES) -o kreisel_debug_intel.exe

clean: 
	rm *.mod
	rm *.exe
