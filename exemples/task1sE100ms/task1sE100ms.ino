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
  clp.runTasks();
    
  if(clp.task100ms){
    clp.togy (q0);
    Serial.print ("task de 100ms contagem em: ");
    Serial.println (clp.contador);
  }
  if(clp.task1s){
    clp.togy (q1);
    Serial.print ("task de 1s contagem em: ");
    Serial.println (clp.contador);
    
  }

}
