#include <stdio.h>

float salarioReceber(float salario);

int main(int argc, char **argv){
    float salarioBase;
    printf("Calculadora de salario a receber\n");
    printf("Informe o salario base: ");
    scanf("%f", &salarioBase);
    float salario = salarioReceber(salarioBase);
    printf("Salario a receber: R$ %.2f\n", salario);
    return 0;
}

float salarioReceber(float salario){
    return (salario*1.05)-(salario*0.07);
}
