#include <stdio.h>

int main(int argc, char **argv){
    float rEq, r1, r2;
    do{
        printf("Informe R1: ");
        scanf("%f", &r1);
        printf("Informe R2: ");
        scanf("%f", &r2);

        rEq = (r1*r2)/(r1+r2);
        printf("Restencia Equivalente: %.3f\n\n", rEq);

    }while(r1!=0 && r2!=0);
}
