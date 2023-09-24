#include <stdio.h>

int main(void){
    int i=1, soma=0, numero;
    do{
        printf("Digite %2d: ", i);
        scanf("%d", &numero);
        if(numero>=0){
            i++;
            soma = soma+numero;
        }
    }while(i<=10);
    float media = (float)soma/i;
    printf("Media {N}: %.2f", media);
    return 0;
}
