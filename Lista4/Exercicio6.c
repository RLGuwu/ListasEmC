/******************************************************************************
Faça um programa que leia um vetor de 10 números e um número x. 
O programa deve verificar se o número x está presente no vetor e imprimir a posição em que ele se encontra ou uma mensagem informando que o número não foi encontrado.
*******************************************************************************/

#include <stdio.h>
#include <locale.h>
#ifndef L4Ex6
#define L4Ex6

#define TAM 10

int main(){

    int vetor[TAM], posnum, num, enc;

    printf ("Insira dez valores inteiros: ");

    for (int i = 0; i < TAM; i++){
        scanf ("%d", &vetor[i]);
    }

    printf ("\nInsira um número inteiro: ");
    scanf ("%d", &num);

    for (int i = 0; i < TAM; i++){
        
        if (num == vetor[i]){
            posnum = i;
            enc = 1;
            break;
        }
    }

    printf("\nVetor:    ->>");
    for (int i = 0; i < TAM; i++){
        printf ("%3d", vetor[i]);
    }

    if (enc){
        printf ("\n\nO número %d está presente no vetor (%d° posição).", num, posnum+1);
    }
    else{
        printf ("\n\nO número %d não está presente no vetor.", num);
    }

    return 0;
}

#endif