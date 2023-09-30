#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba a idade de uma pessoa e mostre na saída em qual
categoria ela se encontra:
? 10-14 infantil
? 15-17 juvenil
? 18-25 adulto
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int idade;

	//entrada
	printf("Digite a idade: ");
	scanf("%i", &idade);

	//desenvolvimento
	if (idade >= 10 && idade <= 14) {
		printf("Infantil");
	}
	if (idade >= 15 && idade <= 17) {
		printf("Juvenil");
	}
	if (idade >= 18 && idade <= 25) {
		printf("Adulto");
	}
	return 0;
}


