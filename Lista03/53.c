#include <stdio.h>

int main(int argc, char **argv){
    int n;
    printf("Informe 'n': ");
    scanf("%d", &n);
    int i, j, numero=0;
    printf("Triangulo Floyd com %d linhas:\n", n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            numero++;
            printf("%3d ", numero);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
