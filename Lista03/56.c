/**
56. Fac¸a um programa que calcule a soma de todos os numeros
primos abaixo de dois milhoes.
**/
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv){
    long long int somaPrimos = 0, j, numero=2, primo=0;
    while(numero != 2000000){
        for(j=2; j<=sqrt(numero);j++){
            if(numero%j==0){
                primo=1;
                break;
            }
        }
        if(primo==0){
            somaPrimos = somaPrimos+numero;
        }
        primo=0;
        numero++;
    }
    printf("Soma dos %d primeiros numeros primos eh %d\n", 2000000, somaPrimos);
    return 0;
}

