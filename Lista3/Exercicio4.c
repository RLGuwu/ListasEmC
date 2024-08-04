/******************************************************************************
Solicite ao usuário que digite 10 números inteiros e calcule a média aritmética entre eles. 
*******************************************************************************/

#include <stdio.h>
#ifndef L3Ex4
#define L3Ex4

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

#define B 10 

int main() 
{ 
    int vetor[B]; 
    int x; 
    int soma = 0; 
    float media; 

    printf("Digite %d números para armazenar no vetor e calcular a média aritmética:\n", B); 

    for (x = 0; x < B; x++) 
    { 
        printf("%d° valor: ", x + 1); 
        scanf("%d", &vetor[x]); 
        soma += vetor[x]; 
    } 

    media = (float)soma / B; 

    printf("Média aritmética: %.2f\n", media); 

    return 0; 
}


#endif