#include <stdio.h>

int main () {
	
	//variaveis
	int num;
	double numh, valorh, salario;
	
	//número funcionario
	scanf("%i", &num);
	
	//horas trabalhadas
	scanf("%lf", &numh);
	
	//valor por horas
	scanf("%lf", &valorh);
	
	//calculo
	salario = numh*valorh;	
	
	//saida
	printf("NUMBER = %i\n",num);
	printf("SALARY = U$ %.2lf\n", salario);

	return 0;
}

