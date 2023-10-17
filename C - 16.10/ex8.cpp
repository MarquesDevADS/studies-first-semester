#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia as seguintes informa��es de um grupo
indeterminado de produtos (c�digo, quantidade, tipo e valor), sendo que o
programa termina quando o c�digo do produto for zero. Fazer a valida��o
de todos os dados de entrada conforme tabela abaixo. No final, mostrar a
quantidade de produtos cadastrados, o valor total de produtos perec�veis e
n�o perec�veis.
C�digo do produto: >0
Quantidade: >0 e < 100
Tipo: 1- Perec�vel 2- N�o Perec�vel 3-Congelado
Valor: >0
*/

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    int codigo, quantidade, tipo, total_produtos = 0;
    float valor, total_pereciveis = 0.0, total_nao_pereciveis = 0.0, total_congelados = 0.0;

	//desenvolvimento
    do {
        printf("Digite o c�digo do produto (0 para sair): ");
        scanf("%i", &codigo);

        if (codigo != 0) {
            printf("Digite a quantidade do produto: ");
            scanf("%i", &quantidade);

            printf("Digite o tipo do produto (1- Perec�vel, 2- N�o Perec�vel, 3- Congelado): ");
            scanf("%i", &tipo);

            printf("Digite o valor do produto: ");
            scanf("%f", &valor);

            total_produtos++;

            if (tipo == 1) {
                total_pereciveis += valor * quantidade;
            } else if (tipo == 2) {
                total_nao_pereciveis += valor * quantidade;
            }else {
            	 total_congelados += valor * quantidade;
			}
        }
    } while (codigo != 0);

    printf("Quantidade de produtos cadastrados: %i\n", total_produtos);
    printf("Valor total de produtos perec�veis: %.2f\n", total_pereciveis);
    printf("Valor total de produtos n�o perec�veis: %.2f\n", total_nao_pereciveis);
    printf("Valor total de produtos congelados: %.2f\n", total_congelados);
    
    return 0;
}

