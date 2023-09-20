#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

	//variavel
	float quantidade, calc1, calc2;
	const float maca_menos12 = 0.80, maca_mais12 = 0.50;
	
	//entrada
	printf("Digite a quantidade de maças: ");
	scanf("%f", &quantidade);

	//calculo
	calc1 = quantidade * maca_menos12;
	
	calc2 = quantidade * maca_mais12;

	//desenvolvimento
	if (quantidade < 12) {
		printf("O valor dessa quantidade de maças será: %.2f\nCada maça saira por %.2f", calc1, maca_menos12);
	}
	
	else {
		printf("O valor dessa quantidade de maças será: %.2f\nCada maça saira por %.2f", calc2, maca_mais12);
	}
	




	return 0;
}


