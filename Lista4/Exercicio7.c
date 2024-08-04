/******************************************************************************
Faça um programa que leia dois vetores de 10 números e imprima a soma dos elementos correspondentes.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex7
#define L4Ex7

#define TAM 10
#define TAM2 10
#define TAM3 10

int main(){

    int vet1[TAM], vet2[TAM2], soma;

    printf ("Insira dez valores inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf ("%d", &vet1[i]);
    }

    printf ("\n\nInsira mais dez valores inteiros: ");

    for (int i = 0; i < TAM2; i++){
        scanf ("%d", &vet2[i]);
    }

    printf ("\n1° Sequência =    ");
    for (int i = 0; i < TAM; i++){
        printf ("%d    ", vet1[i]);
    }

    printf ("\n2° Sequência =    ");
    for (int i = 0; i < TAM2; i++){
        printf ("%d    ", vet2[i]);
    }
    
    printf("\n");

    for (int i = 0; i < TAM3; i++){
        soma = vet1[i] + vet2[i];
        printf ("\n-> %d + %d = %d", vet1[i], vet2[i], soma);
    }

    return 0;

}

#endif