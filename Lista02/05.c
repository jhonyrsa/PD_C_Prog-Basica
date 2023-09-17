#include <stdio.h>

int parOuImpar(int numero);

int main(int argc, char **argv){
    int numero;
    printf("Verificador de numeros pares ou impares\n");
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    if(parOuImpar(numero)==0)
        printf("O numero eh par\n");
    else
        printf("O numero eh impar\n");
    return 0;
}

int parOuImpar(int numero){
    if(numero%2==0)
        return 0;
    else
        return 1;
}
