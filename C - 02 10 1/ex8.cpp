#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os valores a partir de um intervalo informado pelo
usuário
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero_1, numero_2;
	
	//entrada
	printf("Digite o inicio do intervalo: ");
	scanf("%i", &numero_1);
	
	printf("Digite o fim do intervalo: ");
	scanf("%i", &numero_2);

	//saida
	for (numero_1 = numero_1; numero_1 <= numero_2; numero_1++) {
        // imprime o número atual
        printf("%i\n", numero_1);
    }
	
	return 0;
}


