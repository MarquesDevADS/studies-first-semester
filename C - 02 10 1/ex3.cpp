#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra na tela os n�meros de 100 at� 1
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

    //variavel
	int numero;
    
    //repeti��o
    for (numero = 100; numero >= 1; numero--) {
        printf("%i\n", numero);
    }

	return 0;
	}


