/******************************************************************************
Faça um programa que leia um vetor de 10 números e imprima o maior número e a sua posição.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex1
#define L4Ex1

#define TAM 10

int main()
{

    int vetor [TAM], posicao, maior;

    printf("Insira 10 digitos: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;
    
    for (int i = 0; i < TAM; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }

    printf ("\nVetor:");
    for (int i = 0; i < TAM; i++){
        printf ("\t%d", vetor[i]);
    }

    printf ("\n\nO maior número é %d, que está na %d° posição.", maior, posicao+1);

    return 0;

}


#endif