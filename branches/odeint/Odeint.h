/*===========================================================================
  30.03.2012
  desc: high-level interface for ODE solvers with adaptive steppsize controll
  rev: 0.1
  autor: Alexander Fischer
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

template<class Stepper>
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

#endif
