#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor. Mostre os
valores que são maiores que 50. 
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	//vaivavel
	int valores[10];
	int i;

	//entrada
    for(i = 0; i < 10; i++) {
    	printf("Digite o número %i: ", i+1);
        scanf("%i", &valores[i]);
    }

	//saida
    printf("\nNúmeros maiores que 50:\n");
    
    for(i = 0; i < 10; i++) {
        if(valores[i] > 50) {
            printf("%i\n", valores[i]);
        }
    }
    
	return 0;
	}


