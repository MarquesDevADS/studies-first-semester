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
	if (numero>0) {
		printf("%i � positivo", numero);
	}
	
	if(numero<0) {
		printf("%i � negativo", numero);
	}

	if (numero==0) {
		printf("%i � igual a 0", numero);
	}
	

	return 0;
}


