#include <stdio.h>
#include <locale.h>

/*
Fazer uma fun��o em "C" que retorna a raz�o entre dois n�meros. A fun��o
deve retornar pelo comando return o valor 1 se a opera��o foi poss�vel e o
valor 0 se a opera��o n�o foi poss�vel (divis�o por zero, por exemplo). O
resultado da divis�o deve retonar por um par�metro por refer�ncia.
*/

float reason (float n1, float n2){
	float result;
	result = n1 / n2;
	return(result);
}

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, r1;
	
	printf("Digite o 1� n�mero: ");
	scanf("%f", &x);
	
	printf("Digite o 2� n�mero: ");
	scanf("%f", &y);
	
	r1 = reason(x, y);
	
	printf("A raz�o entre %.2f e %.2f �: %.2f", x, y, r1);


	return 0;
}


