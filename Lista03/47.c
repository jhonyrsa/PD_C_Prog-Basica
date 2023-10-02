#include <stdio.h>

int main()
{
    int opcao;
    float resultado, numero1, numero2;
    do{
        Opcao:
        printf("Escolha a operacao que deseja fazer\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("\tOpcao: ");
        scanf("%d", &opcao);
        if(opcao<1 && opcao >5){
            printf("Opcao invalida\n\n");
            goto Opcao;
        }else if(opcao>=1 &&opcao<5){
            printf("Informe N1: ");
            scanf("%f", &numero1);
            printf("Informe N2: ");
            scanf("%f", &numero2);
            if(opcao==1) resultado = numero1+numero2;
            else if(opcao==2) resultado = numero1-numero2;
            else if(opcao == 3) resultado = numero1*numero2;
            else resultado = numero1/numero2;
            printf("Resultado: %f\n\n", resultado);
        }
    }while(opcao!=5);
}
