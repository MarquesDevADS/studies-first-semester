#include <stdio.h>

/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores que ser�o lidos em seguida. 
Para cada valor lido, mostre uma mensagem em ingl�s dizendo se este valor lido � par (EVEN), 
�mpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), 
embora a descri��o correta seja (EVEN NULL), pois por defini��o zero � par, seu programa dever� 
imprimir apenas NULL.
*/

int main() {

    char continuar;

    do {
    	int n, num, x;
    	
    	scanf("%i", &n);
    	
    	for (x = 0; x < n; x++) {
    		scanf("%i", &num);
    		
    		if (num % 2 == 0 && num > 0) {
    			printf("EVEN POSITIVE\n");
			}
			if (num % 2 == 0 && num < 0) {
				printf("EVEN NEGATIVE\n");
			}
			if (num % 2 != 0 && num > 0) {
    			printf("ODD POSITIVE\n");
			}
			if (num % 2 != 0 && num < 0) {
				printf("ODD NEGATIVE\n");
			}
			if (num == 0) {
				printf("NULL\n");
			}
    	}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

