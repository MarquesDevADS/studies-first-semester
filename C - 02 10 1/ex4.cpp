#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra na tela os n�meros de 50 at� 5 e mostra os valores
�mpares.
*/

/*
% retorna o resto de divis�o de um n�mero pelo outro
se o resto da divis�o de um n�mero por 2 for igual a 1
ent�o esse n�mero � �mpar
se o resto for igual a 0, ent�o o n�mero � par
*/


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    int numero = 50;

	//saida
    printf("N�meros �mpares de 50 at� 5: \n");

    while (numero >= 5) {
        if (numero % 2 != 0) {
            printf("%i\n", numero);
        }
        numero--;
    }

	return 0;
	}



