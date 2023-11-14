#include <stdio.h>
#include <locale.h>

/*
Fazer uma função para ler e retornar o valor das 3 notas de um aluno.
*/

int notas(int nota1, int nota2, int nota3) {
    printf("\nNota 1: %i", nota1);

    printf("\nNota 2: %i", nota2);

    printf("\nNota 3: %i", nota3);
}

int main () {
	setlocale(LC_ALL,"Portuguese");

	int x, y, z;

    printf("Digite a 1° nota: ");
    scanf("%i", &x);
    
    printf("Digite a 2° nota: ");
    scanf("%i", &y);
    
    printf("Digite a 3° nota: ");
    scanf("%i", &z);
    
    notas(x, y, z);

	return 0;
}

	
