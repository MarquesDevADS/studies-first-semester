#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra na tela os números de 1 até 100.
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

    // for é usado quando queremos repetir um número fixo de vezes
    for (int repeticao = 1; repeticao <= 100; repeticao++) {
        // imprime o número atual
        printf("%i\n", repeticao);
    }
    
    return 0;
}









