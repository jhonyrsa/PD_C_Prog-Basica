#include <stdio.h>

float calculaDesconto(float preco);

int main(int argc, char **argv){
    float precoProduto;
    printf("Calculadora de preco com desconto\n");
    printf("Informe o preco do produto: ");
    scanf("%f", &precoProduto);
    printf("Preco com desconto R$ %.2f\n", calculaDesconto(precoProduto));
    return 0;
}

float calculaDesconto(float preco){
    return (1-0.12)*preco;
}
