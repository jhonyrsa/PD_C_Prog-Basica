#include <stdio.h>

float conversaoLibras(float massa);

int main(int argc, char **argv){
    float massaQuilograma;
    printf("Conversor de unidades: Massa - kg para lb\n");
    printf("Digite a massa em kg: ");
    scanf("%f", &massaQuilograma);
    float massaLibra = conversaoLibras(massaQuilograma);
    printf("%.2f kg convertido eh %.2f lb", massaQuilograma,massaLibra);
    return 0;
}

float conversaoLibras(float massa){
    return massa/0.45;
}
