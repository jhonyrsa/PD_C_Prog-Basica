#include <stdio.h>

int main(void){
    int segundosTotais, segundos, minutos, horas;
    printf("Digite a quantidade de segundos totais: ");
    scanf("%d", &segundosTotais);
    horas = segundosTotais/3600;
    minutos = (segundosTotais%3600)/60;
    segundos = (segundosTotais%3600)%60;
    printf("\n\t%d h %d min e %d s\n", horas, minutos, segundos);
    return 0;
}
