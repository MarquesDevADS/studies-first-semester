#include <stdio.h>
#include <locale.h>

/*
Fa�a uma fun��o que realize a convers�o de Polegadas (pol) para
Cent�metros (cm), onde pol � passado como par�metro e cm � retornado.
Sabe-se que 1 polegada � 2,54 cent�metros. 
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
	
	printf("A convers�o resulta em: %fcm", r1);
	return 0;
}


