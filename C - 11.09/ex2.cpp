#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int A, B;
	
	//entrada
	printf("Digite o valor de A: ");
	scanf("%i", &A);
	
	printf("Digite o valor de B: ");
	scanf("%i", &B);
	
	//calculo
	
	//saida
	printf("O valor de B �: %i\nO valor de A �: %i", A, B);
	

	return 0;
}


