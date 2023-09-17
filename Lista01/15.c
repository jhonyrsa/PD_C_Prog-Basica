#include <stdio.h>
#define pi 3.14159265

float conversaoGraus(float angulo);

int main(int argc, char **argv)
{
    float anguloRadianos;
    printf("Conversor de unidades: Angulo - rad para graus\n");
    printf("Digite o angulo em radianos: ");
    scanf("%f", &anguloRadianos);
    float anguloGraus = conversaoGraus(anguloRadianos);
    printf("%.2f rad convertido eh %.2f graus\n", anguloRadianos, anguloGraus);
    return 0;
}

float conversaoGraus(float angulo)
{
    return angulo*180/pi;
}
