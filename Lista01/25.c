#include <stdio.h>

float conversaoMetrosQuadrados(float area);

int main(int argc, char **argv){
    float areaAcres;
    printf("Conversao de unidades: Area - acres para m^2\n");
    printf("Digite a area em acres: ");
    scanf("%f", &areaAcres);
    float areaMetrosQuadrados = conversaoMetrosQuadrados(areaAcres);
    printf("%.4f acres convertido eh %.4f m^2\n", areaAcres,areaMetrosQuadrados);
    return 0;
}

float conversaoMetrosQuadrados(float area){
    return area*4048.58;
}
