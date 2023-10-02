#include <stdio.h>

int main(void){
    int i, soma=0;
    for(i=0; i<1000; i++){
        if(i%3==0 || i%5==0) soma = soma+i;
    }
    printf("S = %d\n", soma);
    return 0;
}
