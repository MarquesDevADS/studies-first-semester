#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int A, calc, calc2;

	//entrada
	printf("Digite um n�mero: ");
	scanf("%i", &A);

	//calculo
	calc = A - 1;
	calc2 = A + 1;

	//saida
	printf("O antecessor �: %i\nO sucessor �: %i", calc, calc2);

	return 0;
}
	

