#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int velocidade;

	//entrada
	printf("Velocidade = ");
	scanf("%i", &velocidade);

	//saida
	if (velocidade > 80) {
		printf("A multa é de R$360,00");
	}

	if (velocidade > 60 && velocidade < 80) {
		printf("A multa é de R$180,00");
	}
	
	if (velocidade <= 60) {
		printf("Não há multas");
	}

	return 0;
}


