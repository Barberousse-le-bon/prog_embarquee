#include <unistd.h>
#include <stdlib.h>

int main(char *argv[], int argc){



    system("gpioget gpiochip0 08");
    system("gpioget gpiochip0 10");
    system("gpioget gpiochip0 09");
    system("gpioget gpiochip0 11");
    system("gpioget gpiochip0 19");
    system("gpioget gpiochip0 21");
    system("gpioget gpiochip0 20");
    system("gpioget gpiochip0 18");
		
	

	return 0;

}