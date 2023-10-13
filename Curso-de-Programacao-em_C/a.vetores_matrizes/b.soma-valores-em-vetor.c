#include <stdio.h>
#define TAM_MAX 100

int main(void){
    int vet[TAM_MAX], soma=0, tamanho;
    printf("Informe o tamanho maximo do vetor: ");
    scanf("%d", &tamanho);
    if(tamanho>TAM_MAX){
        tamanho = TAM_MAX;
        printf("Tamanho maximo informado nao permitido.\nTamanho alterado para 100.\n");
    }
    for(int i=0; i<tamanho; i++){
        printf("Informe %d numero: ", i+1);
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }

    printf("A soma dos valores digitados eh %d\n", soma);
    return 0;
}
