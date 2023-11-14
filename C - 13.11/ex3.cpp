#include <stdio.h>
#include <locale.h>

/*
Fazer uma função em "C" que retorna a razão entre dois números. A função
deve retornar pelo comando return o valor 1 se a operação foi possível e o
valor 0 se a operação não foi possível (divisão por zero, por exemplo). O
resultado da divisão deve retonar por um parâmetro por referência.
*/

float reason (float n1, float n2){
	float result;
	result = n1 / n2;
	return(result);
}

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, r1;
	
	printf("Digite o 1° número: ");
	scanf("%f", &x);
	
	printf("Digite o 2° número: ");
	scanf("%f", &y);
	
	r1 = reason(x, y);
	
	printf("A razão entre %.2f e %.2f é: %.2f", x, y, r1);


	return 0;
}


