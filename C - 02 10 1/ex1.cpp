#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra na tela os n�meros de 1 at� 100.
*/

int main (){
	setlocale(LC_ALL,"Portuguese");

    // for � usado quando queremos repetir um n�mero fixo de vezes
    for (int repeticao = 1; repeticao <= 100; repeticao++) {
        // imprime o n�mero atual
        printf("%i\n", repeticao);
    }
    
    return 0;
}









