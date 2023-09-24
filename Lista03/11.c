#include <stdio.h>

int main(int argc, char **argv){
    int i, N;
    printf("Digite N: ");
    scanf("%d", &N);
    for(i=0; i<=N; i++)
        printf("Numero [%3d]: %3d\n", i+1, i);
    return 0;
}
