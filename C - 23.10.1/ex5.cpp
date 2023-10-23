#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 números, calcula a média e ao final mostra
quantos valores são maiores que a média e os números. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
    int i, count = 0;
    float num[10], soma = 0.0, media;

	//entrada e calculo
    printf("Digite 10 números:\n");
    for(i = 0; i < 10; ++i) {
        scanf("%f", &num[i]);
        soma += num[i];
    }

    media = soma / 10;
	
	//saida
    printf("\nMédia = %.2f\n", media);

    for(i = 0; i < 10; ++i) {
        if(num[i] > media) {
            ++count;
            printf("\nNúmero maior que a média: %.2f\n", num[i]);
        }
    }

    printf("\nQuantidade de números maiores que a média: %i\n", count);


	return 0;
}



