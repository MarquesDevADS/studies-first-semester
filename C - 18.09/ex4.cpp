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
	if (numero>20) {
		printf("%i é maior que 20", numero);
	}

	else{
		printf("%i é menor que 20", numero);
	}
	return 0;
}


