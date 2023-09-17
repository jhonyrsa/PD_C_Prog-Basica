#include <stdio.h>

int main(void){
    float comprimento, largura, precoCerca;
    printf("Calculadora de preco de cerca 'Terrenus'\n");
    printf("Informe o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Informe a largura do terreno: ");
    scanf("%f", &largura);
    printf("Informe o preco por metro de cerca: ");
    scanf("%f", &precoCerca);
    float precoTotal = (2*comprimento+2*largura)*precoCerca;
    printf("\tPreco total: R$ %.2f\n", precoTotal);
    return 0;
}
