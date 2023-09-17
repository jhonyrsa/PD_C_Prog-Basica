#include <stdio.h>

int ehTriangulo(float a, float b, float c);
int tipoTriangulo(float a, float b, float c);

int main(int argc, char **argv){
    float medA, medB, medC;
    printf("Verificador de Triangulos\n");
    printf("Informe a medida A: ");
    scanf("%f", &medA);
    printf("Informe a medida B: ");
    scanf("%f", &medB);
    printf("Informe a medida C: ");
    scanf("%f", &medC);
    if(ehTriangulo(medA,medB,medC)==0){
        printf("As medidas informadas formam um triangulo!!\n");
        if(tipoTriangulo(medA,medB,medC)==0)printf("Triangulo equilatero\n");
        else if(tipoTriangulo(medA,medB,medC)==1)printf("Triangulo isosceles\n");
        else printf("Triangulo escaleno\n");
    }else
        printf("Verifique as dimensoes.\nValores informados nao forma um triangulo.\n");
    return 0;
}
int ehTriangulo(float a, float b, float c){
    if((a<b+c)&& (b<a+c)&&(c<a+b)) return 0;
    else return 1;
}

int tipoTriangulo(float a, float b, float c){
    if(a==b && b==c) return 0;
    else if (a==b || a==c || c==b) return 1;
    else return 2;
}
