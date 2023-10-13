#include <stdio.h>
#define TAM_MAX 100

int main(int argc, char **argv){
    int vet[TAM_MAX], n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    if(n>TAM_MAX){
        printf("Tamanho informado maior que o maximo.\nTamanho alterado para 100.\n");
        n = TAM_MAX;
    }

    int i;
    for(i=0; i<n; i++){
        vet[i] = (i+1)*2;
    }

    int x, pos=-1;
    printf("Informe o valor para busca no vetor: ");
    scanf("%d", &x);

    for(i=0; i<n; i++){
        if(vet[i]==x){
            pos = i;
            break;
        }
    }
    if(pos == -1) printf("Valor %d nao faz parte do vetor\n", x);
    else printf("Valor %d encontrado, esta na %d posicao do vetor\n", x, pos);
    return 0;
}
