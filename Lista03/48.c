#include <stdio.h>

int main(){

    long long int soma=0, primeiro=0, segundo=1, proximo;

    while(primeiro<4000000){
        proximo = primeiro + segundo;
        soma = soma + proximo;
        primeiro = segundo;
        segundo = proximo;
    }
    printf("%lld\n", soma);

    return 0;
}
