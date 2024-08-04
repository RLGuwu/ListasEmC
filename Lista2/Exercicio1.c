/******************************************************************************
Escreva um programa que imprima os números pares de 1 a 20:
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex1
#define L2Ex1

int main() 
{ 
    int n1, n2;

    while (n1 <= 19) 
    { 
        n1 += 1; 
        if (n1 % 2 == 0) 
        { 
            n2 += n1; 
        } 
    } 

    printf("A soma de todos os números pares é igual a: %d", n2); 

    return 0; 
} 
#endif