#include <stdio.h>

int main (){

	//variavel
	int codigo, quantidade;
    float total, preco;
	
	//entrada
	scanf("%i%i", &codigo, &quantidade);

	//desenvolvimento
	if (codigo == 1) {
    		preco = 4.00;
    		total = preco * quantidade;
    		printf("Total: R$ %.2f\n", total);
		}
		if (codigo == 2) {
    		preco = 4.50;
    		total = preco * quantidade;
    		printf("Total: R$ %.2f\n", total);
		}
		if (codigo == 3) {
    		preco = 5.00;
    		total = preco * quantidade;
    		printf("Total: R$ %.2f\n", total);
		}
		if (codigo == 4) {
    		preco = 2.00;
    		total = preco * quantidade;
    		printf("Total: R$ %.2f\n", total);
		}
		if (codigo == 5) {
    		preco = 1.50;
    		total = preco * quantidade;
    		printf("Total: R$ %.2f\n", total);
		}

	return 0;
	}


