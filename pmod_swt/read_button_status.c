#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <wiringPi.h>

int main(int argc,char *argv[]){


    // for(int i = 0; i < argc; i++){

    //     printf("%s\n",argv[i]);

    // }
    if (argc < 2) {
        fprintf(stderr, "Erreur : Veuillez fournir un argument.\n");
        return EXIT_FAILURE;
    }
    wiringPiSetupGpio();
    if(strcmp(argv[1], "JA") == 0){ 
    
 
        int pins[] = {8, 10, 9, 11, 19, 21, 20, 18};  
        int values[8];  
        
        for (int i = 0; i < 8; i++) {  
            pinMode(pins[i], INPUT);  
            pullUpDnControl(pins[i], PUD_DOWN);  
            values[i] = digitalRead(pins[i]);  
        }
        
        for(int i = 0; i < 8; i++){

            printf("%d", values[i]);

        }


        printf("\nJA read \n");
    }
    else if(strcmp(argv[1], "JB") == 0){

         
        int pins[] = {7, 10, 9, 11, 26, 13, 3, 2};  
        int values[8];  
        
        for (int i = 0; i < 8; i++) {  
            pinMode(pins[i], INPUT);  
            pullUpDnControl(pins[i], PUD_DOWN);  
            values[i] = digitalRead(pins[i]);  
        }
        
        for(int i = 0; i < 8; i++){

            printf("%d", values[i]);

        }



        printf("\nJB read\n");
    }
    else if(strcmp(argv[1], "JC") == 0){

 
        int pins[] = {16, 14, 15, 17, 4, 12, 5, 6};  
        int values[8];  
        
        for (int i = 0; i < 8; i++) {  
            pinMode(pins[i], INPUT);  
            pullUpDnControl(pins[i], PUD_DOWN);  
            values[i] = digitalRead(pins[i]);  
        }
        
        for(int i = 0; i < 8; i++){

            printf("%d", values[i]);

        }


        printf("\n JC read\n");
    }
    else{
        printf("JA JB or JC expected\n");
        printf(argv[1]);
        printf(" found\n");
    }		
	

	return 0;

}