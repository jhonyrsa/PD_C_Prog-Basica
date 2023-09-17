#include <stdio.h>

int main(int argc, char **argv){
    printf("Digite um numero de 4 digitos: ");
    int numero;
    scanf("%d", &numero);
    int dividendo = numero/1000;
    printf("%d\n", dividendo);
    numero = numero%1000;
    dividendo = numero/100;
    printf("%d\n", dividendo);
    numero = numero%100;
    dividendo = numero/10;
    printf("%d\n", dividendo);
    numero = numero%10;
    printf("%d\n", numero);
    return 0;
}
