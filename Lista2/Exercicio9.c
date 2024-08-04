/******************************************************************************
Leia um número inteiro e imprima a sua sequência de Fibonacci (até o 10º termo). 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex9
#define L2Ex9

#include <stdio.h> 

int main() 
{ 
    int num1 = 0, num2 = 1, soma, i; 

    i = 1; 
    printf("Farei a sequência de Fibonacci utilizando seus números\n(se você quer a sequência real, digite 1):\n"); 
    scanf("%d", &num1); 

    if (num1 == 1) 
    {
        num1 = 0;
        num2 = 1;
    } 

    do 
    { 
        soma = num2 + num1; 
        printf("\n%d. %d + %d = %d ", i, num1, num2, soma); 

        num1 = num2; 
        num2 = soma; 

        i++; 
    } while (i <= 10); 

    return 0; 
}


#endif