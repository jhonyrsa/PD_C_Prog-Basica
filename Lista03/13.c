#include <stdio.h>

int main(void){
    int numeroPar=0, i, N;
    printf("Informe N: ");
    scanf("%d", &N);
    for(i=0; i<=N; i++){
        numeroPar = 2*i;
        if(numeroPar>N) break;
        printf("%3d\n", numeroPar);
    }
}