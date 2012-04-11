#include "StepperBase.h"

StepperBase::StepperBase(Array<RR,1> &yy, Array<RR,1> &dydxx, 
RR &xx, const RR atoll, const RR rtoll, bool dens)
: x(xx), y(yy), dydx(dydxx), atol(atoll), rtol(rtoll), dense(dens),
  n(y.size()), neqn(n), yout(n), yerr(n){
}
