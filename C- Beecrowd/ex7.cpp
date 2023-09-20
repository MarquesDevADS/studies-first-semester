#include <stdio.h>

int main() {
	
	//variaveis
    char nome[50];
    double salariof, totalv, comissao, salariot;

    //nome do vendedor
    scanf("%s", nome);

    //salario fixo
    scanf("%lf", &salariof);

    //total de vendas 	
    scanf("%lf", &totalv);

    //calculo da comissao
    comissao = 0.15*totalv;

    //calculo salario
    salariot = salariof + comissao;

    //saida
    printf("TOTAL = R$ %.2lf\n", salariot);
    return 0;
}

