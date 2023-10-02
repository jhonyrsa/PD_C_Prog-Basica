#include <stdio.h>

int main(int argc, char **argv){
    float soma = 0.0;
    int i;
    for(i=0; i<50;i++) soma = soma + (float)(2*i+1)/(float)(i+1);
    printf("S = %.4f\n", soma);
    return 0;
}
