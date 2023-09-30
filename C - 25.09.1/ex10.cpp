#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia o destino do passageiro, se a viagem incluir retorno
(ida e volta), informar o valor da passagem de acordo com a tabela a seguir:
Destino IDA IDA e VOLTA
Região Norte R$500,00 R$900,00
Região
Nordeste
R$350,00 R$650,00
Região
Centro-Oeste
R$350,00 R$600,00
Região Sul R$300,00 R$550,00 
*/

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    char destino;
    int ida_e_volta;
    double valor_passagem;

	//entrada
    printf("Digite o destino do passageiro A (Norte), B (Nordeste), C (Centro-Oeste), ou D (Sul): ");
    scanf(" %c", &destino);

    printf("Digite 1 para viagem de ida e volta, ou 0 para viagem só de ida: ");
    scanf("%i", &ida_e_volta);

	//desenvolvimento
    switch (destino) {
        case 'A':
            valor_passagem = 300.0;
            break;
        case 'B':
            valor_passagem = 250.0;
            break;
        case 'C':
            valor_passagem = 200.0;
            break;
        case 'D':
            valor_passagem = 150.0;
            break;
        default:
            printf("Destino inválido.\n");
            return 1;
    }
	
    if (ida_e_volta == 1) {
        valor_passagem *= 2; // dobra o valor para viagem de ida e volta
    }

    printf("O valor da passagem é: R$ %.2lf\n", valor_passagem);

    return 0;
}

