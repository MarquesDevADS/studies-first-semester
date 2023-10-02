#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra na tela os números de 100 até 1
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

    //variavel
	int numero;
    
    //repetição
    for (numero = 100; numero >= 1; numero--) {
        printf("%i\n", numero);
    }

	return 0;
	}


