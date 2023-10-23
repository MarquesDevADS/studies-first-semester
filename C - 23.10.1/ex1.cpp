#include <stdio.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor. Mostre o 1o
valor e o 5o valor digitado. 
*/

int main() {
	
	//variavel
    int valores[10], i;

	//desenvolvimento
    for(i = 0; i < 10; i++) {
    	printf("Digite o valor %i: ", i+1);
    	scanf("%i", &valores[i]);
    }
    
    //saida
    printf("O primeiro valor digitado foi: %i\n", valores[0]);
    
    printf("O quinto valor digitado foi: %i\n", valores[4]);
    
    
    return 0;
}

