/******************************************************************************
Escreva um programa que leia a idade e o sexo de várias pessoas e imprima a média de idade das mulheres. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex10
#define L2Ex10

#include <stdio.h> 
#include <ctype.h> 

int main() 
{ 
    int idade, i = 0, soma = 0; 
    char sexo, sair; 
    float media; 

    do 
    { 
        printf("Digite o sexo (F/M): \t"); 
        scanf(" %c", &sexo); 
        sexo = toupper(sexo); 

        printf("Digite a idade: \t"); 
        scanf("%d", &idade); 

        if (sexo == 'F') 
        { 
            soma += idade; 
            i++; 
        } 

        printf("Deseja executar o programa novamente? (s/n)\n"); 
        scanf(" %c", &sair); 
        sair = toupper(sair); 

    } while (sair == 'S'); 

    if (i > 0) 
    { 
        media = (float) soma / i; 
        printf("A média de idade entre as mulheres é %.1f\n", media); 
    } 
    else 
    { 
        printf("Nenhuma idade de mulher foi registrada.\n"); 
    } 

    return 0; 
}


#endif