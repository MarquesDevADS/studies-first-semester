#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int A, B, C, calc1, calc2;

	//entrada
	printf("Digite o primeiro número: ");
	scanf("%i", &A);
	
	printf("Digite o segundo número: ");
	scanf("%i", &B);

	//calculo
	calc1 = A + B;
	calc2 = A * B;

	//saida
	
	if (A==B) {
		printf("Os números são iguais, logo C = %i", calc1);
	}
	
	else {
		printf("Os números são diferentes, logo C = %i", calc2);
	}
	
	


	return 0;
}


