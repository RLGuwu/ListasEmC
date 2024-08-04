/******************************************************************************
3.	Faça um programa que leia um vetor de 10 números e imprima a média aritmética dos elementos
*******************************************************************************/

#include <locale.h>
#include <stdio.h>
#ifndef L4Ex4
#define L4Ex4

#define TAM 10

int main(){

    int vetor[TAM], num, troca;

    printf("Insira 10 números: ");

    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    do{
        troca = 0;
        for (int i = 0; i < TAM-1; i++){
            if (vetor[i] > vetor[i + 1]){
                num = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = num;
                troca = 1;
            }
        }
    }while (troca == 1);

    printf("\n\nVetor organizado de forma crescente: ");
    
    for (int i = 0; i < TAM; i++){
        printf("\t%d", vetor[i]);
    }

    return 0;

}


#endif