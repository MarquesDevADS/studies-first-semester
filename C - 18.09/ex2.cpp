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
	if (numero>=0) {
		printf("%i é positivo", numero);
	}

	else {
		printf("%i é negativo", numero);
	}
	return 0;
}


