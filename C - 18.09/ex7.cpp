#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int salario, prestacao, calc;

	//entrada
	printf("Qual o sal�rio: ");
	scanf("%i", &salario);
	
	printf("Qual a presta��o: ");
	scanf("%i", &prestacao);

	//calculo
	calc = salario * 20 / 100;
	
	//desenvolvimento
	if (prestacao>=calc) {
		printf("Empr�stimo n�o pode ser concedido !");
	}
	
	else {
		printf("Empr�stimo concedido");
	}


	return 0;
}


