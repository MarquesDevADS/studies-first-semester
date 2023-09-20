#include <stdio.h>

int main() {
	
	//variavel e sua entrada
    int idadeD;
    scanf("%i", &idadeD);

    int anos = idadeD / 365;
    //calcula o resto dos dias após subtrair os anos
    idadeD %= 365;  

    int meses = idadeD / 30;
    int dias = idadeD % 30;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
    

    return 0;
}

