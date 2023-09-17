#include <stdio.h>

int main(void){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    char novaLetra = letra+32;
    printf("A letra maiuscula eh %c\n", novaLetra);
    return 0;
}
