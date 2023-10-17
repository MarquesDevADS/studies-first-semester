#include <stdio.h>
#include <locale.h>

/*
Um operário que está construindo um muro, consegue erguer o muro 6 cm
por dia. Calcule e escreva quantos dias serão necessários para que o muro
atinja o tamanho desejado pelo proprietário
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variavel
	int tamanho, dias;
	
	//entrada
	printf("Digite o tamanho do muro (em CENTIMETROS): ");
	scanf("%i", &tamanho);
	
	//calculo
	dias = tamanho / 6;
	
	//saida
	printf("Ele levara %i dias", dias);
	


	return 0;
}


