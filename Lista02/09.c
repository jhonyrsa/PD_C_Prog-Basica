#include <stdio.h>

int main(int argc, char *argv[]){
    float salario, valorPrestacao;
    printf("Informe o salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Informe a prestacao do emprestimo: ");
    scanf("%f", &valorPrestacao);
    if(valorPrestacao/salario>0.2)
        printf("Emprestimo nao concedido\n");
    else
        printf("Emprestimo concedido\n");
    return 0;
}
