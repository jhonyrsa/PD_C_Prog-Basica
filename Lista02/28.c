#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int opcao;
    printf("Calculadora de medias\n");
    printf("Tipos de medias\n");
    printf("1 - Geometrica\n");
    printf("2 - Poderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    printf("\tOpcao escolhida: ");
    scanf("%d", &opcao);
    if(opcao>=1 && opcao<=4){
        float media, x, y, z;
        printf("Informe x: ");
        scanf("%f", &x);
        printf("Informe y: ");
        scanf("%f", &y);
        printf("Informe z: ");
        scanf("%f", &z);
        if(opcao==1) media = cbrt(x*y*z);
        else if(opcao==2) media = (x+2*y+3*z)/6;
        else if(opcao==3) media = 1/((1/x)+(1/y)+(1/z));
        else media = (x+y+z)/3;
        printf("Media: %.2f\n", media);
    }else printf("Opcao escolhida nao existe\n");
    return 0;
}
