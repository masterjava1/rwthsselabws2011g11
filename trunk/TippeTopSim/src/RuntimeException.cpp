#include "RuntimeException.h"

RuntimeException::RuntimeException(const char* errormsgg, int windowIdd)
 : errormsg(errormsgg), windowId(windowIdd) {}

const char* RuntimeException::what() {
   return errormsg;
}

int RuntimeException::getWindowId() {
   return windowId;
}
