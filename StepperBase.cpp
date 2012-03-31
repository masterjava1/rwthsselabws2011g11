#include "StepperBase.h"

StepperBase::StepperBase(Array<double,1> &yy, Array<double,1> &dydxx, double &xx,
const double atoll, const double rtoll, bool dens)
: x(xx), y(yy), dydx(dydxx), atol(atoll), rtol(rtoll), dense(dens),
  n(y.size()), neqn(n), yout(n), yerr(n){}
