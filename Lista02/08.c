#include <stdio.h>

int main(int argc, char *argv[]){
    float nota1, nota2;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    if(nota1>=0.0 && nota1<=10.0 && nota2>=0.0 && nota2<=10.0){
        float media = (nota1+nota2)/2.0;
        printf("A media eh %.2f\n", media);
    }else
        printf("Notas invalidas\n");
    return 0;
}
