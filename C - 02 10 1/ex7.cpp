#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra os n�meros entre 200 at� 100 de 5 em 5
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


