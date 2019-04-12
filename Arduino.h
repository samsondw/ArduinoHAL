#ifndef Arduino_h
#define Arduino_h

#include "mbed.h"

#if defined(__arm__) && !defined(PROGMEM)
#define PROGMEM
#define PSTR(STR) STR
#endif

#ifdef __AVR__
  #include <avr/pgmspace.h>
#elif defined(ESP8266) || defined(ESP32)
  #include <pgmspace.h>
#endif

#include "wiring.h"

#endif
        
