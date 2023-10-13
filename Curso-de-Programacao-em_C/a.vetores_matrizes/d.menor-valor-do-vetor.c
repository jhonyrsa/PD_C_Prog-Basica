#include <stdio.h>
#define TAM_MAX 100

int main(void){
    int vet[TAM_MAX], N;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    if(N>TAM_MAX) N = TAM_MAX;

    int i;
    for(i=0; i<N; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    int min;
    for(i=0; i<N; i++){
        if(i==0) min = vet[i];
        else if (vet[i]<min) min = vet[i];
    }

    printf("Menor valor: %d\n", min);
    return 0;
}
