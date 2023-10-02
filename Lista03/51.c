#include <stdio.h>

int main(int argc, char **argv){
    float salario = 2000;
    float aumento = salario*1.015;
    float taxaAumento = aumento - salario;
    int anoBase;
    printf("Digite o ano que deseja saber o salario do funcionario (>= 1997): ");
    scanf("%d", &anoBase);
    int i;
    for (i=1; i<=(anoBase-1996); i++){
        taxaAumento = taxaAumento*2;
        aumento = aumento + taxaAumento;
    }
    printf("O salario em %d: R$ %.2f\n", anoBase, aumento);
    return 0;
}

