#include <stdio.h>

float conversorCentimetros(float comprimento);

int main(int argc, char **argv)
{
    float comprimentoPolegadas;
    printf("Conversor de unidades: Comprimento - pol para cm\n");
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &comprimentoPolegadas);
    float comprimentoCentimetros = conversorCentimetros(comprimentoPolegadas);
    printf("%.2f pol convertido eh %.2f cm\n", comprimentoPolegadas, comprimentoCentimetros);
    return 0;
}

float conversorCentimetros(float comprimento)
{
    return comprimento*2.54;
}
