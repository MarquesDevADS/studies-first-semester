#include <stdio.h>
#include <locale.h>

/*
Uma fábrica de camisetas produz os tamanhos P, M e G, cada uma sendo
vendida respectivamente por 15, 18 e 22 Reais cada. Faça um algoritmo
que leia o código do tamanho da camiseta (P, M ou G) e a quantidade
vendida. Calcule o valor total da venda e escreva no final.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	char tamanho;
	int valor_p = 15, valor_m = 18, valor_g = 22;
	int quantidade, calc;

	//entrada
	printf("Indique o tamanho (P, M, G): ");
	scanf("%s", &tamanho);

	printf("Indique a quantidade de camisetas: ");
	scanf("%i", &quantidade);
	
	//calculo
	if (tamanho == 'P') {
		int calc = valor_p * quantidade;
		printf("O valor de sua(s) %i camiseta(s) resulta em: R$%.2i", quantidade, calc);
	}
	if (tamanho == 'M') {
			int calc = valor_m * quantidade;
			printf("O valor de sua(s) %i camiseta(s) resulta em: R$%.2i", quantidade, calc);
	}
	if (tamanho == 'G') {
			int calc = valor_g * quantidade;
			printf("O valor de sua(s) %i camiseta(s) resulta em: R$%.2i", quantidade, calc);
	}

	return 0;
}


