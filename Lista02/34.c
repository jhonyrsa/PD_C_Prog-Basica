#include <stdio.h>

int main(int argc, char **argv){
    float nota;
    int faltas;
    printf("Conceituador de aluno\n");
    printf("Informe a nota: ");
    scanf("%f", &nota);
    printf("Informe a quantidade de faltas: ");
    scanf("%d", &faltas);
    if(faltas>=0 && faltas<=20){
        if(nota>=9.0 && nota<=10.0) printf("Conceito A\n");
        else if(nota>=7.5 && nota<9.0) printf("Conceito B\n");
        else if(nota>=5.0 && nota<7.5) printf("Conceito C\n");
        else if(nota>=4.0 && nota<5.0) printf("Conceito D\n");
        else if(nota>=0.0 && nota<4.0) printf("Conceito E\n");
        else printf("Nota invalida\n");
    }else if(faltas>20){
        if(nota>=9.0 && nota<=10.0) printf("Conceito B\n");
        else if(nota>=7.5 && nota<9.0) printf("Conceito C\n");
        else if(nota>=5.0 && nota<7.5) printf("Conceito D\n");
        else if(nota>=4.0 && nota<5.0) printf("Conceito E\n");
        else if(nota>=0.0 && nota<4.0) printf("Conceito E\n");
        else printf("Nota invalida\n");
    }else printf("Quantidade de faltas entradas invalidas\n");
    return 0;
}
