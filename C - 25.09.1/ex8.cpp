#include <stdio.h>
#include <locale.h>

/*
Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na
linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue
ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int idade;

	//entrada
	printf("Digite a idade: ");
	scanf("%i", &idade);

	//desenvolvimento
	if (idade >= 18 && idade <=67) {
		printf("Está apto");
	}
	else {
		printf("Você está fora da faixa etária");
	}

	return 0;
}


