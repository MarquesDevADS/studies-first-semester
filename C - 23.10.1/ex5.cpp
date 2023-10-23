#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 n�meros, calcula a m�dia e ao final mostra
quantos valores s�o maiores que a m�dia e os n�meros. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
    int i, count = 0;
    float num[10], soma = 0.0, media;

	//entrada e calculo
    printf("Digite 10 n�meros:\n");
    for(i = 0; i < 10; ++i) {
        scanf("%f", &num[i]);
        soma += num[i];
    }

    media = soma / 10;
	
	//saida
    printf("\nM�dia = %.2f\n", media);

    for(i = 0; i < 10; ++i) {
        if(num[i] > media) {
            ++count;
            printf("\nN�mero maior que a m�dia: %.2f\n", num[i]);
        }
    }

    printf("\nQuantidade de n�meros maiores que a m�dia: %i\n", count);


	return 0;
}



