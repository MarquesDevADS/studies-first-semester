#include <stdio.h>
#include <locale.h>

/*
Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um aplicativo na
linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue
ou n�o. Use alguns dos operadores l�gicos OU (||) e E (&&).
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
		printf("Est� apto");
	}
	else {
		printf("Voc� est� fora da faixa et�ria");
	}

	return 0;
}


