#include <stdio.h>

int main(void){
    int idade, anoatual;
    printf("Calculadora de ano de nascimento\n");
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe o ano atual: ");
    scanf("%d", &anoatual);
    int anoNascimento = anoatual-idade;
    printf("Voce nasceu em %d\n", anoNascimento);
    return 0;
}
