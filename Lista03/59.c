/**
59. Escreva um programa que leia o numero de habitantes de uma determinada cidade, o ´
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mes ˆ
e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o ´
maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de ´
cada categoria de consumidor.
**/
#include <stdio.h>
int main(int argc, char **argv){
    int numeroHabitantes;
    printf("Informe a quantidade de habitantes da cidade: ");
    scanf("%d", &numeroHabitantes);
    float menorConsumo, maiorConsumo, consumoResidencial = 0, consumoComercial = 0,consumoIndustrial = 0;
    float consumoTotalResidencial, consumoTotalComercial, consumoTotalIndustrial;
    int i, opcao;
    for(i=0;i<numeroHabitantes; i++){
        printf("Consumidor:\n");
        printf("\t1. Residencial\n\t2. Comercial\n\t3. Industrial\n");
        printf("Informe a opcao do consumidor a ser informado: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Informe o consumo: ");
                scanf("%f", &consumoResidencial);
                consumoTotalResidencial = consumoTotalResidencial + consumoResidencial;
                if(i==0){
                    menorConsumo = consumoResidencial;
                    maiorConsumo = consumoResidencial;
                }
                else if(menorConsumo>consumoResidencial) menorConsumo = consumoResidencial;
                else if(maiorConsumo<consumoResidencial) maiorConsumo = consumoResidencial;
                break;
            case 2:
                printf("Informe o consumo: ");
                scanf("%f", &consumoComercial);
                consumoTotalComercial = consumoTotalComercial + consumoComercial;
                if(i==0){
                    menorConsumo = consumoComercial;
                    maiorConsumo = consumoComercial;
                }
                else if(menorConsumo>consumoComercial) menorConsumo = consumoComercial;
                else if(maiorConsumo<consumoComercial) maiorConsumo = consumoComercial;
                break;
            case 3:
                printf("Informe o consumo: ");
                scanf("%f", &consumoIndustrial);
                consumoTotalIndustrial = consumoTotalIndustrial + consumoIndustrial;
                if(i==0){
                    menorConsumo = consumoIndustrial;
                    maiorConsumo = consumoIndustrial;
                }
                else if(menorConsumo>consumoIndustrial) menorConsumo = consumoIndustrial;
                else if(maiorConsumo<consumoIndustrial) maiorConsumo = consumoIndustrial;
                break;
            default:
                printf("Opcao invalida, informe novamente\n");
                i--;
        }
    }
    float consumoTotal = consumoTotalComercial + consumoTotalIndustrial + consumoTotalResidencial;
    float consumoMedio = consumoTotal/numeroHabitantes;
    printf("\nO menor consumo da cidade foi %.2f kW\n", menorConsumo);
    printf("O maior consumo da cidade foi %.2f kW\n", maiorConsumo);
    printf("O consumo medio da cidade foi %.2f kW\n", consumoMedio);
    printf("O consumo total da cidade foi %.2f kW\n", consumoTotal);
    printf("O consumo total dos consumidores residencias foi %.2f kW\n", consumoTotalResidencial);
    printf("O consumo total dos consumidores comerciais foi %.2f kW\n", consumoTotalComercial);
    printf("O consumo total dos consumidores industriais foi %.2f kW\n", consumoTotalIndustrial);
    return 0;
}
