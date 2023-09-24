#include <stdio.h>

int main(int argc, char **argv){
    int soma=0, multiplicacao=1, numero, a,b;
    printf("Informe o inicio do intervalo: ");
    scanf("%d", &a);
    printf("Informe o fim do intervalo: ");
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        if(i%2==0) soma = soma+i;
        else multiplicacao = multiplicacao*i;
    }
    printf("Soma dos pares no intervalo:            %d\n", soma);
    printf("Multiplicacao dos impares no intervalo: %d\n", multiplicacao);
    return 0;
}
