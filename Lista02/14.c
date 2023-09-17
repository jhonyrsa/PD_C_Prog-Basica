#include <stdio.h>

int main(int argc, char **argv){
    float trabalhoLaboratorio, avaliacaoSemestral, exameFinal;
    printf("Situacao aluno\n");
    printf("Informe a nota do Trabalho do Laboratorio: ");
    scanf("%f", &trabalhoLaboratorio);
    printf("Informe a nota da Avaliacao Semestral: ");
    scanf("%f", &avaliacaoSemestral);
    printf("Informe a nota do Exame Final: ");
    scanf("%f", &exameFinal);
    if((trabalhoLaboratorio>=0.0 && trabalhoLaboratorio<=10.0)&&(avaliacaoSemestral>=0.0 && avaliacaoSemestral<=10.0)&&(exameFinal>=0.0 && exameFinal<=10.0)){
        float media = (trabalhoLaboratorio*2 + avaliacaoSemestral*3 + exameFinal*5)/10.0;
        printf("Media: %.1f\n", media);
        if(media>=0.0 && media<=2.9) printf("Aluno reprovado\n");
        else if(media>2.9 && media<=4.9) printf("Aluno em recuperacao\n");
        else printf("Aluno aprovado");
    }else{
        printf("Alguma(s) nota(s) esta(ao) fora do intervalo permitido (0.0-10.0)\nverifique e reinicie o programa\n");
    }
    return 0;
}
