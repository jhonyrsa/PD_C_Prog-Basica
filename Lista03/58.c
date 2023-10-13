/**
58. Faca um programa que some os numeros primos existentes entre a e b,
onde a e b sao ˜numeros informados pelo usuario.
**/
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int a, b;
    printf("Informe o inicio do intervalo: ");
    scanf("%d", &a);
    printf("Informe o fim do intervalo: ");
    scanf("%d", &b);

    int numero=a, i, primo=0, somaPrimos=0;
    while(numero!=b){
        for(i=2; i<=sqrt(numero); i++){
            if(numero%i==0){
                primo=1;
                break;
            }
        }
        if(numero!= 1 && primo==0){
            somaPrimos = somaPrimos+numero;
        }
        primo=0;
        numero++;
    }
    printf("A soma dos numeros primos no intervalo Sn[%d, %d] = %d\n",a, b, somaPrimos);
    return 0;
}
