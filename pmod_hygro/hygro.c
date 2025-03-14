#include <wiringPiI2C.h> 
#include <wiringPi.h> 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(void)
{
  
    wiringPiSetup();
    unsigned char data[2] = {0};

    int fd = wiringPiI2CSetup(0x40);

    wiringPiI2CRawRead(fd,data,2);


    printf("%d\n", data[0]);
    printf("%d\n", data[1]);


    int temp = (((int)data[0]*165)>>8)-40;

    printf("%d\n", temp);

    float humid = ((int)data[0]*100)>>8;

    printf("%f", humid);
}