#include <stdio.h>

int main(int argc, char **argv){

    int n, nro;
    n = nro = 10;
    int i, achou=0;

    while(achou ==0){
        achou = 1;
        for(i=2; i<=n; i++){
            if(nro%i!=0){
                achou=0;
                break;
            }
        }
        if(achou==1)
            printf("Numero: %d\n", nro);
        else nro = nro + 2;
    }
    return 0;
}
