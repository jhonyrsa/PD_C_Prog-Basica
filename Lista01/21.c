#include <stdio.h>

float conversaoQuilogramas(float massa);

int main(int argc, char **argv){
    float massaLibras=0;
    printf("Conversor de unidades: Massa - lb para kg\n");
    printf("Digite a massa em lb: ");
    scanf("%f", &massaLibras);
    float massaQuilogramas = conversaoQuilogramas(massaLibras);
    printf("%.2f lb convertido eh %.3f kg\n", massaLibras, massaQuilogramas);
    return 0;
}

float conversaoQuilogramas(float massa){
    return massa*0.45;
}
