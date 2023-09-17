#include <stdio.h>

int main(int argc, char **argv){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    int a = numero/1000000;
    int b = (numero%1000000)/100000;
    int c = ((numero%1000000)%100000)/10000;
    int d = (((numero%1000000)%100000)%10000)/1000;
    int e = ((((numero%1000000)%100000)%10000)%1000)/100;
    int f = (((((numero%1000000)%100000)%10000)%1000)%100)/10;
    int g = (((((numero%1000000)%100000)%10000)%1000)%100)%10;
    int soma = a+b+c+d+e+f+g;
    printf("A soma dos algarismos do numero %d eh %d\n", numero, soma);
    return 0;
}
