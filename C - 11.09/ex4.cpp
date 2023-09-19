#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float km_inicial, km_final, combustivel_volume, consumo;

	//entrada
	printf("Digite KM/incial: ");
	scanf("%f", &km_inicial);
	
	printf("Digite KM/final: ");
	scanf("%f", &km_final);

	printf("Digite o volume de combustivel: ");
	scanf("%f", &combustivel_volume);
	//calculo
	consumo = (km_final - km_inicial)/combustivel_volume;
		
	
	//saida
	printf("A média de combustivel gasto por KM rodado é: %.1f\n", consumo);


	return 0;
}


