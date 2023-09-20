#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

	//varivel
	int gremio, inter, calc1, calc2;

	//entrada
	printf("Quantos gols o Grêmio fez: ");
	scanf("%i", &gremio);

	printf("Quantos gols o Internacional fez: ");
	scanf("%i", &inter);
	
	//calculo
	calc1 = gremio - inter;
	calc2 = inter - gremio;
		
	//desenvolvimento
	if (gremio > inter) {
		printf("Grêmio é o vencedor\nFez %i gols a mais", calc1);
	}
	if (inter > gremio) {
		printf("Internacional é o vencedor\nFez %i gols a mais", calc2);
	}
	if (gremio == inter) {
		printf("EMPATE POR %i A %i", gremio, inter);
	}
	







	return 0;
	}


