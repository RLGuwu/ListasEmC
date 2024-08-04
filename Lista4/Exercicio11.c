/******************************************************************************
Faça um programa que leia um vetor de 10 números e troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo e assim por diante.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex11
#define L4Ex11

#define TAM 10

int main(){

    int vetor[TAM];

    printf ("Insira dez valores inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf ("%d", &vetor[i]);
    }

    printf ("\n\nVetor original: ");
    for (int i = 0; i < TAM; i++){
        printf ("%d   ", vetor[i]);
    }

    printf ("\n\nVetor inverso:  ");
    
    for (int i = 9; i >= 0; i--){
        printf ("%d   ", vetor[i]);
    }

    return 0;
}

#endif