#include <stdio.h>

int somaDoida(int numero);

int main(int argc, char **argv){
    int numero;
    printf("Uma soma diferente\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh %d\n", somaDoida(numero));
    return 0;
}

int somaDoida(int numero){
    return ((numero*3)+1)+((numero*2)-1);
}
