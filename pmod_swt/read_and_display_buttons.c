#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wiringPi.h>

int main(int argc,char *argv[]){


    wiringPiSetupGpio();  
    int button_pins[] = {16, 14, 15, 17, 4, 12, 5, 6};  
    int led_pins[] = {8, 10, 9, 11, 19, 21, 20, 18};   
    int values;  
    
    for (int i = 0; i < 8; i++) {  
        pinMode(button_pins[i], INPUT);  
        pullUpDnControl(button_pins[i], PUD_DOWN);  
 
        pinMode(led_pins[i], OUTPUT);
        digitalWrite(led_pins[i], LOW); 
    }
    while(1){
        for (int i = 0; i < 8; i++) {  
            values = digitalRead(button_pins[i]); 
            digitalWrite(led_pins[i], values); // Met à jour les LED 
        }
        delay(100);
    }







}