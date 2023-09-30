#include <stdio.h>
#include <locale.h>

/*
Depois da liberação do governo para as mensalidades dos planos de saúde, as
pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito
caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um
programa que entre com a idade de uma pessoa e imprime o valor que ela deverá
pagar.
- até 10 anos - R$30,00
- acima de 10 anos até 29 anos - R$60,00
- acima de 29 anos até 45 anos - R$120,00
- acima de 45 anos até 59 anos - R$150,00
- acima de 59 anos até 65 anos - R$250,00
- maior que 65 anos - R$400,00
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int idade;

	//entrada
	printf("Digite a idade: ");
	scanf("%i", idade);

	//desenvolvimento
	if (idade > 0 && idade <= 10) {
		printf("Devera ser pago: R$30,00");
	}
	if (idade > 10 && idade <= 29) {
		printf("Devera ser pago: R$60,00");
	}
	if (idade > 29 && idade <= 45) {
		printf("Devera ser pago: R$120,00");
	}
	if (idade > 45 && idade <= 59) {
		printf("Devera ser pago: R$150,00");
	}
	if (idade > 59 && idade <= 65) {
		printf("Devera ser pago: R$250,00");
	}
	if (idade > 65) {
		printf("Devera ser pago: R$400,00"); 
	}
	return 0;
}


