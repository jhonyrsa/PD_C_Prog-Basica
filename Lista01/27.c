#include <stdio.h>

float conversaoMetrosQuadrados(float area);

int main(int argc, char **argv){
    float areaHectares=0;
    printf("Conversor de unidades: Area - hectares para m^2\n");
    printf("Informe a area em hectares: ");
    scanf("%f", &areaHectares);
    float areaMetrosQuadrados = conversaoMetrosQuadrados(areaHectares);
    printf("%f hectares convertido eh %f m^2\n", areaHectares,areaMetrosQuadrados);
    return 0;
}

float conversaoMetrosQuadrados(float area){
    return area*10000;
}
