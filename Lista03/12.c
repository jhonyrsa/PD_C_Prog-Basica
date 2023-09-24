#include <stdio.h>

int main(int argc, char **argv){
    int N, i;
    printf("Digite N: ");
    scanf("%d", &N);
    for(i=N; i>=0; i--)
        printf("Num [%3d]: %3d\n", i+1, i);
    return 0;
}