#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero1, numero2;

	//entrada
	printf("Digite um n�mero: ");
	scanf("%i", &numero1);

	printf("Digite um n�mero: ");
	scanf("%i", &numero2);

	//desenvolvimento
	if (numero1>numero2) {
		printf("%i � maior", numero1);
	}
	
	else {
		printf("%i � maior", numero2);
	}
	


	return 0;
}


