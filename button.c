**
Date: 3.1.21
Auor: Raphael Emanuel
DESC: Button pressed
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
    gpioSetMode(4, PI_INPUT);
    gpioSetPullUpDown(4, PI_PUD_UP);

    // Initiate Vars
    int ENT;

    // Execution Code goes in here
    while (1){

        // read Value from GPIO Header 4 and store in ENT
        ENT = gpioRead(4);

        if (ENT == 1){
            printf("Button not Pressed\n");
        }
        else
        {
            printf("Button pressed\n");
        }   
    }

 gpioTerminate();
}