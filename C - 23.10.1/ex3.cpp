#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor X. Verifique os
valores pares digitados, armazene-os em um vetor Y e mostre os valores pares
digitados e a quantidade.
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	//variavel
    int X[10];
    int Y[10];
    int count = 0;

    //entrada
    printf("Digite 10 valores:\n");

    //armazena X
    for (int i = 0; i < 10; i++) {
        scanf("%i", &X[i]);
        if (X[i] % 2 == 0) {
            Y[count] = X[i];
            count++;
        }
    }

    //saida
    printf("Valores pares digitados:\n");
    for (int i = 0; i < count; i++) {
        printf("%i ", Y[i]);
    }
    printf("\nQuantidade de valores pares: %i\n", count);



	return 0;
	}


