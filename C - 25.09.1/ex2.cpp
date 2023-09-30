#include <stdio.h>
#include <locale.h>

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
? para homens: (72.7 * h) – 58;
? para mulheres: (62.1 * h) – 44.7
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	//variaveis
	char sexo;
	float altura, calc_homem, calc_mulher;
	
	//entrada
	printf("Digite o sexo: ");
	scanf("%c", &sexo);

	printf("Digite a altura: ");
	scanf("%f", &altura);

	//calculo
	calc_homem = (72.7 * altura) - 58;
	calc_mulher = (62.1 * altura) - 44.7;
	
	//saida
	switch (sexo) {
		
		//homem
        case 'H':
            printf("O peso ideal é: %.f", calc_homem);
            break;
        case 'h':
            printf("O peso ideal é: %.f", calc_homem);
        	break;
        	
        //mulher
        case 'M':
        	printf("O peso ideal é: %.f", calc_mulher);
        	break;
        case 'm':
			printf("O peso ideal é: %.f", calc_mulher);
        	break;
}
	return 0;
}


