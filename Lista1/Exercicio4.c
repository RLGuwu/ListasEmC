/******************************************************************************
Calcule o Índice de Massa Corporal (IMC) de uma pessoa, considerando a fórmula IMC = peso / (altura * altura). Classifique o IMC de acordo com a tabela: 
*******************************************************************************/

#include <stdio.h>
#ifndef Ex4
#define Ex4

int main()
{ 
    float IMC, altura, peso; 

    printf("Digite seu peso: "); 
    scanf("%f", &peso); 

    printf("Digite sua altura: "); 
    scanf("%f", &altura); 

    IMC = peso / (altura * altura); 

    if (IMC < 18.5) { 
        printf("IMC = %.1f\n", IMC); 
        printf("Abaixo do Peso \n"); 
        printf("|_//----------_|"); 
    } 
    else if (IMC >= 18.5 && IMC <= 24.9) { 
        printf("IMC = %.1f\n", IMC); 
        printf("Peso ideal \n"); 
        printf("|_//////------_|"); 
    } 
    else if (IMC >= 25 && IMC <= 29.9) { 
        printf("IMC = %.1f\n", IMC); 
        printf("Acima do Peso \n"); 
        printf("|_//////////--_|"); 
    } 
    else if (IMC >= 30) { 
        printf("IMC = %.1f\n", IMC); 
        printf("Obesidade \n"); 
        printf("|_////////////_|");
    } 

    return 0; 
}
#endif