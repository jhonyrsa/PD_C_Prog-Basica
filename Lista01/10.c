#include <stdio.h>

float conversaoMs(float velocidade);

int main(int argc, char **argv){
    float velocidadeKmh;
    printf("Conversor de unidades: Velocidade - km/h para m/s\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKmh);
    float velocidadeMs = conversaoMs(velocidadeKmh);
    printf("%.2f km/h convertido eh %.2f m/s\n", velocidadeKmh,velocidadeMs);
    return 0;
}

float conversaoMs(float velocidade){
    return velocidade/3.2;
}
