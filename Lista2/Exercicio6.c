/******************************************************************************
Escreva um programa que leia um número e imprima a soma dos seus divisores (exceto o próprio número). 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex6
#define L2Ex6

#include <stdio.h> 

int main() 
{ 
    int soma = 0, num, i; 

    printf("Digite um número: "); 
    scanf("%d", &num); 

    printf("Processo:\n"); 

    for (i = 1; i < num; i++) 
    { 
        if (num % i == 0) 
        { 
            soma += i; 
        } 
        printf("--> %d\n", soma); 
    } 

    printf("A soma dos divisores de %d é igual a: %d\n", num, soma); 
    return 0; 
}


#endif