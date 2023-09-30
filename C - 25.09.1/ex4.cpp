#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de
para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A
f�rmula � IMC = peso / ( altura ) � . Elabore um programa que leia o peso e a
altura de um adulto e mostre sua condi��o de acordo com a tabela abaixo:
? Abaixo de 18,5 -Abaixo do peso
? Entre 18,5 e 25 -Peso normal
? Entre 25 e 30 -Acima do peso
? Acima de 30 �obeso
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


