#include <stdio.h>
#include <locale.h>

/*
Em uma empresa, existiam dois funcionários: o Mario que ganhava 1500,00
por mês, e o Rodrigo que ganhava 1100,00 por mês. A empresa apresentou
um plano para que o Rodrigo pudesse ganhar mais que o Mario.
Considerando que a empresa daria um aumento de 10% ao ano para o
Mario e 20% para o Rodrigo, quantos anos levaria para que Rodrigo
ultrapassasse o salário do Mário 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	float salario_mario = 1500.00;
    float salario_rodrigo = 1100.00;
    int anos = 0;

    while (salario_rodrigo <= salario_mario) {
        salario_mario *= 1.10;
        salario_rodrigo *= 1.20;
        anos++;
    }

    printf("Rodrigo ultrapassará o salário de Mario em %i anos.\n", anos);



	return 0;
}


