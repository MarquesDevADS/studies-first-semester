#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int salario, prestacao, calc;

	//entrada
	printf("Qual o salário: ");
	scanf("%i", &salario);
	
	printf("Qual a prestação: ");
	scanf("%i", &prestacao);

	//calculo
	calc = salario * 20 / 100;
	
	//desenvolvimento
	if (prestacao>=calc) {
		printf("Empréstimo não pode ser concedido !");
	}
	
	else {
		printf("Empréstimo concedido");
	}


	return 0;
}


