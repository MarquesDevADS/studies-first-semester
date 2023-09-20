#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//variaveis
    int a, b, c, maior, maiorab;

    //leitura
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    //calculo
    maiorab = (a + b + abs(a - b)) / 2;

    //tentando encontrar a porra do maior
    maior = (maiorab + c + abs(maiorab - c)) / 2;

    //saida
    printf("%i eh o maior\n", maior);

    return 0;
}

