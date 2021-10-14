/*
PERGUNTA DA QUESTÃO:

"Pega ladrão! Pega ladrão!" 
Roubaram a bolsa de uma inocente senhora que caminhava na praia da Nlogônia e o ladrão fugiu em direção ao mar. 
Seu plano parece obvio: ele pretende pegar um barco e escapar!

O fugitivo, que a essa altura já está a bordo de sua embarcação de fuga, 
pretende seguir perpendicularmente à costa em direção ao limite de aguas internacionais, 
que fica a 12 milhas náuticas de distância, onde estará são e salvo das autoridades locais. 
Seu barco consegue percorrer essa distância a uma velocidade constante de VF nós.

A Guarda Costeira pretende interceptá-lo, e sua embarcacão tem uma velocidade constante de VG nós. 
Supondo que ambas as embarcações partam da costa exatamente no mesmo instante, com uma distância de D milhas náuticas entre elas, 
será possível a Guarda Costeira alcançar o ladrão antes do limite de aguas internacionais?

Assuma que a costa da Nlogônia é perfeitamente retilínea e o mar bastante calmo, de forma a permitir uma trajetória tão retilínea quanto a costa.

Entrada
A entrada é composta por diversos casos de teste e termina com final de arquivo (EOF). 
Cada caso de teste é descrito em um linha contendo três inteiros, D (1 ≤ D ≤ 100), VF (1 ≤ VF ≤ 100) e VG (1 ≤ VG ≤ 100), 
indicando respectivamente a distância inicial entre o fugitivo e a Guarda Costeira, 
a velocidade da embarcação do fugitivo e a velocidade da embarcação da Guarda Costeira.

Saída
Para cada caso de teste imprima uma linha contendo 
‘S’ se for possível que a Guarda Costeira alcance o fugitivo antes que ele ultrapasse o limite de águas internacionais 
ou ‘N’ caso contrário.

RESPOSTA:
*/
#include <stdio.h>
#include <math.h>

int DG(int d) // calcula a distancia dos guardas até o limite, através da hipotenusa
{
	double dg;
	dg = 144 + (d * d);
	dg = pow(dg, 0.5);
	return dg;
}
float GL(float distancia, float velocidade) // retorna tempo necessario para que os guardas cheguem no limite internacional
{
	double tempo;
	tempo = distancia / velocidade;
	return tempo;
}
float FL(float velocidade) // retorna o tempo em que os fugitivos chegam ao limite internacional 
{
	double tempo;
	tempo = 12 / velocidade;
	return tempo;
}

int main()
{
	int dist, velfug, velguard;
	double distguard, TempoGuardas, TempoFugitivos;
	
	while(scanf("%d %d %d", &dist, &velfug, &velguard) != EOF)
	{
		distguard = DG(dist);
		//printf("DISTANCIA DOS GUARDAS ATE O LIMITE: %lf\n", distguard);
		TempoGuardas = GL(distguard, velguard);
		//printf("TEMPO DOS GUARDAS ATE O LIMITE: %lf\n", TempoGuardas);
		TempoFugitivos = FL(velfug);
		//printf("TEMPO DOS FUGITIVOS ATE O LIMITE: %lf\n", TempoFugitivos);
		if ( TempoFugitivos >= TempoGuardas)
		{printf("S\n");}
		else
		{printf("N\n");} 

	}
	
	return 0;
}
