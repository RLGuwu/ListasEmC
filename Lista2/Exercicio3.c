/******************************************************************************
Escreva um programa que leia um número e diga se ele é positivo, negativo ou zero. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex3
#define L2Ex3

#include <stdio.h> 

int main() 
{ 
    int n1; 

    printf("Digite um número: "); 
    scanf("%d", &n1); 

    if (n1 == 0) 
    { 
        printf("Número é 0"); 
    } 
    else if (n1 > 0) 
    { 
        printf("Número é positivo"); 
    } 
    else 
    { 
        printf("Número é negativo"); 
    } 

    return 0; 
}

#endif