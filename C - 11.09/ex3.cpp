#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float Celsius, Fahrenheit;

	//entrada
	printf("Quantos fahrenheit quer converter? ");
	scanf("%f", &Fahrenheit);

	//calculo
	Celsius = (5*(Fahrenheit-32))/9;

	//saida
	printf("Em Celsius será: %.3f graus", Celsius);


	return 0;
}


