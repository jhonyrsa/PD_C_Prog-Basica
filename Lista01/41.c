#include <stdio.h>

float salarioFuncionario(float valorHora, int horas);

int main(int argc, char *argv[]){
    float valorHora=0;
    int horas=0;
    printf("Calculadora de salario de funcionario\n");
    printf("Informe o valor da hora do funcionario: ");
    scanf("%f", &valorHora);
    printf("Informe a quantidade de horas mensais trabalhadas: ");
    scanf("%d", &horas);
    float salario = salarioFuncionario(valorHora,horas);
    printf("O salario do funcionario eh R$ %.2f\n", salario);
    return 0;
}

float salarioFuncionario(float valorHora, int horas){
    return valorHora*horas*1.10;
}
