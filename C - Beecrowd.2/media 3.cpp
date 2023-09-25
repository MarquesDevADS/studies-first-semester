#include <stdio.h>

// Calcule a média com pesos 2, 3, 4 e 1
int main (){

	//variavel
	float n1, n2, n3, n4, media, exame, media_final;

	//entrada
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	//calculo
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	
	//desenvolvimento
	if (media  >= 5.0 && media <= 6.9) {
    	printf("Media: %.1f\nAluno em exame.\n", media);
    	scanf("%f", &exame);
    	printf("Nota do exame: %.1f\n", exame);
    	media_final = (exame + media) / 2;
    		if (media_final >= 5.00) {
    			printf("Aluno aprovado.\nMedia final: %.1f\n", media_final);
			} else {
				printf("Aluno reprovado.\nMedia final: %.1f\n", media_final);
			}	}
	if (media >= 7.0 ) {
		printf("Media: %.1f\nAluno aprovado.\n", media);
	}
	if (media < 5.0) {
		printf("Media: %.1f\nAluno reprovado.\n", media);
	}
	
	return 0;
	}


