/******************************************************************************
Escreva um programa que solicita ao usuário que insira 10 números inteiros, armazena-os em um array e, em seguida, determina e exibe o maior número entre os inseridos.
*******************************************************************************/

#include <stdio.h>
#ifndef L3Ex2
#define L3Ex2

#include <stdio.h> 

int main() 
{ 
    int num[10]; 
    int i, maior; 

    printf("Digite 10 números:\n"); 

    for (i = 0; i < 10; i++) 
    { 
        scanf("%d", &num[i]); 
    } 

    maior = num[0]; 

    for (i = 1; i < 10; i++) 
    { 
        if (num[i] > maior) 
        { 
            maior = num[i]; 
        } 
    } 

    printf("Maior número no vetor: %d\n", maior); 

    return 0; 
}

#endif