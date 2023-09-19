#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	float conta, amigos, paga_80, restante1, paga_50, restante2, calc1, calc2, paga_igual;

	//entrada
	printf("Digite o valor da conta: ");
	scanf("%f", &conta);

	printf("Digite a quantidade de amigos: ");
	scanf("%f", &amigos);
	
	
	//calculo
	paga_80 = conta * 80 / 100;
	restante1 = conta - paga_80;
	calc1 = restante1 / amigos;
	
	paga_50 = conta / 2;
	restante2 = conta - paga_50;
	calc2 = restante2 / amigos;
	
	paga_igual = conta / (amigos + 1);
	

	//saida
	if (conta < 300) {
		printf("João vai pagar %.2f, e os amigos vão pagar %.2f cada", paga_80, calc1);
	} 
	
	if (conta > 300 && conta < 600) {
		printf("João vai pagar %.2f, e os amigos vão pagar %.2f cada", paga_50, calc2);
	}

	if (conta >= 600) {
		printf("Cada um vai pagar %.2f", paga_igual);
	} 

	return 0;
}


