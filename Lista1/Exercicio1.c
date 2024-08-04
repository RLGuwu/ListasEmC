/******************************************************************************
Um restaurante oferece um desconto de 10% para clientes que pagam com dinheiro. 
Escreva um programa que leia o valor da conta e a forma de pagamento (dinheiro ou cartão) e imprima o valor final a ser pago. 
*******************************************************************************/

#include <stdio.h> 
#ifndef Ex1
#define Ex1

int main() { 
    float conta;  
    char forma_pagamento; 

    printf("Quanto e o valor em R$: "); 
    scanf("%f", &conta); 

    printf("Qual a forma de pagamento? \n-> Cartao = C \n-> Dinheiro = D\n"); 
    scanf(" %c", &forma_pagamento); 
 
    if (forma_pagamento == 'D' || forma_pagamento == 'd') { 
        conta *= 0.9; 
        printf("\nSua conta deu R$%.2f\n", conta); 
    } else { 
        printf("\nSua conta deu R$%.2f\n", conta); 
    }  
    
    return 0;  
}
#endif