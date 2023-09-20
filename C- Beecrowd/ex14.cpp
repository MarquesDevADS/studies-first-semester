#include <stdio.h>

int main() {
	
    //variaveis
    double velocidadeX = 60.0;
    double velocidadeY = 90.0;
	double distancia;
	double tempoH;
	double tempoM;
	
	//entrada
    scanf("%lf", &distancia);

    //calcula o tempo em horas para o carro Y alcançar a distância
    tempoH = distancia / (velocidadeY - velocidadeX);

    //converte o tempo em h para m
    tempoM = tempoH * 60.0;

	//saida
    printf("%.lf minutos\n", tempoM);

    return 0;
}

