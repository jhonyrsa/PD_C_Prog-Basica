#include <stdio.h>

float conversorMi(float distancia);

int main(int argc, char **argv)
{
    float distanciaKm;
    printf("Conversor de unidades: Distancia - km para mi\n");
    printf("Digite a distancia em km: ");
    scanf("%f", &distanciaKm);
    float distanciaMi = conversorMi(distanciaKm);
    printf("%.2f km convertido eh %.2f\n", distanciaKm, distanciaMi);
    return 0;
}

float conversorMi(float distancia)
{
    return distancia/1.61;
}
