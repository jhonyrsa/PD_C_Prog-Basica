#include <stdio.h>

int main(int argc, char **argv){
    int a, b, c;
    printf("Ordenador de numeros\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    printf("Informe o terceiro numero: ");
    scanf("%d", &c);
    if(a>b && a>c && b>c) printf("Ordem crescente: %d < %d < %d\n", c,b,a);
    else if(b>a && b>c && a>c) printf("Ordem crescente: %d < %d < %d\n", c,a,b);
    else if(c>a && c>b && b>a) printf("Ordem crescente: %d < %d < %d\n", a,b,c);
    else if(b>a && a>c ) printf("Ordem crescente: %d < %d < %d\n", c,a,b);
    else if(a>b && c>b ) printf("Ordem crescente: %d < %d < %d\n", b,c,a);
    else if(b>a && c>a ) printf("Ordem crescente: %d < %d < %d\n", a,c,b);
    return 0;
}
