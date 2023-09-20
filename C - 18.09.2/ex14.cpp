#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    char tipo;
	float litro, desconto_3, desconto_5, desconto_4, desconto_6;
    const float gasolina = 6.50, alcool = 6.00; 

	//entrada
    printf("Digite o tipo de combustivel (A para alcool, G para gasolina): ");
    scanf("%c", &tipo);

    printf("Digite a quantidade de litros vendidos: ");
    scanf("%f", &litro);


	//calculo
    desconto_3 = litro * alcool * 97 / 100;
	    
    desconto_5 = litro * alcool * 95 / 100;
        
    desconto_4 = litro * gasolina * 96 / 100;
        
    desconto_6 = litro * gasolina * 94 / 100;
	
    //desenvolvimento
    if (tipo == 'A' || tipo == 'a') {
			if (litro <= 20) {
				printf("O valor final com 3%% de desconto será de: R$ %.2f\n", desconto_3);
			} else {
                printf("O valor final com 5%% de desconto será de: R$ %.2f\n", desconto_5);
            }
		}
		else if (tipo == 'G' || tipo == 'g') {
            if (litro <= 20) {
                printf("O valor final com 4%% de desconto será de: R$ %.2f\n", desconto_4);
            } else {
                printf("O valor final com 6%% de desconto será de: R$ %.2f\n", desconto_6);
            }
        } else {
            printf("Tipo de combustível inválido.\n");
        }

    return 0;
}

