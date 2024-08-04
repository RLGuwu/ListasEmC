/******************************************************************************
Desenvolva um programa que calcule o tempo de viagem entre duas cidades. 
Leia a distância entre as cidades (em km) e a velocidade média (em km/h) e calcule o tempo de viagem (em horas). 
*******************************************************************************/

#include <stdio.h> 
#ifndef Ex7
#define Ex7

int main() 
{ 
    float km, vel, t; 

    printf("Digite a distância (em km) entre você e a cidade: "); 
    scanf("%f", &km); 

    printf("Digite sua velocidade atual (km/h): "); 
    scanf("%f", &vel); 

    t = (km / vel);  

    printf("O tempo que será gasto é de %.2f hora(s)", t); 

    return 0; 
} 
#endif