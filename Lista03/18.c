#include <stdio.h>

int main(void){
    int quantidadeLida, numero, maior, quantidadeMaior=0;
    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidadeLida);
    for(int i=0; i<quantidadeLida; i++){
        printf("Digite num[%3d]: ", i+1);
        scanf("%d", &numero);
        if(i==0){
            maior=numero;
            quantidadeMaior++;
        }
        else if(maior==numero)
            quantidadeMaior++;
        else if(numero>maior){
            maior = numero;
            quantidadeMaior=1;
        }
    }
    printf("Maior numero: %d\n", maior);
    printf("Quantidade digitada: %d\n", quantidadeMaior);
    return 0;
}