/******************************************************************************
Faça um programa que leia um vetor de 10 números e imprima o maior e o menor número do vetor.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex9
#define L4Ex9

#define TAM 10

int main()
{

    int vetor [TAM], maior, menor;

    printf("Insira 10 valores inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for (int i = 0; i < TAM; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    menor = vetor[0];
    for (int i = 0; i < TAM; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf ("\nVetor:");
    for (int i = 0; i < TAM; i++){
        printf ("    %d", vetor[i]);
    }
    printf ("\n\n->> O maior número é %d", maior);
    printf ("\n->> O menor número é %d", menor);

    return 0;

}

#endif