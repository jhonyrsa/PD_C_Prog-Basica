#include <stdio.h>

float conversaoLitros(float volume);

int main(void){
    float volumeMetroscub;
    printf("Conversor de unidades: Volume - m^3 para L\n");
    printf("Digite o volume em m^3: ");
    scanf("%f", &volumeMetroscub);
    float volumeLitros = conversaoLitros(volumeMetroscub);
    printf("%.2f m^3 convertido eh %.2f L\n", volumeMetroscub, volumeLitros);
    return 0;
}

float conversaoLitros(float volume){
    return 1000*volume;
}
