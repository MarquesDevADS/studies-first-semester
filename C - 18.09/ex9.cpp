#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero1, numero2, numero3;

	//entrada
	printf("Digite um número: ");
	scanf("%i", &numero1);

	printf("Digite um número: ");
	scanf("%i", &numero2);
	
	printf("Digite um número: ");
	scanf("%i", &numero3);


	//desenvolvimento
	if (numero1 > numero2 && numero1 > numero3) {
		printf("O primeiro número (%i) é o maior", numero1);
	}
	
	if (numero2 > numero1 && numero2 > numero3) {
		printf("O segundo número (%i) é o maior", numero2);
	}
	
	if (numero3 > numero1 && numero3 > numero2) {
		printf("O terceiro número (%i) é o maior", numero3);
	}
	
	return 0;
}


