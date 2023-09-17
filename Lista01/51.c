#include <stdio.h>
#include <math.h>

float distanciaOrigem(float x, float y);

int main(void){
    float x, y;
    printf("Distancia da origem (0,0) de dois pontos\n");
    printf("Informe x: ");
    scanf("%f", &x);
    printf("Informe y: ");
    scanf("%f", &y);
    printf("Distancia da origem: %.2f\n", distanciaOrigem(x,y));
    return 0;
}

float distanciaOrigem(float x, float y){
    return sqrt(x*x+y*y);
}
