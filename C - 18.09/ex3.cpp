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
	if (numero>0) {
		printf("%i é positivo", numero);
	}
	
	if(numero<0) {
		printf("%i é negativo", numero);
	}

	if (numero==0) {
		printf("%i é igual a 0", numero);
	}
	

	return 0;
}


