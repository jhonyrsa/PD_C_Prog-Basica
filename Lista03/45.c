#include <stdio.h>

int main(){
    float kmh, ms;
    int opcao;
    do{
        inicio:
        printf("Escolha a conversao a ser realizada\n");
        printf("1 - km/h -> m/s\n");
        printf("2 - m/s -> km/h\n");
        printf("3 - Finalizar\n");
        printf("\tOpcao: ");
        scanf("%d", &opcao);
        if(opcao<1 || opcao>3){
            printf("Opcao invalida\n\n");
            goto inicio;
        }
        else if (opcao == 1){
            printf("Informe a velocidade em km/h: ");
            scanf("%f", &kmh);
            ms = kmh/3.6;
            printf("%.2f km/h convertido eh %.2f m/s\n\n", kmh, ms);
        }
        else if(opcao == 2){
            printf("Informe a velocidade em m/s: ");
            scanf("%f", &ms);
            kmh = ms/3.6;
            printf("%.2f m/s convertido eh %.2f km/h\n\n", ms, kmh);
        }
    }while(opcao!=3);
    return 0;
}
