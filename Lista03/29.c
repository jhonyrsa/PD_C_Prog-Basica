#include <stdio.h>
int main(int argc, char **argv){
    int n, i, j, fatorial=1;
    double S = 0.0;
    for(i=1;i<=5; i++){
        n = 2*i;
        for(j=1; j<=n; j++) fatorial = fatorial*j;
        S = S + 1/(double)fatorial;
        fatorial = 1;
    }
    printf("S = %lf\n", S);
    return 0;
}
