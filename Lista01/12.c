#include <stdio.h>

float conversorKm(float distancia);

int main(int argc, char **argv){
    float distanciaMilhas;
    printf("Conversor de unidades: Distancia - Milhas para Quilometros\n");
    printf("Digite a distancia em milhas: ");
    scanf("%f", &distanciaMilhas);
    float distanciaQuilometros = conversorKm(distanciaMilhas);
    printf("%.2f mi convertido eh %.2f km\n", distanciaMilhas, distanciaQuilometros);
    return 0;
}

float conversorKm(float distancia){
    return 1.61*distancia;
}
