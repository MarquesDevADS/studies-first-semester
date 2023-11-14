#include <stdio.h>
#include <locale.h>

/*
Faça uma função que realize a conversão de Polegadas (pol) para
Centímetros (cm), onde pol é passado como parâmetro e cm é retornado.
Sabe-se que 1 polegada é 2,54 centímetros. 
*/

float conversion (float pol) {
	float result;
	result = pol * 2.54;
	return (result);
}

int main () {
	setlocale(LC_ALL,"Portuguese");

	float x, r1;
	
	printf("Digite o valor em polegada: ");
	scanf("%f", &x);

	r1 = conversion(x);
	
	printf("A conversão resulta em: %fcm", r1);
	return 0;
}


