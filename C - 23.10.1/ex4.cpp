#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena no vetor A. Após, mostre a
soma dos valores. 
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	//variavel
	int A[10], i, soma = 0;
	
	//entrada
	for(i = 0; i < 10; i++) {
    	printf("Digite o valor %i: ", i+1);
    	scanf("%i", &A[i]);
    	soma += A[i];
    }
    
    printf("A soma dos valores fica: %i", soma);


	return 0;
	}


