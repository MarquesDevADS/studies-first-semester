#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia as notas de 10 alunos e no final escreva a maior
e a menor nota, assim como a média dos alunos com nota maior que 6 e
dos alunos menores que 6
*/

int main() {
	setlocale(LC_ALL,"Portuguese");
	
    int notas[10];
    int i;
    float somaMaior6 = 0;
    int contadorMaior6 = 0;
    int maiorNota = -1;
    int menorNota = 11;

    //leitura
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %i: ", i + 1);
        scanf("%i", &notas[i]);

        //maior ou menor
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }

        //maior que 6
        if (notas[i] > 6) {
            somaMaior6 += notas[i];
            contadorMaior6++;
        }
    }

    //media > 6
    float mediaMaior6 = (contadorMaior6 > 0) ? somaMaior6 / contadorMaior6 : 0;

    printf("Maior nota: %i\n", maiorNota);
    printf("Menor nota: %i\n", menorNota);
    printf("Média dos alunos com nota maior que 6: %.2f\n", mediaMaior6);
    printf("Média dos alunos com nota menor ou igual a 6: %.2f\n", 10 - contadorMaior6 > 0 ? (45 - somaMaior6) / (10 - contadorMaior6) : 0);

    return 0;
}
