#include <stdio.h>

int main(int argc, char **argv){
    int opcao;
    float preco;
    printf("Precificador\n");
    printf("Escolha o estado destino\n");
    printf("1 - Minas Gerais\n");
    printf("2 - Sao Paulo\n");
    printf("3 - Rio de Janeiro\n");
    printf("4 - Mato Grosso do Sul\n");
    printf("\tOpcao: ");
    scanf("%d", &opcao);
    if(opcao>=1 && opcao<=4){
        printf("Informe o preco do produto: ");
        scanf("%f", &preco);
        float novoPreco=0;
        if(opcao==1) novoPreco=preco*1.07;
        else if (opcao==2) novoPreco=preco*1.12;
        else if(opcao==3) novoPreco=preco*1.15;
        else novoPreco=preco*1.08;
        printf("Preco para o destino: R$ %.2f\n", novoPreco);
    }else printf("Opcao invalida\n");
    return 0;
}
