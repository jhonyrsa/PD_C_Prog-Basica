#include <stdio.h>

int main(int argc, char **argv){
    int numero1, numero2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    if(numero1>numero2)
        printf("O maior eh %d\n", numero1);
    else if(numero2>numero1)
        printf("O maior eh %d\n", numero2);
    else
        printf("Numeros iguais\n");
    return 0;
}
