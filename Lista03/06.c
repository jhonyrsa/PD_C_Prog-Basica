#include <stdio.h>

int main(void){
    int i=1, soma=0, numero=0;
    for(; i<=10; i++){
        printf("Digite o %2d numero: ", i);
        scanf("%d", &numero);
        soma = soma+numero;
    }
    float media = (float)soma/i;
    printf("Media: %.2f\n", media);
    return 0;
}
