#include <stdio.h>

int antecessor(int num);
int sucessor(int num);

int main(int argc, char **argv){
    int numero;
    printf("Antecessor e sucessor de um numero inteiro\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\nSucessor: %d\n", antecessor(numero), sucessor(numero));
    return 0;
}

int antecessor(int num){
    return num-1;
}

int sucessor(int num){
    return num+1;
}
