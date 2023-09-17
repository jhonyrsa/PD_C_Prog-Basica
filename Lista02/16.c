#include <stdio.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);
int main(int argc, char *argv[]){
    float baseMaior, baseMenor, altura;
    printf("Calculadora da area do trapezio\n");
    printf("Informe o valor da base maior: ");
    scanf("%f", &baseMaior);
    printf("Informe o valor da base menor: ");
    scanf("%f", &baseMenor);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);
    if(baseMaior>0.0 && baseMenor>0.0 && altura>0.0){
        printf("Area: %.2f u.a.\n", (areaTrapezio(baseMaior,baseMenor,altura)));
    }else
        printf("Dimensoes informadas invalidas\n");
    return 0;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura){
    return ((baseMaior+baseMenor)*altura)/2.0;
}
