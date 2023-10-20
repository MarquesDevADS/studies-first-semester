#include <stdio.h>

/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.
*/

int main() {

    char continuar;

    do {
    	int n, x, num, contIN = 0, contOUT = 0;
    	
    	scanf("%i", &n);
    	
    	for (x = 0; x < n; x++) {
    		scanf("%i", &num);
    		if (num >= 10 && num <= 20) {
    			contIN++;
			}
			if (num < 10 || num > 20) {
				contOUT++;
			}
		}
		printf("%i in\n%i out\n", contIN, contOUT);

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

