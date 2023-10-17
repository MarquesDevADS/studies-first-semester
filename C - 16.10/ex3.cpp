#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia o ano de nascimento de uma pessoa. Escreva
todos os anos na tela em ordem decrescente a partir do ano atual (2018).
Conte a quantidade de anos que se passaram e ao final imprima o total de
anos (que será a idade desta pessoa)
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
	int nascimento, ano_atual = 2023, anos = 0;

	//entrada
	printf("Em que ano você nasceu: ");
	scanf("%i", &nascimento);
	
	//desenvolvimento
	for (nascimento; nascimento < ano_atual; ano_atual--) {
		printf("%i\n", ano_atual);
        anos++;
    }
    
    //saida
    printf("Anos: %i", anos);
    

	return 0;
}


