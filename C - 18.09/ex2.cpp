#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero;

	//entrada
	printf("Digite um n�mero: ");
	scanf("%i", &numero);
	
	//desenvolvimento
	if (numero>=0) {
		printf("%i � positivo", numero);
	}

	else {
		printf("%i � negativo", numero);
	}
	return 0;
}


