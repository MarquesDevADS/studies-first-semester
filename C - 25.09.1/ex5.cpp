#include <stdio.h>
#include <locale.h>

/*
Um Banco concederá um crédito especial aos seus clientes, variável com o saldo
médio no último ano. Faça um programa em C que leia o saldo médio de um
cliente e calcule o valor do crédito de acordo com a tabela abaixo (exiba a tabela
no programa). Mostre uma mensagem informando o saldo médio e o valor do
crédito.
Saldo médio Percentual
de 0 a 200,00 nenhum crédito (crédito = 0)
de 201,00 a 400,00 20% do valor do saldo médio
de 401,00 a 600,00 30% do valor do saldo médio
acima de 600,00 40% do valor do saldo médio
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float saldo_medio, calc;

	//entrada
	printf("Digite o saldo médio: ");
	scanf("%f", &saldo_medio);

	//sem crédito
	if (saldo_medio >= 0 && saldo_medio <= 200.00) {
		printf("Nenhum crédito");
	}
	
	//20%
	if (saldo_medio > 200.00 && saldo_medio <= 400.00) {
		calc = (saldo_medio * 20 / 100);
		printf("Saldo médio: %.2f\nO seu crédito equivale a 20%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}
	
	//30%
	if (saldo_medio > 400.00 && saldo_medio <= 600.00) {
		calc = (saldo_medio * 30 / 100);
		printf("Saldo médio: %.2f\nO seu crédito equivale a 30%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}

	//40%
	if (saldo_medio > 600.00) {
		calc = (saldo_medio * 40 / 100);
		printf("Saldo médio: %.2f\nO seu crédito equivale a 40%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}
	return 0;
}


