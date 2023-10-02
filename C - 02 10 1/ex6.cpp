#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 121 e 201 de 3 em 3
*/


int main () {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
	int numero;
	
	for (numero = 121; numero <= 201; numero=numero + 3) {
        printf("%i\n", numero);
    }


	return 0;
}


