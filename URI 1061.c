/*
PERGUNTA:

Pedrinho está organizando um evento em sua Universidade. 
O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. 
O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, 
seguido de um espaço e o dia do mês no qual o evento vai começar. 
Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. 
Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

RESPOSTA:
*/
#include <stdio.h>

int main()
{
	int dia1, hora1, minuto1, segundo1, tempo1;
	int dia2, hora2, minuto2, segundo2, tempo2;
	int diatotal, horatotal, minutototal, segundototal, tempototal;
	char dia, c;
	
	// tempo 1 
	
	scanf("%s %d", &dia, &dia1);
	scanf("%d %c", &hora1, &c);
	scanf("%d %c", &minuto1, &c);
	scanf("%d", &segundo1);
	
	tempo1 = segundo1 + minuto1 * 60 + hora1 * 60 * 60 + dia1 * 60 * 60 * 24;
	
	// tempo 2
	
	scanf("%s %d", &dia, &dia2);
	scanf("%d %c", &hora2, &c);
	scanf("%d %c", &minuto2, &c);
	scanf("%d", &segundo2);
	
	tempo2 = segundo2 + minuto2 * 60 + hora2 * 60 * 60 + dia2 * 60 * 60 * 24;
	
	// tempo total 
	
	tempototal = tempo2 - tempo1;
	
	diatotal = tempototal / (60 * 60 * 24); tempototal = tempototal - diatotal * 60 * 60 * 24; 
	horatotal = tempototal / (60 * 60); tempototal = tempototal - horatotal * 60 * 60;
	minutototal = tempototal / 60; tempototal = tempototal - minutototal * 60;
	segundototal = tempototal;
	printf("%d dia(s)\n", diatotal);
	printf("%d hora(s)\n", horatotal);
	printf("%d minuto(s)\n", minutototal);
	printf("%d segundo(s)\n", segundototal);
	
	return 0;
}
