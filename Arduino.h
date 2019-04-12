#ifndef Arduino_h
#define Arduino_h

#include "mbed.h"

#if defined(__arm__) && !defined(PROGMEM)
#define PROGMEM
#define PSTR(STR) STR
#endif

#include "Print.h"
#include "wiring.h"
#include "pins_arduino.h"

#endif
        
