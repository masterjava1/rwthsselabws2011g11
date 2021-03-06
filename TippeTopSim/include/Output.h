/**===========================================================================
  30.03.2012
  desc: structure for output from ODE solver such as odeint 
  rev: 1.0
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h
    - NTL/RR.h
    - RuntimeException.h 
  called in:
    - main.cpp //NF
  ===========================================================================*/
#ifndef _OUTPUT_INCLUDED__
#define _OUTPUT_INCLUDED__

#include <blitz/array.h> 
#include <NTL/RR.h>
#include "RuntimeException.h"

using namespace blitz;
using namespace NTL;

template <typename Stepper>
class Output {
   public:
   int kmax; // current capacity of storraga arrays
   int nvar; // dimension of right-side
   int nsave; // number of intervals to save for dense output
   bool dense; // true for dense output
   int count;  // number of values actually saved
   RR x1, x2, xout, dxout;
   Array<RR,1> xsave; // Results stored in the vector xsave[0..count-1] 
   Array<RR,2> ysave; // and the matrix ysave[0..nvar-1][0..count-1]
   Output(); // default constructor, no output 
   // Constructor for dense output at nsave equally spaced intervalls
   // If nsave <= 0 output is saved only at the actual integration steps
   Output(const int nsavee);
   // Called by Odeint constructor, which passes neqn (#of eqn),
   // xlo (startingpoint of integration) and xhi (ending point)
   void init(const int neqn, const RR xlo, const RR xhi);
   // Resizes storage arrays by a factor of two, keeping data
   void resize();
   // Clear xsave and ysave
   void clear(); 
   // Invokes dense_out function of stepper routine to produce output at
   // xout. Normally called by out. Assumes that xout is between xold and
   // xold+h, where the stepper must keep track of xold, the location of
   // the previus step and x=xold+h, the current step
   void save_dense(Stepper &s, const RR xout, const RR h);
   void save(const RR x, Array<RR,1> &y); // saves current x and y
   // Typically called by Odeint to produce dense output. Input variables are
   // nstep (current step number), x, y, stepper s and stepsize h.
   // A call with nstp=-1 saves the initial values. The routine checks wether
   // x is greater than the desired output point xout. If so, it calls save_dense.
   void out(const int nstp, const RR x, Array<RR,1> &y, Stepper &s, 
    const RR h); 

   void exportfile(const char* filename);
   void importfile(const char* filename);
};
   
template <typename Stepper>
Output<Stepper>::Output() : kmax(-1), dense(false), count(0) {}

template <typename Stepper>
Output<Stepper>::Output(const int nsavee) : kmax(500), nsave(nsavee), count(0){
   xsave.resize(shape(kmax));
   dense = nsave > 0 ? true :false;
}

template <typename Stepper>
void Output<Stepper>::clear(){
   /*xsave.resize(shape(500));
   ysave.resize(shape(nvar,500));*/
   count = 0;
   kmax=500;
   dense = nsave > 0 ? true :false;
}

template <typename Stepper>
void Output<Stepper>::init(const int neqn, const RR xlo, const RR xhi) {
   nvar = neqn;
   if (kmax == -1) return;
   ysave.resize(shape(nvar,kmax));
   if (dense) {
      x1=xlo;
      x2=xhi;
      xout=x1;
      dxout=(x2-x1)/nsave;
   }
}

template <typename Stepper>
void Output<Stepper>::resize() {
   int kold=kmax;
   int i;
   kmax *= 2;
   Array<RR,1> tempvec(xsave);
   xsave.resize(shape(kmax));
   xsave(Range(0,kold-1)) =tempvec;
   Array<RR,2> tempmat(ysave);
   ysave.resize(shape(nvar,kmax));
   for (i=0;i<nvar;i++) {
      ysave(i,Range(0,kold-1)) = tempmat(i,Range(0,kold-1));
   }
}

template <typename Stepper>
void Output<Stepper>::save_dense(Stepper &s, const RR xout, const RR h) {
   if (count == kmax) resize();
   for (int i=0;i<nvar;i++) {
      ysave(i,count)=s.dense_out(i,xout,h);
   }
   xsave(count++)=xout;
}

template <typename Stepper>
void Output<Stepper>::save(const RR x, Array<RR,1> &y) {
   if (kmax <=0) return;
   if (count == kmax) resize();
   for (int i=0;i<nvar;i++) {
      ysave(i,count)=y(i);
   }
   xsave(count++)=x;
}

template <typename Stepper>
void Output<Stepper>::out(const int nstp, const RR x, Array<RR,1> &y, Stepper &s, 
const RR h) {
   if (!dense) {
      throw(RuntimeException("Dense output not set in output! \n"
      "Please open a bugreport at https://code.google.com/p/rwthsselabws2011g11/",0));
   }
   if (nstp == -1) {
      save(x,y);
      xout += dxout;
   } else {
      while ((x-xout)*(x2-x1) > 0.0) {
         save_dense(s,xout,h);
         xout += dxout;
      }
   }
}

template <typename Stepper>
void Output<Stepper>::exportfile(const char* filename)
  {
	ofstream ofs(filename);
    	if (ofs.bad())
    	{
       	   throw(RuntimeException("Could not write new parameterfile!",1));	
    	}
	
	ofs << xsave << endl << ysave << endl; 
	
   }

template <typename Stepper>
void Output<Stepper>::importfile(const char* filename)
  {
        // validate file
	ifstream ifs(filename);
    	if (ifs.bad())
    	{
       	   throw(RuntimeException("Could not open parameterfile!",1));	
    	}
	ifs >> xsave >> ysave; 
   }

#endif
