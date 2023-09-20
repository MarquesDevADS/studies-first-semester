#include <stdio.h>

int main (){

	//variaveis
	float tempoH, velocidadeM;
	float distancia, litros;
	const float consumo = 12.0;
	
	//entradas
	scanf("%f", &tempoH);
	scanf("%f", &velocidadeM);
	
	//calculos
	distancia = velocidadeM * tempoH;
	litros = distancia / consumo;
	
	//saida
	printf("%.3f\n", litros);
 
	return 0;
	}


