#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float raio, calc;
	const float pi = 3.14;
	
	//entrada
	printf("Digite um n�mero: ");
	scanf("%f", &raio);
	
	//calculo
	calc = pi * pow(raio, 2);
	
	//saida
	printf("A �rea de um raio ser�: %.2f\n", calc);


	return 0;
}


