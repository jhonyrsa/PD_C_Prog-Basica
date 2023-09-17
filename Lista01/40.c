#include <stdio.h>

float salarioLiquido(int dias);

int main(int argc, char **argv){
    int dias;
    printf("Calculadora de quantia devida ao encanador\n");
    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &dias);
    printf("A quantia devida eh R$ %.2f\n", salarioLiquido(dias));
    return 0;
}

float salarioLiquido(int dias){
    return (dias*30)-(dias*30*0.08);
}
