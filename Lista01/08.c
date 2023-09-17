#include <stdio.h>

float conversorCelcius(float temperatura);

int main(void){
    float temperaturaKelvin;
    printf("Conversao de unidades: Temperatura - Kelvin para Celcius\n");
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &temperaturaKelvin);
    float temperaturaCelcius = conversorCelcius(temperaturaKelvin);
    printf("%.2f K convertido eh %.2f C", temperaturaKelvin, temperaturaCelcius);
    return 0;
}

float conversorCelcius(float temperatura){
    return temperatura-273.15;
}
