/******************************************************************************
Um cinema oferece ingressos a preços diferentes para crianças, adultos e idosos. 
Escreva um programa que leia a idade de uma pessoa e imprima o preço do ingresso. 

Criança até 12 anos preço do ingresso 5,00 
Adulto maior que 12 (paga valor de adulto) e menor que 60, preço do ingresso 10,00 
Idoso maior ou igual a 60 preço do ingresso 8,00
*******************************************************************************/

#include <stdio.h>
#ifndef Ex3
#define Ex3

int main()
{
    float n1, n2, n3, r;
    char string[35];

    printf("\n");
    printf("Digite o nome do Aluno: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    printf("Digite as notas do Aluno: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    r = (n1 + n2 + n3) / 3;

    if (r >= 7)
    {
        printf("O Aluno %s, de média %.2f, foi aprovado!\n", string, r);
    }
    else
    {
        printf("O Aluno %s, de média %.2f, foi reprovado!\n", string, r);
    }

    return 0;
}
#endif