#include <stdio.h>
#include <locale.h>

/*
Faça um programa em C que leia o dia e o mês de nascimento de uma pessoa e o
seu nome, após escreva o Nome e o signo dela de acordo com a tabela abaixo (a
tabela não será exibida):
Nascidos entre: Signo:
20/03 a 20/04 Áries
21/04 a 20/05 Touro
21/05 a 20/06 Gêmeos
21/06 a 21/07 Câncer
22/07 a 22/08 Leão
23/08 a 22/09 Virgem
23/09 a 22/10 Libra
23/10 a 21/11 Escorpião
22/11 a 21/12 Sagitário
22/12 a 20/01 Capricórnio
21/01 a 18/02 Aquário
19/02 a 19/03 Peixes
*/


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	//variavel
    int dia, mes;
    char nome[50];

    //entrada
    printf("Digite o dia de nascimento: ");
    scanf("%i", &dia);

    printf("Digite o mês de nascimento (em números): ");
    scanf("%i", &mes);

    printf("Digite o nome: ");
    scanf("%s", nome);

	
    //desenvolvimento
    char* signo;
    
    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 18))
        signo = "Aquário";
        
	else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 19))
        signo = "Câncer";
        
    else if ((mes == 3 && dia >= 20) || (mes == 4 && dia <= 20))
        signo = "Áries";
        
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
        signo = "Touro";
        
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        signo = "Gêmeos";
        
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21))
        signo = "Câncer";
        
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22))
        signo = "Leão";
        
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        signo = "Virgem";
        
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        signo = "Libra";
        
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        signo = "Escorpião";
        
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        signo = "Sagitário";
        
    else if ((mes == 12 && dia >= 22) || (mes == 01 && dia <= 21))
        signo = "Capricórnio";
    else
        signo = "As informações digitadas estão incorretas";
    
    //saida
    printf("\nNome: %s\n", nome);
    printf("Signo: %s\n", signo);

    return 0;
}
