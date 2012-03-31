/*===========================================================================
  30.03.2012
  desc: Dormant-Prince 5 method 
  rev: 0.1
  autor: Alexander Fischer
  ===========================================================================
  dependencies:
    - blitz/array.h 
  ===========================================================================*/
#ifndef _STEPPERDOPR5_INCLUDED__
#define _STEPPERDOPR5_INCLUDED__

#include <cmath>
#include <blitz/array.h>
#include "StepperBase.h"

using namespace blitz;

template <class D>
class StepperDopr5 : public StepperBase {
        public:
	typedef D Dtype;
	Array<double,1> k2,k3,k4,k5,k6;
	Array<double,1> rcont1,rcont2,rcont3,rcont4,rcont5;
	Array<double,1> dydxnew;
	StepperDopr5(Array<double,1> &yy, Array<double,1> &dydxx, double &xx,
		const double atoll, const double rtoll, bool dens);
	void step(const double htry,D &derivs);
	void dy(const double h,D &derivs);
	void prepare_dense(const double h,D &derivs);
	double dense_out(const int i, const double x, const double h);
	double error();
	struct Controller {
		double hnext,errold;
		bool reject;
		Controller();
		bool success(const double err, double &h);
	};
	Controller con;
};

#endif
