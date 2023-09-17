#include <stdio.h>

float conversaoAcres(float area);

int main(int argc, char **argv){
    float comprimentoMetrosQuadrados;
    printf("Conversor de unidades: Area - m^2 para acre\n");
    printf("Digite a area em m^2: ");
    scanf("%f", &comprimentoMetrosQuadrados);
    float comprimentoAcres = conversaoAcres(comprimentoMetrosQuadrados);
    printf("%f m^2 convertido eh %f acres\n", comprimentoMetrosQuadrados,comprimentoAcres);
    return 0;
}

float conversaoAcres(float area){
    return area*0.000247;
}
