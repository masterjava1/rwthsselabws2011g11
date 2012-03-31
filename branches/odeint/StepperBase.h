/*===========================================================================
  30.03.2012
  desc: base class for all ODE algorithms 
  rev: 0.1
  autor: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
  ===========================================================================*/
#ifndef _STEPPERBASE_INCLUDED__
#define _STEPPERBASE_INCLUDED__

#include <cmath>
#include <blitz/array.h>

using namespace blitz;

class StepperBase {
   public:
   double &x;
   double xold;  // used for dense output
   Array<double,1> &y,&dydx;
   double atol, rtol;
   bool dense;
   double hdid;  // actual steppsize accomplished by the step routine
   double hnext;  // steppsize predicted by the controller for the next step
   double EPS;
   int n, neqn;
   Array<double,1> yout, yerr; // new value for y and error estimate
   // Input to the constructor are the dependend variable vector y[0..n-1]
   // and its derivate at the starting value of the independent variable x.
   // Also input are the relative tolerances, atol and rtol and dense, which is
   // true if dense output is required.
   StepperBase(Array<double,1> &yy, Array<double,1> &dydxx, double &xx,
   const double atoll, const double rtoll, bool dens);
};

#endif
