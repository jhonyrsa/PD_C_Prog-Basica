#include <stdio.h>

int main(int argc, char **argv){
    int ano;
    printf("Verificador de anos bissextos\n");
    printf("Informe o ano a verificar: ");
    scanf("%d", &ano);
    if(ano%400==0 || (ano%4==0 && ano%100!=0)) printf("Ano bissexto\n");
    else printf("Ano informado nao eh bissexto!\n");
    return 0;
}
