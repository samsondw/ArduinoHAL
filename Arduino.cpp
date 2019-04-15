#include "Arduino.h"


void digitalWrite(DigitalInOut pin, int value) 
{
    //pin.output();
    pin = value;
}

void pinMode(DigitalInOut pin, int mode) 
{
    if(mode == INPUT)
    {
        pin.input();
    }
    if(mode == OUTPUT)
    {
        pin.output();
    }    
}

int digitalRead(DigitalInOut pin)
{
    //pin.input();
    return pin.read();
}
