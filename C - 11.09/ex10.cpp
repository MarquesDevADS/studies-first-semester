#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float distancia_percorrida, tempo_h, calc; 
	
	//entrada
	printf("Digite a dist�ncia percorrida: ");
	scanf("%f", &distancia_percorrida);
	
	printf("Digite o tempo que levou: ");
	scanf("%f", &tempo_h);

	//calculo
	calc = distancia_percorrida / tempo_h;

	//saida
	printf("A velocidade m�dia ser�: %.fkm/h", calc);


	return 0;
}


