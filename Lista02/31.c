#include <stdio.h>

int main(int argc, char **argv){
    float altura, peso;
    printf("Classifica pessoas\n");
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    if(altura<1.20 && peso<=60.0) printf("A\n");
    else if(altura<1.20 && (peso>60.0 && peso<=90.0)) printf("D\n");
    else if(altura<1.20 && (peso>90.0)) printf("G\n");
    else if((altura>=1.20 && altura<=1.70)&&(peso<=60.0)) printf("B\n");
    else if((altura>=1.20 && altura<=1.70)&&(peso>60.0 && peso<=90.0)) printf("E\n");
    else if((altura>=1.20 && altura<=1.70)&&(peso>90.0)) printf("H\n");
    else if(altura>1.70 && peso<=60.0) printf("C\n");
    else if(altura>1.70 && (peso>60.0 && peso<=90.0)) printf("F\n");
    else printf("I\n");
    return 0;
}
