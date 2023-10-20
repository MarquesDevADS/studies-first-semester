#include <stdio.h>

/*
Leia 6 valores. Em seguida, mostre quantos destes valores 
digitados foram positivos. Na pr�xima linha, deve-se mostrar 
a m�dia de todos os valores positivos digitados, com um d�gito 
ap�s o ponto decimal.
*/

int main() {
	
    char continuar;

    do {
    	int cont = 0;
    	float val, soma = 0, med;
    	
    	for (int i = 0; i < 6; i++) {
    		scanf("%f", &val);
    		if (val > 0) {
    			cont++;
    			soma += val;
			}
		}
		
		med = soma / cont;
		
		printf("%i valores positivos\n%.1f\n", cont, med);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

