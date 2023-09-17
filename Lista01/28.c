#include <stdio.h>

float somaQuadrados(float a, float b, float c);

int main(int argc, char **argv){
    float numa, numb, numc;
    printf("Calculadora da soma do quadrado de tres numeros\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &numa);
    printf("Digite o segundo numero: ");
    scanf("%f", &numb);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numc);
    float somaNumeros = somaQuadrados(numa, numb, numc);
    printf("%.2f^2 + %.2f^2 + %.2f^2 = %.2f^2\n", numa, numb, numc, somaNumeros);
    return 0;
}

float somaQuadrados(float a, float b, float c){
    return a*a+b*b+c*c;
}
