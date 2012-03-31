/*===========================================================================
  30.03.2012
  desc: Right-side of  Van der Pol's equation 
  rev: 1.0
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
  ===========================================================================*/
#ifndef _RHS_VAN_INCLUDED__
#define _RHS_VAN_INCLUDED__

#include <blitz/array.h>

using namespace blitz;

class RHS_van {
   public:
   double eps;
   RHS_van(double epss);
   void operator() (const double x, Array<double,1> &y, Array<double,1> &dydx) {
      dydx(0) = y(1);
      dydx(1) = ((1.0-y(0)*y(0))*y(1)-y(0))/eps;
   }
};

#endif
