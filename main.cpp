#include <iostream>
#include <fstream>
#include <blitz/array.h>
#include "Odeint.h"
#include "Output.h"
#include "RHS_gyro.h"
#include "StepperDopr853m.h"

using namespace blitz;

int main(int argc, char* argv[]){
   const int nvar=10;
   const double atol=1.0e-6;
   const double rtol=atol;
   const double h1=1E-8;
   const double hmin=1E-10;
   const double x1=0.0;
   const double x2=2.75;
//   const double x2=0.23;

   // RHS parameter
   const double g=9.81;
   const double R=25E-3;
   const double k=0.3E2;
//   const double k=0;

   const double m=15E-3;
   const double a=5E-3;

   Array<double,1> ystart(nvar);
   Array<double,2> tmp;
   ystart(0)=0.0;
   ystart(1)=0.0;
   ystart(2)=250.0;
   ystart(3)=0.0;
   ystart(4)=0.0;
   ystart(5)=0.1;
   ystart(6)=0.0;
   ystart(7)=0.0;
   ystart(8)=0.0;
   ystart(9)=0.0;
   Output<StepperDopr853m<RHS_gyro> > out(1000);
   RHS_gyro d(g,R,k,m,a);
   Odeint<StepperDopr853m<RHS_gyro> > ode(ystart,x1,x2,atol,rtol,h1,hmin,out,d);
   try{
      ode.integrate();
   }catch(char const* e){
      cout << e << endl;
      return 1;
   }
   

   // Output
   cout << "Stepps "<<out.count << endl;
   //cout << out.xsave(Range(0,out.count-1)) << endl;
   //cout << out.ysave(Range(0,nvar-1),Range(0,out.count-1)) << endl;

   // Write file
   cout << "Writing file" << endl;
   ofstream ofile;
   ofile.open("gyro.dat");
   ofile << setprecision(16);
   for (int hi=0;hi<out.count-1;hi++) ofile << out.xsave(hi) << " ";
   ofile << endl;
   for (int hi=0;hi<out.count-1;hi++) ofile << out.ysave(2,hi) << " ";
   ofile << endl;
   ofile.close();
   return 0;
}
