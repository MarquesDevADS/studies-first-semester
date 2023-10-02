#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra na tela os números de 50 até 5 e mostra os valores
ímpares.
*/

/*
% retorna o resto de divisão de um número pelo outro
se o resto da divisão de um número por 2 for igual a 1
então esse número é ímpar
se o resto for igual a 0, então o número é par
*/


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    int numero = 50;

	//saida
    printf("Números ímpares de 50 até 5: \n");

    while (numero >= 5) {
        if (numero % 2 != 0) {
            printf("%i\n", numero);
        }
        numero--;
    }

	return 0;
	}



