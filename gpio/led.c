#include <unistd.h>
#include <stdlib.h>

int main(char *argv[], int argc){


	while(1){

		system("pinctrl set 8 op dh");
		sleep(1);
		system("pinctrl set 8 op dl");
		sleep(1);
	}

	return 0;

}
