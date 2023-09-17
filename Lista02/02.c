#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    float numero;
    printf("Informe um numero real: ");
    scanf("%f", &numero);
    if(numero>=0){
        float raiz = sqrt(numero);
        printf("Raiz(%.2f) = %.4f\n", numero, raiz);
    }else
        printf("O numero eh invalido\n");
    return 0;
}
