#include <Arduino.h>
#include <clpm6.h>

#define input digitalRead //input para leitura do inverso da entrada digital se pulLdOWN -> Utilizar "!digitalRead"
//===========Saídas=========================
const int q0 = 9; //
const int q1 = 10; //
//===========Entradas=========================
const int i0 = 2; //

clp clp;

void setup() {
  Serial.begin(9600);
  //===========Saídas=========================
  pinMode(q0, OUTPUT);
  pinMode(q1, OUTPUT);

  //===========Entradas=========================
  pinMode(i0, INPUT);
}

void loop() {
    clp.togy (q0);
    Serial.println (input(q0));
    delay (1000);
    

}
