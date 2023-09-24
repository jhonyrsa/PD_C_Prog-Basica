#include <stdio.h>

int main(int argc, char **argv){
    int n, i, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i=1; i<n; i++){
        if(n%i==0) soma=soma+i;
    }
    printf("Soma dos divisores: %d\n", soma);
    return 0;
}
