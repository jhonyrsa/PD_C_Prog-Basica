#include <stdio.h>

int main(void){
    float numero;
    printf("Quinta parte de um numero\n");
    printf("Digite um numero: ");
    scanf("%f", &numero);
    float quintaParte = numero/5.0;
    printf("%.2f/5 = %.2f\n", numero, quintaParte);
    return 0;
}
