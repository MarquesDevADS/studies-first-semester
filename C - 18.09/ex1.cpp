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
	if (numero % 2==0) {
		printf("%i � um n�mero par.\n", numero);
	}
	
	else {
		printf("%i � um n�mero impar.\n", numero);
	}


	return 0;
}


