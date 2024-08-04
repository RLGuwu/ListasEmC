/******************************************************************************
Escreva um programa que solicita ao usuário que insira 10 números inteiros, armazena-os em um array e, em seguida, determina e exibe o menor número entre os inseridos.
*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
#ifndef L3Ex3
#define L3Ex3 

int main() 
{ 
    int num[10]; 
    int i, menor; 

    printf("Digite 10 números:\n"); 

    for (i = 0; i < 10; i++) 
    { 
        scanf("%d", &num[i]); 
    } 

    menor = num[0]; 

    for (i = 1; i < 10; i++) 
    { 
        if (num[i] < menor) 
        { 
            menor = num[i]; 
        } 
    } 

    printf("Menor número no vetor: %d\n", menor); 

    return 0; 
}


#endif