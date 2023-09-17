#include <stdio.h>

int main(int argc, char *argv[]){
    float precoProduto=0.0;
    printf("Calculadora de produto e comissao\n");
    printf("Informe o preco do produto: ");
    scanf("%f", &precoProduto);
    float parcelaSemDesconto = precoProduto/3.0;
    float comissaoSemDesconto = precoProduto*0.05;
    printf("Parcelamento 3x (sem desconto): R$ %.2f\n", parcelaSemDesconto);
    printf("Comissao do vendedor (produto s/ desconto): R$ %.2f\n", comissaoSemDesconto);
    float precoDescontado = precoProduto*0.9;
    float comissaoComDesconto = precoDescontado*0.05;
    printf("\nPreco do produto (com desconto a vista): R$ %.2f\n", precoDescontado);
    printf("Comissao do vendedor (produto c/ desconto): R$ %.2f\n", comissaoComDesconto);
    return 0;
}
