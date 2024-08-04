/******************************************************************************
Faça um programa que leia dois vetores de 10 números e imprima o produto escalar entre eles.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex8
#define L4Ex8

#define TAM 10
#define TAM2 10

int main(){

    int vet1[TAM], vet2[TAM2], prodesc = 0;

    printf ("Insira dez valores inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf ("%d", &vet1[i]);
    }

    printf ("\n\nInsira mais dez valores inteiros: ");

    for (int i = 0; i < TAM2; i++){
        scanf ("%d", &vet2[i]);
    }

    printf ("\nSequência 1:    ");
    for (int i = 0; i < TAM; i++){
        printf ("%d    ", vet1[i]);
    }

    printf ("\nSequência 2:    ");
    for (int i = 0; i < TAM2; i++){
        printf ("%d    ", vet2[i]);
    }

    for (int i = 0; i < TAM; i++){
        prodesc = prodesc + (vet1[i] * vet2[i]);
    }

    printf ("\n\nO produto escalar é igual a: %d", prodesc);

    return 0;

}

#endif