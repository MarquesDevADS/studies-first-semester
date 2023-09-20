#include <stdio.h>

int main (){
	
	//variavel distância
	int	x;
	
	//variavel total de combustível  
	float y;
	
	//variavel do calculo
	float calc;
	
	//entrada
	scanf("%i", &x );
	scanf("%f", &y);
	
	calc = x/y;
	
	//saida
	printf("%.3f km/l\n", calc);
	
	return 0;
	}


