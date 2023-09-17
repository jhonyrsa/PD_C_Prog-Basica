#include <stdio.h>

int main(int argc, char **argv){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if(numero %  3 == 0 && numero %5 != 0) printf("Numero divisivel apenas por 3\n");
    else if(numero%5==0 && numero %3 != 0) printf("Numero divisivel apenas por 5\n");
    return 0;
}
