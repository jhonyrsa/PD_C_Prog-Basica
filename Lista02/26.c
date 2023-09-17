#include <stdio.h>

int main(int argc, char **argv){
    float distancia, litrosConsumidos, razao;
    printf("Calculadora de eficiencia de veiculos\n");
    printf("Informe a quantidade de km rodados: ");
    scanf("%f", &distancia);
    printf("Informe a quantidade de litros consumidos no percurso: ");
    scanf("%f", &litrosConsumidos);
    razao = distancia/litrosConsumidos;
    if(razao<=8.0) printf("Venda o carro\n");
    else if(razao>8.0 && razao<=14.0) printf("Economico!\n");
    else printf("Super economico\n");
    return 0;
}
