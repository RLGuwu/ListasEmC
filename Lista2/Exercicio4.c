/******************************************************************************
Leia um conjunto de 5 notas e calcule a média. 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex4
#define L2Ex4

#include <stdio.h> 

int main() 
{ 
    int i = 0, n2, r = 0; 

    while (i != 5) 
    { 
        printf("Digite um número: "); 
        scanf("%d", &n2); 
        i += 1; 
        r += n2; 
    } 

    printf("A soma dos números é: %d\n", r); 
    return 0; 
}

#endif