#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de peso de uma pessoa adulta. A
fórmula é IMC = peso / ( altura ) ² . Elabore um programa que leia o peso e a
altura de um adulto e mostre sua condição de acordo com a tabela abaixo:
? Abaixo de 18,5 -Abaixo do peso
? Entre 18,5 e 25 -Peso normal
? Entre 25 e 30 -Acima do peso
? Acima de 30 –obeso
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float peso, altura, calc;

	//entrada
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite o seu peso: ");
	scanf("%f", &altura);

	//calculo
	calc = peso / pow(altura, 2);

	//desenvolvimento
	if(calc < 18.5) {
		printf("Abaixo do peso");
	}
	if(calc >= 18.5 && calc < 25) {
		printf("Peso normal");
	}
	if(calc >= 25 && calc < 30) {
		printf("Acima do peso");
	} 
	if(calc >= 30) {
		printf("Obeso");
	}

	return 0;
}


