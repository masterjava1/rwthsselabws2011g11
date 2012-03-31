#include "Output.h"

template <class Stepper>
Output<Stepper>::Output() : kmax(-1), dense(false), count(0) {}

template <class Stepper>
Output<Stepper>::Output(const int nsavee) : kmax(500), nsave(nsavee), count(0){
   xsave.resize(shape(kmax));
   dense = nsave > 0 ? true :false;
}


template <class Stepper>
void Output<Stepper>::init(const int neqn, const double xlo, const double xhi) {
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

template <class Stepper>
void Output<Stepper>::resize() {
   int kold=kmax;
   kmax *= 2;
   Array<double,1> tempvec(xsave);
   xsave.resize(shape(kmax));
   xsave=tempvec;
   Array<double,2> tempmat(ysave);
   ysave.resize(shape(nvar,kmax));
}

template <class Stepper>
void Output<Stepper>::save_dense(Stepper &s, const double xout, const double h) {
   if (count == kmax) resize();
   for (int i=0;i<nvar;i++) {
      ysave(i,count)=s.dense_out(i,xout,h);
   }
   xsave(count++)=xout;
}

template <class Stepper>
void Output<Stepper>::save(const double x, Array<double,1> &y) {
   if (kmax <=0) return;
   if (count == kmax) resize();
   for (int i=0;i<nvar;i++) {
      ysave(i,count)=y(i);
   }
   xsave(count++)=x;
}

template <class Stepper>
void Output<Stepper>::out(const int nstp, const double x, Array<double,1> &y, Stepper &s, 
const double h) {
   if (!dense) {
      throw("dense output not set in output!");
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
