#include <stdio.h>

int main() {
    int num, primeiro = 0, segundo = 1, proximo=0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Sequencia de Fibonacci ate o primeiro numero superior a %d:\n", num);

    while (primeiro <= num) {
        if(primeiro == 0) printf("%d ", primeiro);
        if(segundo == 1) printf( "%d ", segundo);
        else printf("%d ", proximo);

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");
    return 0;
}
