#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero1, numero2;

	//entrada
	printf("Digite um número: ");
	scanf("%i", &numero1);

	printf("Digite um número: ");
	scanf("%i", &numero2);

	//desenvolvimento
	if (numero1>numero2) {
		printf("%i é maior", numero1);
	}
	
	else {
		printf("%i é maior", numero2);
	}
	


	return 0;
}


