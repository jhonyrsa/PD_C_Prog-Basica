#include <stdio.h>
#include <math.h>

float raizes(float x, float a, float b, float delta);
float calculaDelta (float a, float b, float c);

int main(int argc, char **argv){
    float a, b, c;
    printf("Calculadora de raizes de Equacao de 2 Grau\n");
    printf("Lembre-se que a forma aceita neste programa eh\n");
    printf("\tax^2 + bx + c, a != 0\n");
    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);

    float delta = calculaDelta(a,b,c);
    if(delta<0) printf("Nao possui raizes reais\n");
    else if(delta==0){
        printf("Possui duas raizes iguais\n");
        printf("x = %.2f\n", raizes(1, a, b, delta));
    }else{
        printf("Possui duas raizes distintas\n");
        float x1 =1, x2 = 2;
        x1 = raizes(x1, a, b, delta);
        x2 = raizes(x2, a, b, delta);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
    return 0;
}

float calculaDelta(float a,float b,float c){
    return b*b - 4*a*c;
}
float raizes(float x, float a, float b, float delta){
    if (x==1) return (-b - sqrt(delta))/(2*a);
    else return (-b + sqrt(delta))/(2*a);
}
