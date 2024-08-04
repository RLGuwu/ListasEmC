#include <stdio.h>
#define SIZE 10
#ifndef L3Ex6
#define L3Ex6

int linearSearch( const int array[], int key, int size );

int main(void)
{
int a[SIZE];
int i, Sk, e;

  /*Parte de criação de dados*/
   for(i=0; i < SIZE; i++){
   a[i] = 2 * i;
   }
 
   printf("Pesquise um número inteiro: \n");
   scanf("%d", &Sk);
   
   e = linearSearch(a, Sk, SIZE);
   
   if (e != -1){
       printf("\nValor encontrado na posição [%d]", e);
   }
   else {
       printf("\nNúmero não encontrado...");
   }
   return 0;
}

int linearSearch( const int array[], int key, int size)
{
    int n; 
    for( n=0; n<size; n++) {
        if(array[n] == key){
            return n;
        }
    }
    return -1;
}

#endif