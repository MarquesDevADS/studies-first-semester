#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int nota1, nota2, nota3, calc;

	//entrada
	printf("Digite a primeira nota: ");
	scanf("%i", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%i", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%i", &nota3);
	
	//calculo
	calc = (nota1 + nota2 + nota3) /3;
	
	//saida
	if (calc>=7) {
		printf("Aprovado");
	}
	
	else {
		printf("Reprovado");
	}


	return 0;
}


