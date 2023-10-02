#include <stdio.h>

int main(int argc, char **argv){
    int idade, count=0, soma=0;
    do{
        printf("Informe a idade do individuo (0 para terminar): ");
        scanf("%d", &idade);
        if(idade>0){
            count++;
            soma = soma + idade;
        }

    }while(idade>0);
    float media = (float)soma/count;
    printf("Media de idade do grupo: %.1f\n",media);
    return 0;
}
