#include <stdio.h>
#include <locale.h>

/*
Fazer uma fun��o que retorna a soma, a diferen�a e o produto entre dois
n�meros.
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
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &x);
	
	printf("Digite o segundo n�mero: ");
	scanf("%i", &y);
	
	r1 = sum(x, y);
	r2 = dif(x, y);
	r3 = produt(x, y);
	
    printf("Soma: %i\n", r1);
    printf("Diferen�a: %i\n", r2);
    printf("Produto: %i\n", r3);

    return 0;
}


