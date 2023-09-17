#include <stdio.h>

float conversaoKmh(float velocidade);

int main(int argc, char **argv){
    float velocidadeMs;
    printf("Conversor de unidades: Velocidade - m/s para km/h\n");
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidadeMs);
    float velocidadeKmh = conversaoKmh(velocidadeMs);
    printf("%.2f m/s convertido eh %.2f km/h\n", velocidadeMs,velocidadeKmh);
    return 0;
}

float conversaoKmh(float velocidade){
    return velocidade*3.6;
}
