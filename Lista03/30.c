#include <stdio.h>

int main(int argc, char **argv){
    printf("\tSeries\n");
    int n=0;
    printf("Informe N: ");
    scanf("%d", &n);
    int i, serie=0;
    for(i=1; i<=n;i++)serie = serie + n;
    printf("Serie: 1 + 2 + 3 + 4 + 5 + ... + %d = %d\n", n, serie);
    serie = 0;
    for(i = 1; i<=n; i++){
        if(i%2==0) serie = serie - (2*i-1);
        else serie = serie + (2*i-1);
    }
    printf("Serie: 1 - 2 + 3 - 4 + 5 + ... + (2*%d - 1) = %d\n", n, serie);
    serie = 0;
    for(i=1; i<=n; i++){
        if(i%2==0) serie = serie + (2*n - 1);
    }
    printf("Serie: 1 + 3 + 5 + 7 + 9 + ... + (2*%d - 1) = %d\n", n, serie);
    return 0;
}
