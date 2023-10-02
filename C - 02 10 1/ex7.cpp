#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 200 até 100 de 5 em 5
*/


int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero;
	
	//saida
	for (numero = 200; numero >= 100; numero=numero - 5) {
        printf("%i\n", numero);
    }


	return 0;
}


