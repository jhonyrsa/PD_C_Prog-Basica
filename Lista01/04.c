#include <stdio.h>

int main(void){
    float numero;
    printf("Quadrado de um numero\n");
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    float quadrado = numero*numero;
    printf("%.2f ^ 2 = %.2f\n", numero, quadrado);
    return 0;
}
