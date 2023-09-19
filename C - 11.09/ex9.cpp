#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float comprimento, largura, altura, area_parede, quantidade_caixas;

	//entrada
	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);
	
	printf("Digite a largura: ");
	scanf("%f", &largura);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);

	//calculo
	area_parede = 2 * altura * (comprimento + largura);
	
	quantidade_caixas = area_parede / 1.5;

	//saida
	printf("A quantidade de caixas necessarias: %.3f", quantidade_caixas);

	return 0;
}


