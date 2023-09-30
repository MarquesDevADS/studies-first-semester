#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso
sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	char nome[50];
	char sexo[2];
	char estado[10];
	int tempo;
	
	//entrada
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Digite o sexo (H - Homem | M - Mulher): ");
	scanf(" %c", &sexo);

	printf("Digite o estado civil (SOLTEIRA | CASADA): ");
	scanf("%s", &estado);

	//desenvolvimento
	if (sexo[0] == 'M' && strcmp(estado, "CASADA") == 0 ) {
		printf("Digite o tempo de casada: ");
		scanf("%i", &tempo);
		printf("Nome: %s\nSexo: %c\nVocê está a: %i anos casada", nome, sexo[0], tempo);
	}
	else {
		printf("Nome: %s\nSexo: %c\nVocê está: %s", nome, sexo[0], estado);
	}

	return 0;
}


