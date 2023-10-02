#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv){
    srand((unsigned)time(NULL));
    printf("Descubra o numero!\n");
    int numero = 1 + (rand()% 1000);
    int tentativa, contador=0;
    while(tentativa!= numero){
        if (contador==0){
            printf("Estou pensando em um numero entre 1 e 1000.\n");
        }
        printf("Seu chute: ");
        scanf("%d", &tentativa);
        contador++;
        if(tentativa > numero) printf("Estou pensando em um numero menor :/\n\n");
        else if (tentativa < numero) printf("Estou pensando em um numero maior :/\n\n");
    }
    printf("Parabens, voce acertou na sua %d tentativa\n", contador);
    return 0;
}
