/*
    clpm6.h
  Uma biblioteca para usuários familiarizados com programação de CLP (controlador lógico programável), 
  implementando funções práticas como:
  set, reset, borda de subida, borda de descida, task's (ou tarefas) a serem executadas uma unica vez a cada 100ms ou 1segundo.

  Desenvolvida por Ricardo Menezes, com apoio de Lindomar Assunção, com o objetivo, de suprir necessidades de projetos pessoais.
  Direitos reservados a M6 Automação,
  https://www.m6automacao.com.br
  versão 1 em junho de 2020. 

  Desenvolvida exclusivamente para uso pessoal, não restringimos o uso por terceiros, todavia, 
  não nos responsabilizamos por quaisquer consequencias em decorrencia do uso desta biblioteca.

*/

#ifndef clpm6
#define clpm6
#include <Arduino.h>

class clp {
  public:
    void sety (int y);
    void rsty (int y);
    void togy (int y);
    void runTasks (void);

	int contador;
	//========variaveis para temporizador
	boolean task100ms = 0;
	boolean task1s = 0;
	unsigned long previousMillis1 = 2000;        // will store last time LED was updated // Generally, you should use "unsigned long" for variables that hold time // The value will quickly become too large for an int to store
	const long interval1 = 1000;           // interval at which to blink (milliseconds) >=20


  private:
	void time();
};
#endif
