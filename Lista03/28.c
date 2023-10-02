#include <stdio.h>
int main(int argc, char **argv){
    int n, i, j, nfatorial=1;
    float E=1.0;
    printf("Informe N: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1; j<=i; j++)
            nfatorial = nfatorial*j;
        E = E + 1/(float)nfatorial;
        nfatorial = 1;
    }
    printf("E = %.4f\n", E);
    return 0;
}
