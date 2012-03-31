/*===========================================================================
  30.03.2012
  desc: high-level interface for ODE solvers with adaptive steppsize controll
  rev: 0.1
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
    - Stepper.h  
    - Output.h
  ===========================================================================*/
#ifndef _ODEINT_INCLUDED__
#define _ODEINT_INCLUDED__

#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

#include <cmath>
#include <blitz/array.h>
#include "Output.h"

using namespace blitz;

template<typename Stepper>
class Odeint {
   public:
   static const int MAXSTP=50000;  // Maxsteps
   double EPS;
   int nok; // good steps
   int nbad; // bad steps (retried and fixed)
   int nvar;
   double x1, x2, hmin;
   bool dense;  // true if dense output is requested by out
   Array<double,1> y, dydx;
   Array<double,1> &ystart;
   Output<Stepper> &out;
   typename Stepper::Dtype &derivs;  // get the type of derivs from the stepper
   Stepper s;
   int nstp;
   double x,h;
   // The routines integrates starting values ystart[0..nvar-1] from xx1 to xx2 with 
   // absolute tolerance atol and relative tolerance rtol. The quantity h1 should be
   // set as guessed first stepsize, hmin as the minimum allowed stepsize 
   // (can be zero). An Output object should be input to control the saving of 
   // intermediate values. derivs is the supplied RHS. 
   Odeint(Array<double,1> &ystartt, const double xx1, const double xx2,
    const double atol, const double rtol, const double h1, const double hminn, 
    Output<Stepper> &outt, typename Stepper::Dtype &derivss);
   // Does actual integration
   void integrate();
};

template<typename Stepper>
Odeint<Stepper>::Odeint(Array<double,1> &ystartt, const double xx1, const double xx2,
 const double atol, const double rtol, const double h1, const double hminn, 
 Output<Stepper> &outt, typename Stepper::Dtype &derivss) 
: nvar(ystartt.size()), y(nvar), dydx(nvar), ystart(ystartt), x(xx1), nok(0), 
 nbad(0), x1(xx1), x2(xx2), hmin(hminn), dense(outt.dense), out(outt), 
 derivs(derivss), s(y, dydx, x, atol, rtol, dense) {
   EPS=numeric_limits<double>::epsilon();
   h=SIGN(h1, x2-x1);
   for (int i=0;i<nvar;i++) y(i)=ystart(i);
   out.init(s.neqn,x1,x2);
}

template<typename Stepper>
void Odeint<Stepper>::integrate() {
   derivs(x,y,dydx);
   if(dense){   // Store initial values
      out.out(-1,x,y,s,h);
   }
   else{
      out.save(x,y);
   }
   for (nstp=0;nstp<MAXSTP;nstp++) {
      if ((x+h*1.0001-x2)*(x2-x1) > 0.0) {
         h=x2-x;  // If stepsize can overshot, decrease
      }
      s.step(h,derivs);  // Take a step
      if (s.hdid == h) ++nok; else ++nbad;
      if (dense) {
         out.out(nstp,x,y,s,s.hdid);
      }else {
         out.save(x,y);
      }
      if ((x-x2)*(x2-x1) >= 0.0) {  // Are we done?
         for (int i=0;i<nvar;i++) ystart(i)=y(i);  // Update ystart
         if (out.kmax>0 && abs(out.xsave(out.count-1)-x2)>100.0*abs(x2)*EPS){
            out.save(x,y);  // Make sure last step gets saved
         }
         return;  // Normal exit
      }
      if (abs(s.hnext) <= hmin) throw("Step size too small in Odeint");
      h=s.hnext;
   }
   throw("Too many steps in routine Odeint");
}

#endif
