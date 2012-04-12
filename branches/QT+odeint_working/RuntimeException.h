/**===========================================================================
  10.04.2012
  desc: Default exception class 
  rev: 1.0
  author: Alexander Fischer
  ===========================================================================
  dependencies:
    - std::exception  
  called in:
    - main.cpp //NF
  ===========================================================================*/
#ifndef _RUNTIMEEXCEPTION_INCLUDED__
#define _RUNTIMEEXCEPTION_INCLUDED__

#include <exception>

using namespace std;

class RuntimeException : public exception {
   private:
   const char* errormsg;
   int windowId;   

   public:
   RuntimeException(const char* errormsgg, int windowIdd);
   const char* what();
   int getWindowId();
};

#endif
