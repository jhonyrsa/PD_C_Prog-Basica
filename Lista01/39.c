#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float ganhador1, ganhador2, ganhador3;
    ganhador1 = 780000*0.46;
    ganhador2 = 780000*0.32;
    ganhador3 = 780000-(ganhador1+ganhador2);
    printf("Ganhador 1: R$ %.2f\n", ganhador1);
    printf("Ganhador 2: R$ %.2f\n", ganhador2);
    printf("Ganhador 3: R$ %.2f\n", ganhador3);
    return 0;
}
