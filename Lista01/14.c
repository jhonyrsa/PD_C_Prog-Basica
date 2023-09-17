#include <stdio.h>
#define pi 3.14159265

float conversaoRad(float angulo);

int main(int argc, char **argv)
{
    float anguloGraus;
    printf("Conversor de unidades: Angulos = graus para radianos\n");
    printf("Digite o angulo em graus: ");
    scanf("%f", &anguloGraus);
    float anguloRadianos = conversaoRad(anguloGraus);
    printf("%.2f graus convertido eh %.2f rad\n", anguloGraus, anguloRadianos);
    return 0;
}

float conversaoRad(float angulo)
{
    return angulo*pi/180.0;
}
