/*===========================================================================
  30.03.2012
  desc: structure for output from ODE solver such as odeint 
  rev: 0.1
  autor: Alexander Fischer
  ===========================================================================
  dependencies:
    - Stepper.h  
    - blitz/array.h
  included in:
    - Odeint.h
  ===========================================================================*/
#ifndef _OUTPUT_INCLUDED__
#define _OUTPUT_INCLUDED__

#include <blitz/array.h> 

using namespace blitz;
template <class Stepper>
class Output {
   public:
   int kmax; // current capacity of storraga arrays
   int nvar; // dimension of right-side
   int nsave; // number of intervals to save for dense output
   bool dense; // true for dense output
   int count;  // number of values actually saved
   double x1, x2, xout, dxout;
   Array<double,1> xsave; // Results stored in the vector xsave[0..count-1] 
   Array<double,2> ysave; // and the matrix ysave[0..nvar-1][0..count-1]
   Output(); // default constructor, no output 
   // Constructor for dense output at nsave equally spaced intervalls
   // If nsave <= 0 output is saved only at the actual integration steps
   Output(const int nsavee);
   // Called by Odeint constructor, which passes neqn (#of eqn),
   // xlo (startingpoint of integration) and xhi (ending point)
   void init(const int neqn, const double xlo, const double xhi);
   // Resizes storage arrays by a factor of two, keeping data
   void resize(); 
   // Invokes dense_out function of stepper routine to produce output at
   // xout. Normally called by out. Assumes that xout is between xold and
   // xold+h, where the stepper must keep track of xold, the location of
   // the previus step and x=xold+h, the current step
   void save_dense(Stepper &s, const double xout, const double h);
   void save(const double x, Array<double,1> &y); // saves current x and y
   // Typically called by Odeint to produce dense output. Input variables are
   // nstep (current step number), x, y, stepper s and stepsize h.
   // A call with nstp=-1 saves the initial values. The routine checks wether
   // x is greater than the desired output point xout. If so, it calls save_dense.
   void out(const int nstp, const double x, Array<double,1> &y, Stepper &s, 
    const double h); 
};
   
#endif
