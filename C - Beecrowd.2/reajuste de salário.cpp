#include <stdio.h>

int main (){
	
	//variaveis
	float salario;
	float ajuste_15, ajuste_12, ajuste_10, ajuste_7, ajuste_4;
	float salario_15, salario_12, salario_10, salario_7, salario_4;

	//entrada
	scanf("%f", &salario);

	//15%
	ajuste_15 = salario * 15 / 100;
	salario_15 = salario + ajuste_15;
	
	//12%
	ajuste_12 = salario * 12 / 100;
	salario_12 = salario + ajuste_12;
	
	//10%
	ajuste_10 = salario * 10 / 100;
	salario_10 = salario + ajuste_10;
	
	//7%
	ajuste_7 = salario * 7 / 100;
	salario_7 = salario + ajuste_7;

	//4%
	ajuste_4 = salario * 4 / 100;
	salario_4 = salario + ajuste_4;
	
	//desenvolvimento
	if (salario >= 0 && salario <= 400) {
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario_15, ajuste_15);
	}
	if (salario > 400 && salario <= 800) {
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salario_12, ajuste_12);
	}
	if (salario > 800 && salario <= 1200) {
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salario_10, ajuste_10);
	}
	if (salario > 1200 && salario <= 2000) {
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salario_7, ajuste_7);
	}
	if (salario > 2000) {
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario_4, ajuste_4);
	}
	

	return 0;
	}


