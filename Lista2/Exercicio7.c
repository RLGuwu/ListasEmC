/******************************************************************************
Leia um conjunto de números (terminado por zero) e imprima o maior e o menor valor. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex7
#define L2Ex7

#include <stdio.h> 

int main() 
{ 
    int num, maior = 0, menor = 0; 

    printf("Digite um número (0 para finalizar): "); 

    do 
    { 
        scanf("%d", &num); 

        if (num != 0) 
        { 
            if (menor == 0 || num < menor) 
            { 
                menor = num; 
            } 
            if (num > maior) 
            { 
                maior = num; 
            }
            printf("Digite um número (0 para finalizar): "); 
        } 
    } while (num != 0); 

    printf("O número maior é: %d\n", maior); 
    printf("O número menor é: %d\n", menor); 

    return 0; 
}


#endif