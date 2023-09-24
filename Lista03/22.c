#include <stdio.h>

int main(int argc, char **argv){
    int nota, i=0, soma=0;
    do{
        printf("Informe a nota: ");
        scanf("%d", &nota);
        if(nota>=10 && nota<=20){
            i++;
            soma = soma+nota;
        }
    }while(nota>=10 && nota<=20);
    float media = (float)soma/i;
    printf("Media: %.1f\n", media);
    return 0;
}
