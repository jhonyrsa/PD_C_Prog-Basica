#include <stdio.h>
#define pi 3.14159265

float volumeCilindro(float raio, float altura);

int main(int argc, char **argv){
    float raio, altura;
    printf("Calculadora volume do cilindro\n");
    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Volume = %.2f u.v\n", volumeCilindro(raio, altura));
    return 0;
}

float volumeCilindro(float raio, float altura){
    return pi*raio*raio*altura;
}
