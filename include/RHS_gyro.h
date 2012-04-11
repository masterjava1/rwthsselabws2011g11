/*===========================================================================
  04.04.2012
  desc: Right-side of the "TippeTop" ODE system
  rev: 1.0
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
  ===========================================================================*/
#ifndef _RHS_GYRO_INCLUDED__
#define _RHS_GYRO_INCLUDED__

#define SQR(x) ((x)*(x))

#include <blitz/array.h>
#include <NTL/RR.h>

using namespace blitz;
using namespace NTL;

class RHS_gyro {
   public:
   RR g, R, k, m, a, I, I3;
   RHS_gyro(RR gg, RR RRR, RR kk, RR mm, RR aa):
   g(gg),R(RRR),k(kk),m(mm),a(aa) {
      I = 0.4*m*R*R;
      I3 = I;
   }
   void operator() (const RR x, Array<RR,1> &y, Array<RR,1> &dydx) {
      
      RR my = y(0);
      RR lambda = y(1);
      RR ny = y(2);
      RR xi = y(3);
      RR omikron = y(4);
      RR theta = y(5);
      RR phi = y(6);
      RR psi = y(7);
      RR xc = y(8);
      RR yc = y(9);

      //dydx(0)
      dydx(0) = (-(I3-I)*SQR(lambda)*sin(theta)*cos(theta)-I3*lambda*
      sin(theta)*ny+(g+a*SQR(my)*cos(theta))*(-m*a*sin(theta)-k*
      m*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
      (R-a*cos(theta))*my)))/(I+m*SQR(a)*SQR(sin(theta))+k*m*a*
      sin(theta)*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
      (R-a*cos(theta))*my));

      //dydx(1)
      dydx(1) = (-(2*I-I3)*lambda*my*cos(theta)+I3*my*ny-k*m*
      (g+a*cos(theta)*SQR(my)+a*sin(theta)*dydx(0))*
      (a-R*cos(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*
      R)*sin(theta)))/(I*sin(theta));

      //dydx(2)
      dydx(2) = (-I3*(dydx(1)*cos(theta)-lambda*my*sin(theta))-k*m*
      (g+a*cos(theta)*SQR(my)+a*sin(theta)*dydx(0))*
      (R*sin(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*R)*
      sin(theta)))/I3;

      //dydx(3)
      dydx(3) = (-k*(g+a*cos(theta)*SQR(my)+a*sin(theta)*dydx(0))*
      (xi+(a*lambda+ny*R)*sin(theta)*cos(phi)+(a*cos(theta)-R)*
      sin(phi)*my));

      //dydx(4)
      dydx(4) = (-k*(g+a*cos(theta)*SQR(my)+a*sin(theta)*dydx(0))*
      (omikron+(a*lambda+ny*R)*sin(theta)*sin(phi)+(R-a*cos(theta))*
      cos(phi)*my));

      //dydx(5)
      dydx(5) = my;
      
      //dydx(6)
      dydx(6) = lambda;

      //dydx(7)
      dydx(7) = ny;

      //dydx(8)
      dydx(8) = xi;

      //dydx(9)
      dydx(9) = omikron;  
   }
   
   // Preserved quantity
   RR presQ(Array<RR,1> &y){
      RR my = y(0);
      RR lambda = y(1);
      RR ny = y(2);
      RR xi = y(3);
      RR omikron = y(4);
      RR theta = y(5);
      RR phi = y(6);
      RR psi = y(7);
      RR xc = y(8);
      RR yc = y(9);
      return I*R*lambda*SQR(sin(theta))+I3*(R*cos(theta)-a)*(lambda*cos(theta)
      +ny);
   }
};

#endif
