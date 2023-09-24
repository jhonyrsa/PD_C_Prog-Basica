#include <stdio.h>

int main(void){
    int soma=0, N, i;
    printf("Digite N: ");
    scanf("%d", &N);
    for(i=0; i<N; i++)
        soma = soma+i;
    printf("Soma: %d\n", soma);
    return 0;
}