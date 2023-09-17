#include <stdio.h>

int main(int argc, char **argv){
    float custoFabrica;
    printf("Calculadora de custo para consumidor de veiculos\n");
    printf("Informe o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);
    float custoConsumidor=0.0;
    if(custoFabrica<12000.00) custoConsumidor = custoFabrica+custoFabrica*0.05;
    else if(custoFabrica>12000.00 && custoFabrica<=25000.00) custoConsumidor = custoFabrica+custoFabrica*0.1+custoFabrica*.15;
    else custoConsumidor = custoFabrica+custoFabrica*0.15+custoFabrica*0.20;
    printf("Custo para o consumidor: R$ %.2f\n", custoConsumidor);
    return 0;
}
