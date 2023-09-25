#include <stdio.h>
#include <math.h>

int main (){

	//variavel
	float A, B, C;
	float perimetro, area;
	
	
	//entrada
	scanf("%f %f %f", &A, &B, &C);
	
	
	//calculo
	perimetro = A + B + C;
	area = ((A + B) * C) /2;
	
	
	//desenvolvimento
	if (A + B > C && A + C > B && B + C > A ) {
		printf("Perimetro = %.1f\n", perimetro);
	}
	else {
		printf("Area = %.1f\n", area);
	}
	
	return 0;
	}


