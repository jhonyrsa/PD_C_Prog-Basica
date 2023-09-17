#include <stdio.h>

float conversaoHectares(float area);

int main(int argc, char **argv){
    float areaMetrosQuadrados;
    printf("Conversor de unidades: Area - m^2 para hectares\n");
    printf("Digite a area em m^2: ");
    scanf("%f", &areaMetrosQuadrados);
    float areaHectares = conversaoHectares(areaMetrosQuadrados);
    printf("%f m^2 convertido eh %f hectares\n", areaMetrosQuadrados, areaHectares);
    return 0;
}

float conversaoHectares(float area){
    return area*0.0001;
}
