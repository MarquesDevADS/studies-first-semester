#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	int num1,num2,PROD;
	
	scanf("%i", &num1);
	
	scanf("%i", &num2);

	PROD = num1*num2;
	
	printf("PROD = %i\n",PROD);
	
	return 0;
}
