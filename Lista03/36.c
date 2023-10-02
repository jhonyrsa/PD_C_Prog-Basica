#include <stdio.h>

int main(int argc, char **argv){
    int i, somaQuadrados=0, soma=0, quadrado, subtracao;
    for(i=1; i<=10; i++){
        somaQuadrados = somaQuadrados + i*i;
        soma = soma + i;
    }
    quadrado = soma*soma;
    subtracao = quadrado - somaQuadrados;
    printf("\nDiferenca: %d\n", subtracao);
    return 0;
}
