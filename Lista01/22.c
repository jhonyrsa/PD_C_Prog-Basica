#include <stdio.h>

float conversaoMetros(float comprimento);

int main(int argc, char **argv){
    float comprimentoJardas;
    printf("Conversor de unidades: Comprimento - jardas para m\n");
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &comprimentoJardas);
    float comprimentoMetros = conversaoMetros(comprimentoJardas);
    printf("%.2f jardas convertido eh %.2f m\n", comprimentoJardas,comprimentoMetros);
    return 0;
}

float conversaoMetros(float comprimento){
    return 0.91*comprimento;
}
