#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero1, numero2, numero3;

	//entrada
	printf("Digite um n�mero: ");
	scanf("%i", &numero1);

	printf("Digite um n�mero: ");
	scanf("%i", &numero2);
	
	printf("Digite um n�mero: ");
	scanf("%i", &numero3);


	//desenvolvimento
	if (numero1 > numero2 && numero1 > numero3) {
		printf("O primeiro n�mero (%i) � o maior", numero1);
	}
	
	if (numero2 > numero1 && numero2 > numero3) {
		printf("O segundo n�mero (%i) � o maior", numero2);
	}
	
	if (numero3 > numero1 && numero3 > numero2) {
		printf("O terceiro n�mero (%i) � o maior", numero3);
	}
	
	return 0;
}


