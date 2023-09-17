#include <stdio.h>

float conversaoMetrosCubicos(float volume);

int main(void){
    float volumeLitros=0;
    printf("Conversor de unidades: Volume - L para m^3\n");
    printf("Digite o volume em L: ");
    scanf("%f", &volumeLitros);
    float volumeMetrosCubicos = conversaoMetrosCubicos(volumeLitros);
    printf("%.2f L eh %f m^3\n", volumeLitros, volumeMetrosCubicos);
    return 0;
}

float conversaoMetrosCubicos(float volume){
    return volume/1000.0;
}
