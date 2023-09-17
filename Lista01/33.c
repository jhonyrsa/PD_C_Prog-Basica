#include <stdio.h>

float areaQuadrado(float lado);

int main(int argc, char **argv){
    float ladoQuadrado;
    printf("Calculadora da area do quadrado\n");
    printf("Informe o comprimento do lado: ");
    scanf("%f", &ladoQuadrado);
    printf("Area = %.2f u.a.\n", areaQuadrado(ladoQuadrado));
    return 0;
}

float areaQuadrado(float lado){
    return lado*lado;
}
