#include <stdio.h>

int main(void){

    float salarioCarlos, salarioJoao, aplicacaoJoao, aplicacaoCarlos;
    int contador=0;
    printf("Informe o salario do Carlos: ");
    scanf("%f", &salarioCarlos);

    salarioJoao = salarioCarlos/3;
    aplicacaoJoao = salarioJoao*1.05;
    aplicacaoCarlos = salarioCarlos*1.02;
    contador++;

    while(aplicacaoJoao<aplicacaoCarlos){
        aplicacaoJoao = aplicacaoJoao*1.05;
        aplicacaoCarlos = aplicacaoCarlos*1.02;
        contador++;
    }
    printf("Joao levara %d meses para ultrapassar Carlos", contador);
    return 0;
}
