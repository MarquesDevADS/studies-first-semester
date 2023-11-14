#include <stdio.h>
#include <locale.h>

/*
Fazer uma função que retorna a soma, a diferença e o produto entre dois
números.
*/

int sum (int n1, int n2) {
	return n1 + n2;
}

int dif (int n1, int n2){
	return n1 - n2;
}

int produt (int n1, int n2) {
	int result;
	result = n1 * n2;
	return(result);
}

int main () {
	setlocale(LC_ALL,"Portuguese");

	int x, y, r1, r2, r3;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &x);
	
	printf("Digite o segundo número: ");
	scanf("%i", &y);
	
	r1 = sum(x, y);
	r2 = dif(x, y);
	r3 = produt(x, y);
	
    printf("Soma: %i\n", r1);
    printf("Diferença: %i\n", r2);
    printf("Produto: %i\n", r3);

    return 0;
}


