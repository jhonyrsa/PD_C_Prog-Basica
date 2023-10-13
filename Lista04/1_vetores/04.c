/**
4. Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .
**/
#include <stdio.h>
#define TAM_MAX 8

int main(void){
    int vet[TAM_MAX], i;
    for(i=0; i<TAM_MAX; i++) scanf("%d", &vet[i]);
    int x, y;
    printf("Informe a primeira posicao: ");
    scanf("%d", &x);
    printf("Informe a segunda posicao: ");
    scanf("%d", &y);
    int soma = vet[x] + vet[y];
    printf("A soma dos conteudos nas posicoes %d e %d eh %d\n", x, y, soma);
    return 0;
}
