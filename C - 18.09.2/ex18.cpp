#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

	//variavel
	float saldo, divida;
    
    //entrada
    printf("Digite o saldo de Josefina: ");
    scanf("%f", &saldo);
   	
    printf("Digite a dívida: ");
    scanf("%f", &divida);
   	
	//desenvolvimento
    if (saldo < divida) {
		printf("A dívida não pode ser paga.\n");
    } else if (saldo >= divida && saldo < divida * 1.03) {
        printf("Saldo suficiente para pagar até o dia 10.\n");
    } else if (saldo >= divida && saldo < divida * 1.05) {
        printf("Saldo suficiente para pagar até o dia 20.\n");
    } else {
        printf("Saldo suficiente para pagar em qualquer dia.\n");
    }


	return 0;
	}


