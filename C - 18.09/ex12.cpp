#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float salario, calc1, calc2, calc3;

	//entrada
	printf("Digite o valor do seu salário: ");
	scanf("%f", &salario);
	
	//calculo
	calc1 = salario * 20 / 100;
	
	calc2 = salario * 25 / 100;
	
	calc3 = salario * 30 / 100;
	
	//saida
	if (salario <= 600) {
		printf("O individuo está isento");
	}
	
	if (salario > 601 && salario <= 1200) {
		printf("O desconto será: %.2f", calc1);
	}
	
	if (salario > 1201 && salario <= 2000) {
		printf("O desconto será: %.2f"), calc2;
	}
	
	if (salario > 2001){
		printf("O desconto será: %.2f", calc3);
	}



	return 0;
}


