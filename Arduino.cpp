#include "Arduino.h"
#include "mbed.h"



//static DigitalInOut allpins[] = {LED1, LED2, LED3, LED4, NC, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30};
static DigitalInOut allpins[] = {LED1, LED2, LED3, LED4, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC, NC};


void digitalWrite(int pin, int value) 
{
    //allpins[pin].output();
    allpins[pin].write(value);
}

void pinMode(int pin, int mode) 
{
    if(mode == INPUT)
    {
        allpins[pin].input();
    }
    if(mode == OUTPUT)
    {
        allpins[pin].output();
    }    
   
}

int digitalRead(int pin)
{
    //allpins[pin].input();
    return allpins[pin].read();
}
