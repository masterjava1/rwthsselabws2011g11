#ifndef _NTL_EXT_INCLUDED__
#define _NTL_EXT_INCLUDED__

#include <NTL/RR.h>

using namespace NTL;

namespace NTL{

RR max(RR &a, RR &b);

RR max(double &a, RR &b);

RR max(RR &a, double &b);

RR max(RR &a, double b);

RR min(RR &a, RR &b);

RR min(double &a, RR &b);

RR min(RR &a, double &b);

RR min(RR &a, double b);

}

#endif
