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
	if (numero>20) {
		printf("%i � maior que 20", numero);
	}

	else{
		printf("%i � menor que 20", numero);
	}
	return 0;
}


