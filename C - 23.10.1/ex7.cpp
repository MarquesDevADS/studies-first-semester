#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que armazena 10 valores em um vetor X e mostra somente
os valores armazenados nos �ndices pares do vetor. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
    int X[10], Y[10], position[10];
    int i, cont = 0;

    //preenchimento
    for(i = 1; i <= 10; i++) {
        printf("Digite o %i� n�mero: ", i);
        scanf("%i", &X[i]);
         
    	if (i % 2 ==0){
    		Y[cont] = X[i];
    		position[cont] = i;
    		cont++;
		}
    }

    //saida
    printf("Valores nos indices pares do vetor:\n");
    for(i = 0; i < cont; i++) {
        printf("X[%i] = %i\n", position[i]-1, Y[i]);
    }

	return 0;
}


