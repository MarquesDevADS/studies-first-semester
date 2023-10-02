#include <stdio.h>
#include <locale.h>

/*
Faça um programa que calcula a tabuada de um número lido.
Exemplo: [Entrada] 5
1 x 5 = 5
2 x 5 = 10
3 x 5 = 15
4 x 5 = 20
5 x 5 = 25
6 x 5 = 30
7 x 5 = 35
8 x 5 = 40
9 x 5 = 45
10 x 5 = 50
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int calc, numero_base, numero;
	
	//entrada
	printf("Digite um número: ");
	scanf("%i", &numero_base);
	
	//calculo
	calc = numero_base * numero;

	//saida
	for (numero = 1; numero <= 10; numero++) {
		printf("%i X %i = %i\n", numero, numero_base, calc);
	}


	return 0;
}


