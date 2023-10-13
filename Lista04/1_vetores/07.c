/**
7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra.
**/
#include <stdio.h>
#define TAM_MAX 10

int main(int argc, char **argv){
    int vet[TAM_MAX], pos, max, i;
    for(i=0; i<TAM_MAX; i++){
        scanf("%d", &vet[i]);
        if(i==0){
            pos = i;
            max = vet[i];
        }
        else if(vet[i]>max){
            pos = i;
            max = vet[i];
        }
    }
    printf("\n");
    for(i=0; i<TAM_MAX; i++){
        printf("%d ", vet[i]);
    }
    printf("\nMaior valor: %d\n", max);
    printf("    Posicao: %d\n", pos);
    return 0;
}
