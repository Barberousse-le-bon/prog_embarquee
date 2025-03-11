#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){


    // for(int i = 0; i < argc; i++){

    //     printf("%s\n",argv[i]);

    // }
    if(strcmp(argv[1], "JA") == 0){
        system("gpioget gpiochip0 08");
        system("gpioget gpiochip0 10");
        system("gpioget gpiochip0 09");
        system("gpioget gpiochip0 11");
        system("gpioget gpiochip0 19");
        system("gpioget gpiochip0 21");
        system("gpioget gpiochip0 20");
        system("gpioget gpiochip0 18");
        printf("JA read \n");
    }
    else if(strcmp(argv[1], "JB") == 0){
        system("gpioget gpiochip0 07");
        system("gpioget gpiochip0 10");
        system("gpioget gpiochip0 09");
        system("gpioget gpiochip0 11");
        system("gpioget gpiochip0 26");
        system("gpioget gpiochip0 13");
        system("gpioget gpiochip0 03");
        system("gpioget gpiochip0 02");
        printf("JB read\n");
    }
    else if(strcmp(argv[1], "JC") == 0){
        system("gpioget gpiochip0 16");
        system("gpioget gpiochip0 14");
        system("gpioget gpiochip0 15");
        system("gpioget gpiochip0 17");
        system("gpioget gpiochip0 04");
        system("gpioget gpiochip0 12");
        system("gpioget gpiochip0 05");
        system("gpioget gpiochip0 06");
        printf("JC read\n");
    }
    else{
        printf("JA JB or JC expected\n");
        printf(argv[1]);
        printf(" found\n");
    }		
	

	return 0;

}