#include <stdio.h>

int quantidadeDegrau(float alturaDegrau, float alturaTotal);

int main(int argc, char **argv){
    float alturaDegrau=0, alturaTotal=0;
    printf("Calculadora de altura de escadaria\n");
    printf("Informe a altura do degrau: ");
    scanf("%f", &alturaDegrau);
    printf("Informe a altura total da escadaria: ");
    scanf("%f",&alturaTotal);
    int degraus = quantidadeDegrau(alturaDegrau,alturaTotal);
    printf("Serao necessarios %d degraus\n", degraus);
    return 0;
}

int quantidadeDegrau(float alturaDegrau, float alturaTotal){
    return alturaTotal/alturaDegrau;
}
