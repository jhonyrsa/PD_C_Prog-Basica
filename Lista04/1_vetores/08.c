/**
8. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.
**/

#include <stdio.h>
#define TAM_MAX 6

int main(void){
    int vet[TAM_MAX],i;
    for(i=0; i<TAM_MAX; i++) scanf("%d", &vet[i]);
    for(i=(TAM_MAX-1);i>=0; i--) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
