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

#include "clpm6.h"
#include "Arduino.h"

//========Os metodos são declarados aqui.
	clp::clp(){};
void clp::sety (int y) {
  digitalWrite (y, HIGH); //Funcao que seta uma saida.
}
void  clp::rsty (int y) {
  digitalWrite (y, LOW); //Funcao que reseta uma saida.
}
void  clp::togy (int y) {
  if (digitalRead(y)) digitalWrite (y, LOW);  //Funcao que inverte o status de uma saida.
  else  digitalWrite (y, HIGH);
}

