//Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>
int main(int argc, char *argv[]){
    int vet[10], i, contaPar=0;
    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2==0) contaPar++;
    }
    printf("No vetor informado ha %d numeros pares\n", contaPar);
    return 0;
}
