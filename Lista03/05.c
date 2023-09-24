#include<stdio.h>

int main(void){
    int i, soma=0, numero=0;
    for(i=1; i<=10;i++){
        printf("Digite %2d numero: ", i);
        scanf("%d", &numero);
        soma = soma+numero;
    }
    printf("Soma: %d\n", soma);
    return 0;
}
