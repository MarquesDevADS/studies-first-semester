#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que preenche um vetor A de 10 elementos com o valor 30.
Ap�s o preenchimento mostre o vetor A.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
	int A[10] i;
	
	for (i = 0; i < 10; i++) {
		A[i] = 30;
	}
	
	for (i = 0; i < 10; i++) {
		printf("%i\n", A[i]);
	}
	

	return 0;
}


