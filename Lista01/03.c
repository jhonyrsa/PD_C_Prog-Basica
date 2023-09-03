#include <stdio.h>

int main(void){
    printf("Calculadora\n");
    printf("Digite tres numeros para ver sua soma\n");
    int x, y, z;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    printf("Digite z: ");
    scanf("%d", &z);
    int soma = x+y+z;
    printf("%d + %d + %d = %d\n", x,y,z,soma);
    return 0;
}
