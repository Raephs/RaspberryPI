/**
Date: x.x.21
Auor: Raphael Emanuel
DESC: Something does Someething
VER: 1.0.0
**/

//Libarys
#include <stdio.h>
#include <pigpio.h>


void main(){


    // GPIO Initialisation
    if (gpioInitialise() < 0){
    printf("pigpio initialization failed\n");
    return;}

    // GPIO PINS
    gpioSetMode(14, PI_OUTPUT);
    gpioSetMode(15, PI_OUTPUT);
    gpioSetMode(16, PI_OUTPUT);
    gpioSetMode(20, PI_OUTPUT);

    // Initiate Vars
    int A = 0;
    int E = 16;

    // Execution Code goes in here
    while (1){

    gpioWrite(15,1);
    }
    
 gpioTerminate();
}

