#include <stdio.h>

int main(void){
    int i=1, soma=0;
    for(;i<=50;i++){
        soma = soma+2*i;
    }
    printf("Soma: %2d\n", soma);
    return 0;
}
