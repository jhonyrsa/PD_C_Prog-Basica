/**
3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem ˆ
10 elementos cada. Imprimir todos os conjuntos.
**/
#include <stdio.h>
#define TAM_MAX 10

int main(int argc, char **argv){
    int vet[TAM_MAX], vetQuadrado[TAM_MAX];
    int i;
    for(i=0; i<TAM_MAX; i++){
        scanf("%d", &vet[i]);
        vetQuadrado[i] = vet[i]*vet[i];
    }
    printf("\n");
    for(i=0; i<TAM_MAX; i++) printf("%3d ", vet[i]);
    printf("\n");
    for(i=0; i<TAM_MAX; i++) printf("%3d ", vetQuadrado[i]);
    printf("\n");
    return 0;
}
