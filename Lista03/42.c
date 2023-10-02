#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    float numero, raiz, quadrado, cubo;
    do{
        printf("Informe um numero (<=0 para terminar): ");
        scanf("%f", &numero);
        if(numero!=0){
            raiz = sqrt(numero);
            quadrado = numero*numero;
            cubo = numero*numero*numero;
            printf("sqrt(%.2f) = %.4f\n", numero, raiz);
            printf("(%.2f)^2 = %.4f\n", numero, quadrado);
            printf("(%.2f)^3 = %.6f\n", numero, cubo);
        }
    }while(numero!=0.0);
    return 0;
}
