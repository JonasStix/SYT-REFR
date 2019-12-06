#include <wiringPi.h>
#include <stdio.h>

#define LedPin1 0
#define LedPin2 1

int main(void) {
    if(wiringPiSetup() == -1) { //when initialize wiringPi failed, print message to screen
        printf("setup wiringPi failed !\n");
        return -1;
    }

    pinMode(LedPin, OUTPUT);
    while(1) {
        digitalWrite(LedPin1, LOW);   //led on
        digitalWrite(LedPin2,HIGH);
        printf("led 1 on\n");
        delay(1000);			     // wait 1 sec
        digitalWrite(LedPin1, HIGH);  //led off
        digitalWrite(LedPin2, LOW);
        printf("led 2 on\n");
        delay(1000);                 // wait 1 sec
    }
    return 0;
}