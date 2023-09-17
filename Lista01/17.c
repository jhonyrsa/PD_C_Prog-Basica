#include <stdio.h>

float conversaoPolegadas(float comprimento);

int main(int argc, char **argv){
    float comprimentoCentimetros;
    printf("Conversor de unidades: Comprimento - cm para pol\n");
    printf("Digite o comprimento em cm: ");
    scanf("%f", &comprimentoCentimetros);
    float comprimentoPolegadas = conversaoPolegadas(comprimentoCentimetros);
    printf("%.2f cm convertido eh %.2f pol\n", comprimentoCentimetros,comprimentoPolegadas);
    return 0;
}

float conversaoPolegadas(float comprimento){
    return comprimento/2.54;
}
