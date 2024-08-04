/******************************************************************************
Desenvolva um programa que leia o turno de um aluno (M - Matutino, V - Vespertino, N - Noturno) e imprima a mensagem "Bom dia!" para o turno matutino, "Boa tarde!" para o vespertino e "Boa noite!" para o noturno. Utilize else if para checar outras condições. 
*******************************************************************************/

#include <stdio.h> 
#ifndef Ex5
#define Ex5

int main() 
{ 
    char turno; 

    printf("De qual turno você pertence? \n m -> Matutino \n v -> Verperino \n n -> Noturno \n"); 
    scanf(" %c", &turno); 

    if (turno == 'm' || turno == 'M') { 
        printf("Bom dia! Flor do Dia!"); 
    } 
    else if (turno == 'v' || turno == 'V') { 
        printf("Boa tarde! Morador de Marte!"); 
    } 
    else if (turno == 'n' || turno == 'N') { 
        printf("Boa noite! NÃO OLHE PARA TRÁS!!"); 
    } 

    return 0; 
}
#endif