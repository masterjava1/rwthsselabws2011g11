default: RHS.f rkv56.f kreisel.f
	gfortran out.f RHS.f rkv56.f kreisel.f -O2 -o kreisel.exe

debug: RHS.f rkv56.f kreisel.f
	gfortran -Wall -g out.f RHS.f rkv56.f kreisel.f -o kreisel.exe

clean: 
	rm *.mod
	rm kreisel.exe
