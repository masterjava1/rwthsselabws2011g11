/*===========================================================================
  30.03.2012
  desc: base class for all ODE algorithms 
  rev: 0.1
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
  ===========================================================================*/
#ifndef _STEPPERBASE_INCLUDED__
#define _STEPPERBASE_INCLUDED__

#include <blitz/array.h>
#include <NTL/RR.h>

using namespace blitz;
using namespace NTL;

class StepperBase {
   public:
   RR &x;
   RR xold;  // used for dense output
   Array<RR,1> &y,&dydx;
   RR atol, rtol,cqtol;
   bool dense;
   RR hdid;  // actual steppsize accomplished by the step routine
   RR hnext;  // steppsize predicted by the controller for the next step
   RR EPS;
   int n, neqn;
   Array<RR,1> yout, yerr; // new value for y and error estimate
   // Input to the constructor are the dependend variable vector y[0..n-1]
   // and its derivate at the starting value of the independent variable x.
   // Also input are the relative tolerances, atol and rtol and dense, which is
   // true if dense output is required.
   StepperBase(Array<RR,1> &yy, Array<RR,1> &dydxx, RR &xx,
   const RR atoll, const RR rtoll, bool dens);
};

#endif
