#include <stdio.h>

float transformaCelcius(float temperatura);

int main(void){
    float temperaturaFahrenheit;
    printf("Conversor de unidades: Temperatura - Fahrenheit para Celcius\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);
    float temperaturaCelcius = transformaCelcius(temperaturaFahrenheit);
    printf("%.2f F convertido eh %.2f C\n", temperaturaFahrenheit, temperaturaCelcius);
    return 0;
}

float transformaCelcius(float temperatura){
    return 5.0*(temperatura - 32.0)/9.0;
}
