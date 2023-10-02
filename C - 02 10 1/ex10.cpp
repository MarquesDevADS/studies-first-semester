#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia 10 números inteiros e identifique o maior e o menor.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	int numero, maior, menor;
	
	//desenvolvimento
   	for (int i = 0; i < 10; i++) {
       printf("Introduza um numero: ");
       scanf("%i", &numero);
       
       
    	//atribuir valor
     	if (i == 0) {
     		menor = numero;
     		maior = numero;
		 } else if (numero > maior) {
		 	maior = numero;
		 } else if (numero < menor) {
		 	menor = numero;
		 }
	}
	//saida
	printf("Menor valor: %i\nMaior valor: %i\n", menor, maior);

	return 0;
}


