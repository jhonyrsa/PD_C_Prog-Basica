#include <stdio.h>

float calculaNovoSalario(float salario);

int main(void){
    float salarioAntigo;
    printf("Calculadora de aumento salarial\n");
    printf("Informe o salario atual: ");
    scanf("%f", &salarioAntigo);
    printf("Novo salario: R$ %.2f\n", calculaNovoSalario(salarioAntigo));
    return 0;
}

float calculadora(float salario){
    return salario*1.25;
}
