#include <stdio.h>

float calculadoraMedia(float a, float b, float c, float d);

int main(int argc, char **argv){
    float nota1, nota2, nota3, nota4;
    printf("Calculadora de media\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    float media = calculadoraMedia(nota1, nota2, nota3, nota4);
    printf("Media: %.2f\n", media);
    return 0;
}

float calculadoraMedia(float a, float b, float c, float d){
    return (a+b+c+d)/4.0;
}
