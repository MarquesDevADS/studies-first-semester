#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia a nota final de 5 alunos. Escreva no final, a
maior e a menor nota, a m�dia das notas e a quantidade de notas acima da
m�dia.
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

    printf("A maior nota �: %.2f\n", max);
    printf("A menor nota �: %.2f\n", min);
    printf("A m�dia das notas �: %.2f\n", media);
    printf("Quantidade de notas acima da m�dia: %d\n", count);




	return 0;
}


