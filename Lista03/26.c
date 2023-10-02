#include <stdio.h>
int main(int argc, char **argv){
    int N, i;
    printf("Digite um numero: ");
    scanf("%d", &N);
    i=N+1;
    for( ; ;i++){
        if(i%11==0 || i%13==0 || i%17==0) break;
    }
    printf("N = %d\n", i);
    return 0;
}
