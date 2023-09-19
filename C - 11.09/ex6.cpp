#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	int numero, cont=0, calc;
	
	//entrada
	printf("Digite um valor para a tabuada: ");
	scanf("%i", &numero);
	
	//calculo
	for ( cont=0; cont<=10; cont++){
		calc = numero * cont;
		
	//saida
    printf("%i x %i = %i\n", numero, cont, calc);
        
    }



	return 0;
}


