#include <stdio.h>
#include <locale.h>

/*
Um Banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo
m�dio no �ltimo ano. Fa�a um programa em C que leia o saldo m�dio de um
cliente e calcule o valor do cr�dito de acordo com a tabela abaixo (exiba a tabela
no programa). Mostre uma mensagem informando o saldo m�dio e o valor do
cr�dito.
Saldo m�dio Percentual
de 0 a 200,00 nenhum cr�dito (cr�dito = 0)
de 201,00 a 400,00 20% do valor do saldo m�dio
de 401,00 a 600,00 30% do valor do saldo m�dio
acima de 600,00 40% do valor do saldo m�dio
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float saldo_medio, calc;

	//entrada
	printf("Digite o saldo m�dio: ");
	scanf("%f", &saldo_medio);

	//sem cr�dito
	if (saldo_medio >= 0 && saldo_medio <= 200.00) {
		printf("Nenhum cr�dito");
	}
	
	//20%
	if (saldo_medio > 200.00 && saldo_medio <= 400.00) {
		calc = (saldo_medio * 20 / 100);
		printf("Saldo m�dio: %.2f\nO seu cr�dito equivale a 20%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}
	
	//30%
	if (saldo_medio > 400.00 && saldo_medio <= 600.00) {
		calc = (saldo_medio * 30 / 100);
		printf("Saldo m�dio: %.2f\nO seu cr�dito equivale a 30%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}

	//40%
	if (saldo_medio > 600.00) {
		calc = (saldo_medio * 40 / 100);
		printf("Saldo m�dio: %.2f\nO seu cr�dito equivale a 40%% do seu saldo, sendo: %.2f", saldo_medio, calc);
	}
	return 0;
}


