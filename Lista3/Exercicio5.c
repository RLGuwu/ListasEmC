/******************************************************************************
Peça ao usuário digitar 10 números inteiros que o programa irá ordenar de forma crescente.
*******************************************************************************/

#include <stdio.h>
#ifndef L3Ex5
#define L3Ex5

#define SIZE 10 

int main(void) 
{ 
    int a[SIZE]; 
    int pass, i, hold; 

    printf("Ordenarei os números digitados em ordem crescente:\n"); 

    for (i = 0; i < SIZE; i++) 
    { 
        scanf("%d", &a[i]); 
    } 

    printf("\nItens dados na ordem original:\n"); 

    for (i = 0; i < SIZE; i++) 
    { 
        printf("%4d", a[i]); 
    } 

    /* Bubble Sort */ 
    for (pass = 1; pass < SIZE; pass++) 
    { 
        for (i = 0; i < SIZE - 1; i++) 
        { 
            if (a[i] > a[i + 1]) 
            { 
                hold = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = hold; 
            } 
        } 
    } 

    printf("\nVetor ordenado de forma crescente:\n"); 

    for (i = 0; i < SIZE; i++) 
    { 
        printf("%4d", a[i]); 
    } 

    printf("\n"); 

    return 0; 
}

#endif