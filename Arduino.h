#ifndef Arduino_h
#define Arduino_h

#include "mbed.h"

#if defined(__arm__) && !defined(PROGMEM)
#define PROGMEM
#define PSTR(STR) STR
#endif

#define ARDUINO 101

#include "wiring.h"

#endif
        
