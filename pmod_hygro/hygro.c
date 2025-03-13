#include <wiringPiI2C.h> 
#include <wiringPi.h> 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  
    wiringPiSetup();
    unsigned char data[2] = {0};

    int hSPI = wiringPiI2CSetup();

}