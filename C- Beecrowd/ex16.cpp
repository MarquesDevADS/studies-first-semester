#include <stdio.h>

int main (){

	//variaveis
	int horas, minutos, segundos, tempoS;
	
	//entrada
	scanf("%i", &tempoS);
	
	//calculos
	horas = tempoS / 3600;
	tempoS %= 3600;
	minutos = tempoS / 60;
	segundos = tempoS % 60;
	
	//saida
	printf("%i:%i:%i\n", horas, minutos, segundos);


	return 0;
	}


