/******************************************************************************
Um aluno precisa ter média igual ou superior a 7 para ser aprovado. 
Escreva um programa que leia as notas de um aluno (primeira, segunda e terceira nota) e imprima se ele foi aprovado ou reprovado. 
*******************************************************************************/

#include <stdio.h>
#ifndef Ex2
#define Ex2

int main()
{
    float n1, n2, n3, r;
    char string[35];

    printf("\n");
    printf("Digite o nome do Aluno: ");
    fgets(string, sizeof(string), stdin);
    printf("Digite as notas do Aluno: ");
    scanf("%f%f%f", &n1, &n2, &n3);
        r = ((n1 + n2 + n3) / 3);

    if (r >= 7)
    {
    printf("O Aluno %s, de média %.2f, foi aprovado!", string, r);
    }
    else
    {
        printf("O Aluno %s, de média %.2f, foi reprovado!", string, r);
    }

    return 0;
}
#endif