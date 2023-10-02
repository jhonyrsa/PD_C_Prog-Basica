#include <stdio.h>

int main(int argc, char **argv){
    float chico = 1.50;
    float ze = 1.10;
    int contador=0;
    while(ze<chico){
        chico = chico + 0.02;
        ze = ze + 0.03;
        contador++;
    }
    printf("Em %d anos Ze sera maior que Chico\n", contador);
    return 0;
}
