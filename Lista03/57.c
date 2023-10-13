/**
57. Faça um programa que conte quantos numeros primos existem
entre a e b, onde a e b sao numeros informados pelo usuário
**/

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int a, b;
    printf("Informe o inicio do intervalo: ");
    scanf("%d", &a);
    printf("Informe o fim do intervalo: ");
    scanf("%d", &b);

    int numero=a, contaPrimos=0, i, primo=0;
    while(numero!=b){
        for(i=2; i<=sqrt(numero); i++){
            if(numero%i==0){
                primo=1;
                break;
            }
        }
        if(numero!= 1 && primo==0){
            contaPrimos++;
        }
        primo=0;
        numero++;
    }
    printf("Ha no intervalo [%d, %d] %d numeros primos\n",a, b, contaPrimos);
    return 0;
}
