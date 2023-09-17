#include <stdio.h>

int main(int argc, char **argv){
    int idade, tempoServico;
    printf("Aposentador\n");
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o tempo de servico: ");
    scanf("%d", &tempoServico);
    if(idade>=65) printf("Pode aposentar\n");
    else if(tempoServico>= 30) printf("Pode aposentar\n");
    else if(idade >= 60 && tempoServico>= 25) printf("Pode aposentar\n");
    else printf("Nao pode aposentar\n");
    return 0;
}
