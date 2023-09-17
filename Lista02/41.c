#include <stdio.h>

int main(int argc, char **argv){
    float peso, altura, IMC;
    printf("Calculadora de IMC\n");
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    IMC = peso/(altura*altura);
    printf("IMC = %.1f\n", IMC);
    if(IMC<18.5) printf("Abaixo do peso\n");
    else if(IMC>=18.5 && IMC<25.0) printf("Saudavel\n");
    else if(IMC>=25.0 && IMC<30.0) printf("Sobrepeso\n");
    else if(IMC>=30.0 && IMC<35.0) printf("Obesidade Grau I\n");
    else if(IMC>=35.0 && IMC<40.0) printf("Obesidade Grau II\n");
    else if(IMC>=40.0) printf("Obesidade Grau III\n");
    return 0;
}
