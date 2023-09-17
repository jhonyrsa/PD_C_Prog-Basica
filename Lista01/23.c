#include <stdio.h>

float conversaoJardas(float comprimento);

int main(int argc, char **argv){
    float comprimentoMetros;
    printf("Conversor de unidades: Comprimento - m para jardas\n");
    printf("Digite o comprimento em m: ");
    scanf("%f", &comprimentoMetros);
    float comprimentoJardas = conversaoJardas(comprimentoMetros);
    printf("%.2f m convertido eh %.2f jardas\n", comprimentoMetros, comprimentoJardas);
    return 0;
}

float conversaoJardas(float comprimento){
    return comprimento/0.91;
}
