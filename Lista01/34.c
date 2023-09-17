#include <stdio.h>
#define pi 3.14159265

float areaCirculo(float raio);

int main(int argc, char **argv){
    float raio;
    printf("Calculadora da area do circulo\n");
    printf("Informe o comprimento do raio: ");
    scanf("%f", &raio);
    printf("Area = %.2f u.a.\n", areaCirculo(raio));
    return 0;
}

float areaCirculo(float raio){
    return pi*raio*raio;
}
