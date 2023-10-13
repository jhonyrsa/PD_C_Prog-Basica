/**
6. Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor
**/
#include <stdio.h>
#define TAM_MAX 10

int main(int argc, char *argv[]){
    int vet[TAM_MAX], i, min, max;
    for(i=0; i<TAM_MAX; i++){
        scanf("%d", &vet[i]);
        if(i==0){
            min = vet[i];
            max = vet[i];
        }
        else if(vet[i]<min) min = vet[i];
        else if(vet[i]>max) max = vet[i];
    }
    printf("Maior numero do vetor: %d\n", max);
    printf("Menor numero do vetor: %d\n", min);
    return 0;
}
