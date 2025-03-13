#include <wiringPi.h> 


int main(void)
{
  
  wiringPiSetupGpio();
  int pins[] = {8, 10, 9, 11, 19, 21, 20, 18};  
  int numPins = 8;

  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
}

__uint8_t count = 0;
  while (1) {


    for (int i = 0; i < numPins; i++) {
                digitalWrite(pins[i], (count >> i) & 1); // Met à jour les LED
    }
    count++;
    delay(200); 
}
}