#include <stdio.h>

int main(void){
    int N, i;
    printf("Informe N: ");
    scanf("%d", &N);
    for(i=N; i>=0; i--)
        if(i%2==0) printf("%d\n", i);
    return 0;
}