#include <stdio.h>

int main(int argc, char **argv){
    int numero, qdePares=0, qdeLida=0;
    do{
        printf("Digite um numero (1000 para terminar): ");
        scanf("%d", &numero);
        qdeLida++;
        if(numero%2==0) qdePares++;
    }while(numero!=1000);
    printf("Qde lida: %d\n", qdeLida);
    printf("Qde par: %d\n", qdePares);
    return 0;
}
