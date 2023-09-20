#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");

	//variavel
	float idade1, idade2, idade3, idade4, idade5, media;
    	
    //entrada
    printf("Digite as 5 idades: ");
    scanf("%f%f%f%f%f", &idade1, &idade2, &idade3, &idade4, &idade5);
    
	//calculo	
    media = (idade1 + idade2 + idade3 + idade4 + idade5) / 5;
    
	//desenvolvimento	
    if (media < 25) {
    	printf("Turma Jovem\nAluno 1: %.f\nAluno 2: %.f\nAluno 3: %.f\nAluno 4: %.f\nAluno 5: %.f\n", idade1, idade2, idade3, idade4, idade5);
	}
	if (media >= 25 && media <= 40) {
    	printf("Turma Adulta\nMedia de idade: %.f\n", media);
	}
	if (media > 40) {
    	printf("Turma Idosa\nAluno 1: %.f\nAluno 2: %.f\nAluno 3: %.f\nAluno 4: %.f\nAluno 5: %.f\nMedia de idade: %.f\n", idade1, idade2, idade3, idade4, idade5, media);
	}
	







	return 0;
	}


