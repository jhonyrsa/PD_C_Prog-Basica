#include <stdio.h>

int main(void){
    int soma = 0, i, j, k;
    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &j, &k);
    if(j>k) printf("Intervalo de valores errado!\n");
    else{
        for(i=j; i<=k; i++){
            if(i%2!=0) soma = soma + i;
        }
    }
    printf("Soma dos impares neste intervalo: %d\n", soma);
    return 0;
}
