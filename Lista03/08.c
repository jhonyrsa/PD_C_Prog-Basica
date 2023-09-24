#include <stdio.h>

int main(int argc, char **argv){
    int numero, maior, menor, i=1;
    do{
        printf("Digite o %2d numero: ", i);
        scanf("%d", &numero);
        if(i==1){
            maior = numero;
            menor = numero;
        }
        else if(numero>maior) maior=numero;
        else if(numero<menor) menor=numero;
        i++;
    }while(i<=10);
    printf("Maior numero: %2d\n", maior);
    printf("Menor numero: %2d\n", menor);
    return 0;
}
