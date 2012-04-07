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

// DEBUG
#include <iostream>
#include <cmath>
#include <blitz/array.h>

using namespace blitz;

class RHS_gyro {
   public:
   double g, R, k, m, a, I, I3;
   RHS_gyro(double gg, double RR, double kk, double mm, double aa):
   g(gg),R(RR),k(kk),m(mm),a(aa),I(0.4*m*R*R),I3(I) {}
   void operator() (const double x, Array<double,1> &y, Array<double,1> &dydx) {
      
      double my = y(0);
      double lambda = y(1);
      double ny = y(2);
      double xi = y(3);
      double omikron = y(4);
      double theta = y(5);
      double phi = y(6);
      double psi = y(7);
      double xc = y(8);
      double yc = y(9);

      //dydx(1)
      dydx(0) = (-(I3-I)*pow(lambda,2)*sin(theta)*cos(theta)-I3*lambda*
      sin(theta)*ny+(g+a*pow(my,2)*cos(theta))*(-m*a*sin(theta)-k*
      m*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
      (R-a*cos(theta))*my)))/(I+m*pow(a,2)*pow(sin(theta),2)+k*m*a*
      sin(theta)*(R-a*cos(theta))*(-xi*sin(phi)+omikron*cos(phi)+
      (R-a*cos(theta))*my));

      //dydx(2)
      dydx(1) = (-(2*I-I3)*lambda*my*cos(theta)+I3*my*ny-k*m*
      (g+a*cos(theta)*pow(my,2)+a*sin(theta)*dydx(0))*
      (a-R*cos(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*
      R)*sin(theta)))/(I*sin(theta));

      //dydx(3)
      dydx(2) = (-I3*(dydx(1)*cos(theta)-lambda*my*sin(theta))-k*m*
      (g+a*cos(theta)*pow(my,2)+a*sin(theta)*dydx(0))*
      (R*sin(theta))*(xi*cos(phi)+omikron*sin(phi)+(a*lambda+ny*R)*
      sin(theta)))/I3;

      //dydx(4)
      dydx(3) = (-k*(g+a*cos(theta)*(my,2)+a*sin(theta)*dydx(0))*
      (xi+(a*lambda+ny*R)*sin(theta)*cos(phi)+(a*cos(theta)-R)*
      sin(phi)*my));

      //dydx(5)
      dydx(4) = (-k*(g+a*cos(theta)*pow(my,2)+a*sin(theta)*dydx(0))*
      (omikron+(a*lambda+ny*R)*sin(theta)*sin(phi)+(R-a*cos(theta))*
      cos(phi)*my));

      //dydx(6)
      dydx(5) = my;
      
      //dydx(7)
      dydx(6) = lambda;

      //dydx(7)
      dydx(7) = ny;

      //dydx(8)
      dydx(8) = xi;

      //dydx(10)
      dydx(9) = omikron;  
   }
   
   // Preserved quantity
   double presQ(Array<double,1> &y){
      double my = y(0);
      double lambda = y(1);
      double ny = y(2);
      double xi = y(3);
      double omikron = y(4);
      double theta = y(5);
      double phi = y(6);
      double psi = y(7);
      double xc = y(8);
      double yc = y(9);
      return I*R*lambda*pow(sin(theta),2)+I3*(R*cos(theta)-a)*(lambda*cos(theta)
      +ny);
   }
};

#endif
