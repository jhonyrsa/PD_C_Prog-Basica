#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    float numero;
    printf("Informe um numero: ");
    scanf("%f", &numero);
    if(numero>=0){
        float raiz = sqrt(numero);
        printf("raiz(%.2f) = %.4f\n", numero, raiz);
    }else{
        float quadrado = numero*numero;
        printf("%.2f ^ 2 = %.4f\n", numero, quadrado);
    }
    return 0;
}
