#include <stdio.h>

int main (){
	
	//variavel
	int A, B, calc;
	
	//entrada
	scanf("%i %i", &A, &B);

	//desenvolvimento
	if (B % A == 0 || A % B == 0) {
		printf("Sao Multiplos\n");
	}
	else {
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
	}


