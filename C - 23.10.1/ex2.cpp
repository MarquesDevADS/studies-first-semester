#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 valores e os armazena em um vetor. Mostre os
valores que s�o maiores que 50. 
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	//vaivavel
	int valores[10];
	int i;

	//entrada
    for(i = 0; i < 10; i++) {
    	printf("Digite o n�mero %i: ", i+1);
        scanf("%i", &valores[i]);
    }

	//saida
    printf("\nN�meros maiores que 50:\n");
    
    for(i = 0; i < 10; i++) {
        if(valores[i] > 50) {
            printf("%i\n", valores[i]);
        }
    }
    
	return 0;
	}


