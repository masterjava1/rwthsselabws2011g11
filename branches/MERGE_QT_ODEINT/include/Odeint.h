/**===========================================================================
  30.03.2012
  desc: high-level interface for ODE solvers with adaptive steppsize controll
  rev: 1.0
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
    - Stepper.h  
    - Output.h
    - RuntimeException.h
  ===========================================================================*/
#ifndef _ODEINT_INCLUDED__
#define _ODEINT_INCLUDED__

#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

#include <blitz/array.h>
#include <NTL/RR.h>
#include "Output.h"

using namespace blitz;
using namespace NTL;

template<typename Stepper>
class Odeint {
   public:
   static const int MAXSTP=5000000;  // Maxsteps
   RR EPS;
   int nok; // good steps
   int nbad; // bad steps (retried and fixed)
   int nvar;
   RR x1, x2, hmin;
   bool dense;  // true if dense output is requested by out
   Array<RR,1> y;
   Array<RR,1> dydx;
   Array<RR,1> &ystart;
   Output<Stepper> &out;
   typename Stepper::Dtype &derivs;  // get the type of derivs from the stepper
   Stepper s;
   int nstp;
   RR x,h;
   // The routines integrates starting values ystart[0..nvar-1] from xx1 to xx2 with 
   // absolute tolerance atol and relative tolerance rtol. The quantity h1 should be
   // set as guessed first stepsize, hmin as the minimum allowed stepsize 
   // (can be zero). An Output object should be input to control the saving of 
   // intermediate values. derivs is the supplied RHS. 
   Odeint(Array<RR,1> &ystartt, const RR xx1, const RR xx2,
    const RR atol, const RR rtol, const RR h1, const RR hminn, 
    Output<Stepper> &outt, typename Stepper::Dtype &derivss);
   // Does actual integration
   void integrate();
};

template<typename Stepper>
Odeint<Stepper>::Odeint(Array<RR,1> &ystartt, const RR xx1, const RR xx2,
 const RR atol, const RR rtol, const RR h1, const RR hminn, 
 Output<Stepper> &outt, typename Stepper::Dtype &derivss) 
 : nvar(ystartt.size()), y(nvar), dydx(nvar), ystart(ystartt), x(xx1), nok(0), 
 nbad(0), x1(xx1), x2(xx2), hmin(hminn), dense(outt.dense), out(outt), 
 s(y, dydx, x, atol, rtol, dense), derivs(derivss) {
   EPS=to_RR(2.4651903288156618919116517665087069677288E-32);
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
      if (abs(s.hnext) <= hmin) throw(RuntimeException("Step size too small in Odeint!\n"
      "hnext <= hmin",0));
      h=s.hnext;
   }
   throw(RuntimeException("Too many steps in routine Odeint\n"
   "counter > maxsteps",0));
}

#endif
