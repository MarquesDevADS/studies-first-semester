#include <stdio.h>

int main (){
	
	//variavel dist�ncia
	int	x;
	
	//variavel total de combust�vel  
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


