#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra os n�meros entre 121 e 300
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	for (int repeticao = 121; repeticao <= 300; repeticao++) {
        // imprime o n�mero atual
        printf("%i\n", repeticao);
    }

	return 0;
	}


