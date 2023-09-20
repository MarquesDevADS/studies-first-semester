#include <stdio.h>
#include <math.h>

int main() {
	
	//variaveis
    double A, B, C;
    double pi = 3.14159;

    //leitura
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    //calculo
    double triangulo = (A * C) / 2.0;
    double circulo = pi * pow(C, 2);
    double trapezio = ((A + B) * C) / 2.0;
    double quadrado = pow(B, 2);
    double retangulo = A * B;

	//saida
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}

