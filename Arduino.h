#ifndef Arduino_h
#define Arduino_h

#include "mbed.h"

#define HIGH 0x1
#define LOW  0x0

#define INPUT 0x0
#define OUTPUT 0x1

//#define true 0x1
//#define false 0x0


void pinMode(int, int);
void digitalWrite(int, int);
int digitalRead(int);

#endif
        