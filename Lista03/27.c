#include <stdio.h>
int main(int argc, char **argv){
    float h = 1.0;
    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (i=2; i<=n; i++){
        h = h + 1/(float)i;
    }
    printf("H[%d] = %.2f\n", n, h);
    return 0;
}
