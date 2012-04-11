#ifndef _NTL_EXT_INCLUDED__
#define _NTL_EXT_INCLUDED__

#include <NTL/RR.h>

using namespace NTL;

namespace NTL{

RR max(RR &a, RR &b){
   if(a>b) return a;
   return b;
}

RR max(double &a, RR &b){
   if(to_RR(a)>b) return to_RR(a);
   return b;
}

RR max(RR &a, double &b){
   if(a>to_RR(b)) return a;
   return to_RR(b);
}

RR max(RR &a, double b){
   if(a>to_RR(b)) return a;
   return to_RR(b);
}

RR min(RR &a, RR &b){
   if(a<b) return a;
   return b;
}

RR min(double &a, RR &b){
   if(to_RR(a)<b) return to_RR(a);
   return b;
}

RR min(RR &a, double &b){
   if(a<to_RR(b)) return a;
   return to_RR(b);
}

RR min(RR &a, double b){
   if(a<to_RR(b)) return a;
   return to_RR(b);
}

}

#endif
