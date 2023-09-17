#include <stdio.h>

float transformaFahrenheit(float tempertura);

int main(void){
    float temperaturaCelcius;
    printf("Conversao de unidades: Temperatura - Celcius para Fahrenheit\n");
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &temperaturaCelcius);
    float temperaturaFahrenreit = transformaFahrenheit(temperaturaCelcius);
    printf("%.2f C convertido eh %.2f F\n", temperaturaCelcius, temperaturaFahrenreit);
    return 0;
}
float transformaFahrenheit(float temperatura){
    return temperatura*(9.0/5.0)+32.0;
}

