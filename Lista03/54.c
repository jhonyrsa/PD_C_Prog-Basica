#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int numero;
    printf("Informe um numero maior que 1: ");
    scanf("%d", &numero);
    int primo = 0;
    int i;
    for(i=2; i <= sqrt(numero); i++){
        if(numero%i==0){
            primo++;
            if(primo>=1){
                printf("%d nao eh primo.\n", numero);
                break;
            }
        }
    }
    if(primo==0) printf("%d eh primo\n", numero);
    return 0;
}
