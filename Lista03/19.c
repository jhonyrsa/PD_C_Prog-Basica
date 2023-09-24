#include <stdio.h>

int main(void){
    int i, numero, quociente;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i=100; i>=1; i/=10){
        quociente = numero/i;
        printf("%d\n", quociente);
        numero = numero%i;
    }
    return 0;
}
