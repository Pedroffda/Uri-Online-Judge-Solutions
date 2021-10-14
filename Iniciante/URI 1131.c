/*
PERGUNTA:

A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. 
Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. 
Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. 
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, 
caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. 
Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". 
Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. 
Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

RESPOSTA:

*/
#include <stdio.h>

int main()
{
	int inter, gremio, cont=0, repeat;
	int interwin=0, gremiowin=0, draw=0;
	while(1)
	{
		scanf("%d %d", &inter, &gremio); // ler numero de gols do INTER e do GREMIO
		if (inter > gremio) { interwin++;}
		else if (inter < gremio) { gremiowin++;}
		else {draw++;}	
		cont++;
		printf("Novo grenal (1-sim 2-nao)\n");	
		scanf("%d", &repeat);
		if (repeat != 1) {break;}			
	}
	printf("%d grenais\n", cont);	
	printf("Inter:%d\n", interwin);
	printf("Gremio:%d\n", gremiowin);
	printf("Empates:%d\n", draw);
	if (interwin > gremiowin) {printf("Inter venceu mais\n");}
	else if (interwin < gremiowin) {printf("Gremio venceu mais\n");}
	else {printf("Nao houve vencedor");}	
			
	return 0;
}
