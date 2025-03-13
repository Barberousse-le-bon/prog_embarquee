#include <wiringPiSPI.h> 
#include <wiringPi.h> 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
  
    wiringPiSetup();
    int spiChannel = 0;
    int spiSpeed = 25000000; // en Hz
    unsigned char data[2] = {0};

    int hSPI = wiringPiSPISetup(spiChannel, spiSpeed);

    if(hSPI < 0){
        fprintf(stderr, "Erreur : Erreur lors de l'initialisation du SPI.\n");
        return EXIT_FAILURE;
    }
    else {
        printf("SPI initialisé.\n");
    }


    wiringPiSPIDataRW(spiChannel,data,2);

    int brightness = (data[0]<<8) + data[1];
    brightness >>= 4;

    printf("%d ",brightness);


    close(hSPI);

    return 0;

}