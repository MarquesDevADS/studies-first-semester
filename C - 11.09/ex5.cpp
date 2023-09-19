#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int valor_1, valor_2;
	float calc1, calc2, calc3, div_final;

	//entrada
	printf("Digite o primeiro valor: ");
	scanf("%i", &valor_1);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &valor_2);

	//calculo
	calc1 = valor_1 * valor_1;
	calc2 = valor_2 * valor_2;
	
	
	calc3 = calc1 + calc2;
	printf("O resultado da soma dos quadrado é: %.3f\n", calc3);
	
	div_final = calc1 / calc2; 
	

	//saida
	printf("O calculo final dos valores resultou em: %.3f\n", div_final);
	
	return 0;
}


