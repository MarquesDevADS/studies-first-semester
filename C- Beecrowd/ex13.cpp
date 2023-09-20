#include <stdio.h>
#include <math.h>
int main (){

	//variaveis
	float x1, y1;
	float x2, y2;
	float calc;
	
	//entradas
	scanf("%f""%f", &x1, &y1); 
	scanf("%f""%f", &x2, &y2);
	
	//calculo da distância
	calc = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	
	//saida
	printf("%.4f\n", calc);
	
	return 0;
	}


