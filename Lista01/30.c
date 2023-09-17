#include <stdio.h>

float conversorDolar(float moeda);

int main(int argc, char **argv){
    float moedaReal;
    printf("Conversor de moeda: Real para Dolar\n");
    printf("Digite o valor em reais: ");
    scanf("%f", &moedaReal);
    printf("R$ %.2f sao US$ %.2f\n", moedaReal, conversorDolar(moedaReal));
    return 0;
}

float conversorDolar(float moeda){
    float moedaDolar;
    printf("Informe o valor do dolar: ");
    scanf("%f", &moedaDolar);
    return moeda/moedaDolar;
}
