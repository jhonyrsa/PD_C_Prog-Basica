#include <stdio.h>

int main(int argc, char **argv){
    int opcao;
    float num1, num2, resultado;
    printf("Calculadora Mundis\n");
    printf("Opcoes\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("\tInforme sua escolha: ");
    scanf("%d", &opcao);
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    switch(opcao){
        case 1:
            resultado = num1+num2;
            printf("%f + %f = %f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1-num2;
            printf("%f - %f = %f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1*num2;
            printf("%f * %f = %f\n", num1, num2, resultado);
            break;
        case 4:
            resultado = num1*num2;
            printf("%f / %f = %f\n", num1, num2, resultado);
            break;
        default:
            printf("Opcao informada invalida\n");
    }
    return 0;
}
