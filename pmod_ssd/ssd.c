#include <wiringPi.h> 
#include <stdio.h>


void one(int *pin, int numPin){

    for (int i = 0; i < numPin; i++) {
        if((pin[i] != 13) && (pin[i] != 3)){
          digitalWrite(pin[i], LOW);
        }
        else {
          digitalWrite(pin[i], HIGH);
        }
      }
}

void two(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 26) && (pin[i] != 13)&& (pin[i] != 2)
      && (pin[i] != 19)&& (pin[i] != 20)){
        digitalWrite(pin[i], LOW);
      }
      else {
        digitalWrite(pin[i], HIGH);
      }
    }
}

void three(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 26) && (pin[i] != 13) && (pin[i] != 3)
        && (pin[i] != 2)&& (pin[i] != 20)){
        digitalWrite(pin[i], LOW);
      }
      else {
        digitalWrite(pin[i], HIGH);
      }
    }
}

void four(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 13) && (pin[i] != 3) && (pin[i] != 21)
      && (pin[i] != 20)){
        digitalWrite(pin[i], LOW);
      }
      else {
        digitalWrite(pin[i], HIGH);
      }
    }
}

void five(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 26) && (pin[i] != 3) && (pin[i] != 21)
      && (pin[i] != 3)&& (pin[i] != 2)&& (pin[i] != 20)){
        digitalWrite(pin[i], LOW);
      }
      else {
        digitalWrite(pin[i], HIGH);
      }
    }
}


void six(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 13) && (pin[i] != 18)){
        digitalWrite(pin[i], HIGH);
      }
      else {
        digitalWrite(pin[i], LOW);
      }
    }
}
void seven(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 13) && (pin[i] != 3)&&(pin[i] != 26)){
        digitalWrite(pin[i], LOW);
      }
      else {
        digitalWrite(pin[i], HIGH);
      }
    }
}
void eight(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 18)){
        digitalWrite(pin[i], HIGH);
      }
      else {
        digitalWrite(pin[i], LOW);
      }
    }
}
void nine(int *pin, int numPin){

  for (int i = 0; i < numPin; i++) {
      if((pin[i] != 19) && (pin[i] != 18)){
        digitalWrite(pin[i], HIGH);
      }
      else {
        digitalWrite(pin[i], LOW);
      }
    }
}


void num_to_display(int number){

  int tenth = number/10;
  int unit = number-tenth*10;

  printf("%d %d", tenth, unit);


}

int main(void)
{
  
  wiringPiSetupGpio();
  int pins[] = {19,21,20,18,26,13,3,2};  //e,f,g,change,a,b,c,d
  int numPins = 8;

  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }

  one(pins, numPins);
  delay(500);
  two(pins, numPins);
  delay(500);
  three(pins, numPins);
  delay(500);
  four(pins, numPins);
  delay(500);
  five(pins, numPins);
  delay(500);
  six(pins, numPins);
  delay(500);
  seven(pins, numPins);
  delay(500);
  eight(pins, numPins);
  delay(500);
  nine(pins, numPins);


  for (int i = 0; i < 5000; i++) {


    seven(pins, numPins);
    digitalWrite(18, HIGH);
    delay(1);
    three(pins, numPins);
    digitalWrite(18, LOW);
    delay(1);
    

  }

  num_to_display(17);

  }
