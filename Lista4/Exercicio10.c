/******************************************************************************
Faça um programa que leia um vetor de 10 números e imprima o maior e o menor número do vetor.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex10
#define L4Ex10

#define TAM 10

int main()
{

    int cont;
    float mA, vetor[TAM];

    mA = 0;

    printf("Insira 10 números inteiros: ");

    cont = 0;
    for (int i = 1; i < TAM; i++){
        scanf("%f", &vetor[i]);
        cont += vetor[i];
    }

    mA = cont/TAM;

    printf ("\n\nA média aritmética dos valores é igual a: %.2f", mA);
    
    return 0;

}


#endif