/******************************************************************************
Escreva um programa que calcule a soma dos números ímpares de 1 a 100. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex8
#define L2Ex8

#include <stdio.h> 

#include <stdio.h> 

int main() 
{ 
    int soma = 0, i; 

    printf("Somarei todos os números ímpares de 1 a 100\n\n"); 

    for (i = 1; i <= 100; i++) 
    { 
        if (i % 2 != 0) 
        { 
            soma += i; 
        } 
    } 

    printf("O resultado é: %d\n", soma); 
    return 0; 
}

#endif