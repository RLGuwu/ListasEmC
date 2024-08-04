/******************************************************************************
Faça um programa que leia um vetor de 10 números e imprima o menor número e a sua posição.
*******************************************************************************/

#include <locale.h>
#include <stdio.h>
#ifndef L4Ex2
#define L4Ex2

#define TAM 10

int main()
{

    int vetor [TAM], posicao, menor;

    printf("Insira 10 digitos: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    posicao = 0;
    
    for (int i = 0; i < TAM; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }

    printf ("\nVetor:");
    for (int i = 0; i < TAM; i++){
        printf ("\t%d", vetor[i]);
    }

    printf ("\n\nO menor número é %d, que está na %d° posição.", menor, posicao+1);

    return 0;

}

#endif