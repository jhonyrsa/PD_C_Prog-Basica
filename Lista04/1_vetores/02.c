/**
2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include <stdio.h>
#define TAM_MAX 6

int main(int argc, char **argv){
    int vet[TAM_MAX];
    int i;
    for(i=0; i<TAM_MAX; i++) scanf("%d", &vet[i]);
    for(i=0; i<TAM_MAX; i++) printf("%d ", vet[i]);
    return 0;
}
