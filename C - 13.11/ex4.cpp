#include <stdio.h>
#include <locale.h>
#include <limits.h>

/*
Fazer uma rotina em "C" que recebe um vetor de n�meros inteiros como
par�metro onde todos os valores exceto o �ltimo s�o positivos e devolve: -
a m�dia dos valores do vetor; - o menor valor do vetor (sem considerar o
�ltimo) - o maior valor do vetor
*/

int calc(int *v, int size, float *media, int *menor, int *maior) {
	int sum = 0;
	*menor = *maior = v[0];
	
	for (int i = 0; i < size; i++) {
		sum += v[i];
		
		if (v[i] < *menor) {
			*menor = v[i];
		}
		
		if (v[i] > *maior) {
			*maior = v[i];
		}
	}
	*media = (float)sum / size;
}

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int v[100], num, menor, maior, cont = 0;
		float media;
		
		printf("Digite um n�mero positivo (digite um negativo para encerrar): ");
		scanf("%i", &num);
		
		while (num >= 0 && cont < 100) {
			v[cont++] = num;
			
			printf("Digite um n�mero positivo (digite um negativo para encerrar): ");
			scanf("%i", &num);
		}
		if (cont > 0) {
			calc(v, cont, &media, &menor, &maior);
			printf("M�dia: %.2f\nMenor: %i\nMaior: %i\n", media, menor, maior);
		} else {
			printf("Nenhum n�mero positivo foi digitado.\n");
		}
		
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}



