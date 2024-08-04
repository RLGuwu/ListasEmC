/******************************************************************************
Escreva um programa que leia o valor de um produto e calcule o valor final com desconto (10% para pagamentos à vista). utilizando Switch Case 
*******************************************************************************/

#include <stdio.h>
#ifndef L2Ex11
#define L2Ex11

#include <stdio.h> 

int main() 
{ 
    float produto; 
    int formapgmt, vzs; 

    printf("Digite o valor do produto: "); 
    scanf("%f", &produto); 

    printf("Forma de pagamento? \n\nA vista: Digite 1\nParcelado: Digite 2\n\n"); 
    scanf("%d", &formapgmt); 

    switch (formapgmt) 
    { 
        case 1: 
            printf("\nO produto custará R$%.2f\n", produto *= 0.9); 
            break; 

        case 2: 
            printf("\nEm quantas vezes? "); 
            scanf("%d", &vzs); 
            printf("O produto será pago em %dx de R$%.2f, totalizando R$%.2f\n", vzs, produto / vzs, produto); 
            break; 

        default: 
            printf("Valor inválido!\n"); 
    } 

    return 0; 
}

#endif