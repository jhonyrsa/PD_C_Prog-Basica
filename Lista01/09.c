#include <stdio.h>

float conversorKelvin(float temperatura);

int main(int argc, char **argv){
    float temperaturaCelcius;
    printf("Conversor de unidades: Temperatura - Celcius para Kelvin\n");
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &temperaturaCelcius);
    float temperaturaKelvin = conversorKelvin(temperaturaCelcius);
    printf("%.2f C convertido eh %.2f K\n", temperaturaCelcius, temperaturaKelvin);
    return 0;
}

float conversorKelvin(float temperatura){
    return temperatura+273.15;
}
