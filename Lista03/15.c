#include <stdio.h>

int main(void){
    int i=1, N, numeroImpar;
    printf("Digite N: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        numeroImpar = 2*i-1;
        if(numeroImpar>N) break;
        printf("%d\n", numeroImpar);
    }
    return 0;
}
