#include <stdio.h>

int main(int argc, char **argv){
    int codigo, quantidade;
    printf("Calculadora de pedidos\n");
    printf("              Cardapio\n");
    printf("____________________________________\n");
    printf("| Especificacao   | Codigo | Preco |\n");
    printf("| Cachorro Quente | 100    | 1.20  |\n");
    printf("| Bauru Simples   | 101    | 1.30  |\n");
    printf("| Bauru com Ovo   | 102    | 1.50  |\n");
    printf("| Hamburguer      | 103    | 1.20  |\n");
    printf("| Cheeseburguer   | 104    | 1.70  |\n");
    printf("| Suco            | 105    | 2.20  |\n");
    printf("| Refrigerante    | 106    | 1.00  |\n");
    printf("____________________________________\n");
    printf("Informe o codigo: ");
    scanf("%d", &codigo);
    float precoTotal=0;
    if(codigo>=100 && codigo<=106){
        printf("Informe a quantidade: ");
        scanf("%d", &quantidade);
        if(codigo==100||codigo==103) precoTotal = 1.20*quantidade;
        else if(codigo==101) precoTotal = 1.30*quantidade;
        else if(codigo==102) precoTotal = 1.50*quantidade;
        else if(codigo==104) precoTotal = 1.70*quantidade;
        else if(codigo==105) precoTotal = 2.20*quantidade;
        else precoTotal = 1.00*quantidade;
        printf("Preco final: R$ %.2f\n", precoTotal);
    }else printf("Codigo informado invalido\n");
    return 0;
}
