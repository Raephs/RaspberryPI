/**
Date: 1.1.21
Auor: Raphael Emanuel
DESC: three blinking lights
VER: 1.0.0
**/

#include <stdio.h>
#include <pigpio.h>


void main(){

if (gpioInitialise() < 0){
 printf("pigpio initialization failed\n");
 return;
}

// GPIO initialization
 gpioSetMode(14, PI_OUTPUT);
 gpioSetMode(15, PI_OUTPUT);
 gpioSetMode(16, PI_OUTPUT);
 gpioSetMode(20, PI_OUTPUT);

// Initiate Vars
int A = 0;
int E = 16;

while (1){
        while(A <= E){

        if(A == 5){
        gpioWrite(14, 1);
}
        else if(A ==  10){
        gpioWrite(15,1);
}
        else if(A == 15){
         gpioWrite(16, 1);
}
A++;
time_sleep(1.0);

if (A == 16){

        gpioWrite(14, 0);
        gpioWrite(15, 0);
        gpioWrite(16, 0);
        gpioWrite(20, 1);
        time_sleep(0.5);
        gpioWrite(20, 0);
        A = 0;
}
 }}
 gpioTerminate();
}

