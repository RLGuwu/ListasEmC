/******************************************************************************
Crie um programa que leia a nota de um aluno e imprima a sua conceituação de acordo com a tabela: 
 A: 90 a 100  
 B: 80 a 89  
 C: 70 a 79  
 D: 60 a 69  
 F: Abaixo de 60  
*******************************************************************************/

#include <stdio.h> 
#ifndef Ex6
#define Ex6

int main() 
{ 
    int nota; 

    printf("Digite a nota: \n"); 
    scanf("%d", &nota); 
    printf("\n");

    if (nota >= 90 && nota <= 100) { 
        printf("    A    \n"); 
        printf("   A A   \n"); 
        printf("  AAAAA  \n"); 
        printf(" A     A \n"); 
        printf("A       A\n"); 
    } 
    else if (nota >= 80 && nota <= 89) {
        printf("BBBBBB \n"); 
        printf("B     B\n"); 
        printf("B     B\n"); 
        printf("BBBBBB \n"); 
        printf("B     B\n"); 
        printf("B     B\n"); 
        printf("BBBBBB \n"); 
    } 
    else if (nota >= 70 && nota <= 79) { 
        printf("CCCCCCC\n"); 
        printf("C     C\n"); 
        printf("C      \n"); 
        printf("C      \n"); 
        printf("C      \n"); 
        printf("C     C\n"); 
        printf("CCCCCCC\n"); 
    } 
    else if (nota >= 60 && nota <= 69) { 
        printf("DDDDDD \n"); 
        printf("D     D\n"); 
        printf("D     D\n"); 
        printf("D     D\n"); 
        printf("D     D\n"); 
        printf("D     D\n"); 
        printf("DDDDDD \n"); 
    } 
    else if (nota <= 59) { 
        printf("FFFFFFF\n"); 
        printf("F      \n"); 
        printf("FFFFFFF\n"); 
        printf("F      \n"); 
        printf("F      \n"); 
        printf("F      \n"); 
        printf("F      \n"); 
    } 
    else { 
        printf("número inválido"); 
    } 

    return 0; 
}
#endif