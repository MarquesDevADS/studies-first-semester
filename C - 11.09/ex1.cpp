#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float horas_trabalhadas, valor_hora, calculo;
	
	//entrada
	printf("Quantas horas foram trabalhadas: ");
	scanf("%f", &horas_trabalhadas);
	
	printf("Valor por hora: ");
	scanf("%f", &valor_hora);

	//calculo
	calculo = horas_trabalhadas * valor_hora;
	
	//saida
	printf("O salário será: %.2f", calculo);

	return 0;
}


