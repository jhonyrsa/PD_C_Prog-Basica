#include <stdio.h>
#include <math.h>

float calculaHipotenusa(float a, float b);

int main(int argc, char **argv){
    float a, b;
    printf("Calculadora de hipotenusa de um triangulo retangulo\n");
    printf("Informe o cateto a: ");
    scanf("%f", &a);
    printf("Informe o cateto b: ");
    scanf("%f", &b);
    printf("Hipotenusa = %.2f\n", calculaHipotenusa(a, b));
    return 0;
}

float calculaHipotenusa(float a, float b){
    return sqrt(a*a + b*b);
}
