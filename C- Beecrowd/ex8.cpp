#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int codigo1, codigo2, nump1, nump2;
	float valor1, valor2, total;
	
	//primeira peça
	scanf("%i", &codigo1);
	scanf("%i", &nump1);
	scanf("%f", &valor1);
	
	//segunda peça
	scanf("%i", &codigo2);
	scanf("%i", &nump2);
	scanf("%f", &valor2);
	
	//calculo
	total = (nump1*valor1) + (nump2*valor2);
	
	//saida
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	
	











	return 0;
	}


