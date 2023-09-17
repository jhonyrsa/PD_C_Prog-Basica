#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if(numero>=0){
        float logaritmo = log10(numero);
        printf("log(%d) = %.4f\n", numero, logaritmo);
    }else
        printf("Numero invalido\n");
    return 0;
}
