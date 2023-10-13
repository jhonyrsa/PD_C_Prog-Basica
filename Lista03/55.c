/**
55. Escreva um programa que leia um inteiro nao negativo ˜n
imprima a soma dos n primeiros numeros primos.
**/
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv){
    int n;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);
    int somaPrimos = 0, i=0, j, numero=2, primo=0;
    while(i != n){
        for(j=2; j<=sqrt(numero);j++){
            if(numero%j==0){
                primo=1;
                break;
            }
        }
        if(primo==0){
            i++;
            somaPrimos = somaPrimos+numero;
        }
        primo=0;
        numero++;
    }
    printf("Soma dos %d primeiros numeros primos eh %d\n", n, somaPrimos);
    return 0;
}
