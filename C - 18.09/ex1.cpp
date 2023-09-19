#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero;

	//entrada
	printf("Digite um número: ");
	scanf("%i", &numero);
	
	//desenvolvimento
	if (numero % 2==0) {
		printf("%i é um número par.\n", numero);
	}
	
	else {
		printf("%i é um número impar.\n", numero);
	}


	return 0;
}


