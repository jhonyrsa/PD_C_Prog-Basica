#include <stdio.h>

int main(int argc, char **argv){
    float num1, num2, resultado;
    printf("Escolha a opcao:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Subtracao entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre dois numeros\n");
    printf("4 - Divisao entre 2 numeros.\n");
    printf("Opcao:");
    int opcao=0;
    scanf("%d", &opcao);
    if(opcao>=1 && opcao<=4){
        printf("Informe o primeiro numero: ");
        scanf("%f", &num1);
        printf("Informe o segundo numero: ");
        scanf("%f", &num2);
        switch(opcao){
            case 1:
                resultado = num1+num2;
                break;
            case 2:
                if(num1>=num2) resultado = num1-num2;
                else resultado = num2-num1;
                break;
            case 3:
                resultado = num1*num2;
                break;
            case 4:
                if(num2==0) resultado = num2/num1;
                else resultado = num1/num2;
                break;
        }
    }else printf("Opcao escolhida nao esta definida\n");

    if(opcao==1) printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
    else if(opcao==2 && num1>=num2) printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
    else if(opcao==2 && num2>num1) printf("%.2f - %.2f = %.2f\n", num2, num1, resultado);
    else if(opcao==3) printf("%.2f * %.2f = %.4f\n", num1, num2, resultado);
    else if(opcao==4 && (num2>0 || num2<0)) printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
    else if(opcao==4 && num2==0) printf("%.2f / %.2f = %.2f\n", num2, num1, resultado);
    return 0;
}
