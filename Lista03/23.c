#include <stdio.h>

int main(int argc, char **argv){
    long long int n, i;
    printf("Digite um numero: ");
    scanf("%lld", &n);
    printf("D[%lld] = ", n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            if(i==1) printf("[%lld, ", i);
            else if(i==n) printf("%lld]\n", i);
            else printf("%lld, ", i);
        }
    }
    return 0;
}
