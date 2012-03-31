#include <iostream>
#include <blitz/array.h>
#include "Odeint.h"
#include "Output.h"
#include "RHS_van.h"
#include "StepperDopr5.h"

using namespace blitz;

int main(int argc, char* argv[]){
   const int nvar=2;
   const double atol=1.0e-3;
   const double rtol=atol;
   const double h1=0.01;
   const double hmin=0.0;
   const double x1=0.0;
   const double x2=2.0;
   Array<double,1> ystart(nvar);
   ystart(0)=2.0;
   ystart(1)=0.0;
   Output<StepperDopr5<RHS_van> > out(20);
   RHS_van d(1.0e-3);
   Odeint<StepperDopr5<RHS_van> > ode(ystart,x1,x2,atol,rtol,h1,hmin,out,d);
   ode.integrate();
   return 0;
}
