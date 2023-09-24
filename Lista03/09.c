#include <stdio.h>

int main(void){
    int n, i, impar;
    printf("Informe N: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        impar = 2*i+1;
        printf("Num [%2d]: %2d\n", i+1, impar);
    }
    return 0;
}
