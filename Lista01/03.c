#include <stdio.h>

int main(void){
    int numa, numb, numc;
    printf("Soma de tres valores\n");
    printf("Digite o numero A: ");
    scanf("%d", &numa);
    printf("Digite o numero B: ");
    scanf("%d", &numb);
    printf("Digite o numero C: ");
    scanf("%d", &numc);
    int soma = numa+numb+numc;
    printf("%d + %d + %d = %d\n", numa, numb, numc, soma);
    return 0;
}
