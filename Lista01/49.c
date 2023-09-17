#include <stdio.h>

int main(void){
    int horaInicial, minutoInicial,segundoInicial,segundosExperimentos;
    printf("Calculadora de fim de experimento\n");
    printf("Informe a hora minuto e segundo (separados por espaco): ");
    scanf("%d %d %d", &horaInicial,&minutoInicial,&segundoInicial);
    printf("Informe a duracao total do experimento em segundos: ");
    scanf("%d", &segundosExperimentos);
    int segundosTotais = horaInicial*3600 + minutoInicial*60+segundoInicial+segundosExperimentos;
    int horaFinal, minutoFinal, segundoFinal;
    horaFinal = segundosTotais/3600;
    minutoFinal = (segundosTotais%3600)/60;
    segundoFinal = (segundosTotais%3600)%60;
    printf("\nO experimento que iniciou em:\n\t%d h %d min %d s\n",horaInicial,minutoInicial,segundoInicial);
    printf("findara em:\n\t%d h %d min %d s\n",horaFinal,minutoFinal,segundoFinal);
    return 0;
}
