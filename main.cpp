#include <iostream>
#include <fstream>
#include <blitz/array.h>
#include <NTL/RR.h>
#include "Odeint.h"
#include "Output.h"
#include "RHS_gyro.h"
#include "StepperDopr853m.h"

using namespace blitz;
using namespace NTL;

int main(int argc, char* argv[]){
   int nvar=10;
   RR atol=to_RR(1.0e-2);
   RR rtol=atol;
   RR h1=to_RR(1E-4);
   RR hmin=to_RR(1E-20);
   RR x1=to_RR(0.0);
   RR x2=to_RR(100.0);
//    RR x2=0.23;

   // RHS parameter
   RR g=to_RR(9.81);
   RR R=to_RR(25E-3);
   RR k=to_RR(0.3E2);
//    RR k=0;

   RR m=to_RR(15E-3);
   RR a=to_RR(5E-3);

   Array<RR,1> ystart(nvar);
   Array<RR,2> tmp;
   ystart(0)=to_RR(0.0);
   ystart(1)=to_RR(0.0);
//   ystart(2)=to_RR(250.0);
   ystart(2)=to_RR(100.0);
   ystart(3)=to_RR(0.0);
   ystart(4)=to_RR(0.0);
   ystart(5)=to_RR(0.1);
   ystart(6)=to_RR(0.0);
   ystart(7)=to_RR(0.0);
   ystart(8)=to_RR(0.0);
   ystart(9)=to_RR(0.0);
   Output<StepperDopr853m<RHS_gyro> > out(-1);
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
