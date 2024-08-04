/******************************************************************************
Leia um conjunto de números (terminado por zero) e imprima a soma dos números pares. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex5
#define L2Ex5

#include <stdio.h> 

int main() 
{ 
    int soma = 0, num; 

    printf("Digite um número (0 para finalizar): "); 
    scanf("%d", &num); 

    while (num != 0) 
    { 
        if (num % 2 == 0) 
        { 
            soma += num; 
        } 
        printf("Digite um número (0 para finalizar): "); 
        scanf("%d", &num); 
    } 

    printf("A soma dos números pares é igual a: %d\n", soma); 
    return 0; 
}

#endif