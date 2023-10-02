#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 121 e 300
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

	for (int repeticao = 121; repeticao <= 300; repeticao++) {
        // imprime o número atual
        printf("%i\n", repeticao);
    }

	return 0;
	}


