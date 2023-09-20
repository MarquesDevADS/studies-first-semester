#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	int A, B, SOMA;
	
	scanf("%i", &A);
	
	scanf("%i", &B);
	
	SOMA = A+B;
	
	printf("SOMA = %i", SOMA);
	
	return 0;
}

