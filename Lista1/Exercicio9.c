/******************************************************************************
Crie um programa que leia três números e verifique se eles formam um triângulo retângulo.
 Um triângulo retângulo possui um ângulo reto (90 graus) e a soma do quadrado dos catetos (a² + b²) deve ser igual ao quadrado da hipotenusa (c²).  
*******************************************************************************/
#include <stdio.h> 
#ifndef Ex9
#define Ex9

int main() 
{ 
    int n1, n2, n3; 

    printf("Digite três números: "); 
    scanf("%d %d %d", &n1, &n2, &n3); 

    if ((n1 * n1) + (n2 * n2) == (n3 * n3) || 
        (n2 * n2) + (n3 * n3) == (n1 * n1) || 
        (n1 * n1) + (n3 * n3) == (n2 * n2)) 
    { 
        printf("Forma um triângulo retângulo\n"); 
    } 
    else 
    { 
        printf("Não forma um triângulo retângulo\n"); 
    } 

    return 0; 
} 
#endif