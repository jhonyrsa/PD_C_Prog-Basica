#include <stdio.h>

int main(int argc, char **argv){
    float precoAntigo, precoNovo;
    printf("Reprecifica!\n");
    printf("Informe o preco antigo do produto: ");
    scanf("%f", &precoAntigo);
    if(precoAntigo<=50.00) precoNovo = precoAntigo*1.05;
    else if(precoAntigo>50.00 && precoAntigo<=100.00) precoNovo=precoAntigo*1.10;
    else precoNovo = precoAntigo*1.15;
    printf("Novo preco: R$ %.2f\n", precoNovo);
    return 0;
}
