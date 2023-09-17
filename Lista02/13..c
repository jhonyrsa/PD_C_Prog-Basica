#include <stdio.h>

int main(int argc, char *argv[]){
    float nota1, nota2, nota3;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    float media = (nota1 + nota2 + nota3*2)/4.0;
    if(media>=60.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado\n");
    }else{
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado\n");
    }
    return 0;
}
