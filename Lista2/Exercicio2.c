/******************************************************************************
Leia um número inteiro e imprima sua tabuada (de 1 a 10). 
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L2Ex2
#define L2Ex2

int main() 
{ 
    int i, tabu; 
    setlocale(LC_ALL, "Portuguese"); 

    printf("Digite um numero para olhar sua tabuada: "); 
    scanf("%d", &tabu); 

    for (i = 1; i <= 10; i++) 
    { 
        printf("%d x %d = %d\n", tabu, i, tabu * i); 
    } 

    return 0; 
}

#endif