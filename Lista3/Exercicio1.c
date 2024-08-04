/******************************************************************************
Este código é um programa simples que solicita ao usuário a entrada de 10 valores inteiros, os armazena em um array e, em seguida, exibe esses valores com uma formatação clara.
*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#ifndef L3Ex1
#define L3Ex1

#define B 10 

int main() 
{ 
    int x; 
    int valores[B]; 

    for (x = 0; x < B; x++) 
    { 
        printf("%d° valor: ", x + 1); 
        scanf("%d", &valores[x]); 
    } 

    puts("\nValores Armazenados:"); 

    for (x = 0; x < B; x++) 
    { 
        printf("-> Valor[%d]: %d\n", x+1, valores[x]); 
    } 

    return 0; 
}
#endif
