#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia a nota final de 5 alunos. Escreva no final, a
maior e a menor nota, a média das notas e a quantidade de notas acima da
média.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
 	int i, count = 0;
    float nota, max = 0, min = 10, soma = 0, media;

    for(i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %i: ", i+1);
        scanf("%f", &nota);

        if(nota > max) {
            max = nota;
        }

        if(nota < min) {
            min = nota;
        }

        if(nota > 6) {
            count++;
        }

        soma += nota;
    }

    media = soma / 5;

    printf("A maior nota é: %.2f\n", max);
    printf("A menor nota é: %.2f\n", min);
    printf("A média das notas é: %.2f\n", media);
    printf("Quantidade de notas acima da média: %d\n", count);




	return 0;
}


