#include <stdio.h>

int main(int argc, char **argv){
    int i, N;
    printf("Digite N: ");
    scanf("%d", &N);
    for(i=N; i>=1; i--){
        if(i%2!=0)
            printf("%d\n", i);
    }
    return 0;
}
