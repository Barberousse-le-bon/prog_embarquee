#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void set_gpio(int pin, int value) {
    char command[50];
    sprintf(command, "pinctrl set %d op %s", pin, value ? "dh" : "dl");
    system(command);
}


int main(int argc,char *argv[]){
    
    __uint8_t count = 0;

    // for(int i = 0; i < argc; i++){

    //     printf("%s\n",argv[i]);

    // }

    if(strcmp(argv[1], "JC") == 0){
        system("raspi-gpio set 16,17,18,19,20,21,22,23 op dl");
        int gpio_pins[] = {16, 17, 18, 19, 20, 21, 22, 23};  // Liste des GPIO (8 bits)
        int num_pins = sizeof(gpio_pins) / sizeof(gpio_pins[0]);
        while(1){



        for (int i = 0; i < num_pins; i++) {
            set_gpio(gpio_pins[i], (count >> i) & 1);
        }



            sleep(1);
            count++;
        }

    }
    else{
        printf("JA JB or JC expected\n");
        printf(argv[1]);
        printf(" found\n");
    }		

return 0;

}

