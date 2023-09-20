#include <stdio.h>
#include <locale.h>

int main (){

	//variaveis
    double raio, volume;
    
    //valor constante de pi
    const double pi = 3.14159;

    //valor da esfera
    scanf("%lf", &raio);

    //calculo volume
    volume = (4.0/3) * pi * raio * raio * raio;

    // saida
    printf("VOLUME = %.3lf\n", volume);

	return 0;
	}


