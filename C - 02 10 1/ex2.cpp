#include <stdio.h>
#include <locale.h>

/*
Faça um programa que escreva 10 vezes na tela o seu nome
*/	

int main (){
	setlocale(LC_ALL,"Portuguese");

	int nome;

    for (nome = 0; nome < 10; nome++) {
        printf("Alyson\n");
    }


	return 0;
	}


