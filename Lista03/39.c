#include <stdio.h>
int main(void){
    float base=1.0, altura=1.0, area = 1.0;
    do{
        printf("Informe a altura do triangulo: ");
        scanf("%f", &altura);
        printf("Informe a base do triangulo: ");
        scanf("%f", &base);
        if(base>0 && altura>0){
            area = (base*altura)/2;
            printf("Area do triangulo: %.2f\n\n", area);
        }else printf("Entrada com dados invalidos\n");
    }while(base>0 && altura>0);
    return 0;
}
