#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
    srand((unsigned)time(NULL));
    int a = 1 + (rand()%100);
    int b = 1 + (rand()%100);
    int resultado = a+b;
    int resultadoEntrado;
    int acertos=0, erros=0;
    printf("Qual o resultado da soma %d + %d? ",a,b);
    scanf("%d", &resultadoEntrado);
    if(resultadoEntrado==resultado) acertos++;
    else erros++;
    a = 1 + (rand()%100);
    b = 1 + (rand()%100);
    resultado = a+b;
    printf("Qual o resultado da soma %d + %d? ",a,b);
    scanf("%d", &resultadoEntrado);
    if(resultadoEntrado==resultado) acertos++;
    else erros++;
    a = 1 + (rand()%100);
    b = 1 + (rand()%100);
    resultado=a+b;
    printf("Qual o resultado da soma %d + %d? ",a,b);
    scanf("%d", &resultadoEntrado);
    if(resultadoEntrado==resultado) acertos++;
    else erros++;
    a = 1 + (rand()%100);
    b = 1 + (rand()%100);
    resultado = a+b;
    printf("Qual o resultado da soma %d + %d? ",a,b);
    scanf("%d", &resultadoEntrado);
    if(resultadoEntrado==resultado) acertos++;
    else erros++;
    a = 1 + (rand()%100);
    b = 1 + (rand()%100);
    resultado=a+b;
    printf("Qual o resultado da soma %d + %d? ",a,b);
    scanf("%d", &resultadoEntrado);
    if(resultadoEntrado==resultado) acertos++;
    else erros++;
    printf("Parabens voce teve %d acertos :D\n", acertos);
    printf("Erros: %d", erros);
    return 0;
}
