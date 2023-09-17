#include <stdio.h>

int main(void){
    float apostaAmigo1, apostaAmigo2, apostaAmigo3;
    printf("Distribuidora de Premios 'Amigos Unidos'\n");
    printf("Informe quanto o amigo 1 contribuiu: ");
    scanf("%f", &apostaAmigo1);
    printf("Informe quanto o amigo 2 contribuiu: ");
    scanf("%f", &apostaAmigo2);
    printf("Informe quanto o amigo 3 contribuiu: ");
    scanf("%f", &apostaAmigo3);
    float apostaTotal = apostaAmigo1+apostaAmigo2+apostaAmigo3;
    float porcentagemAmigo1 = apostaAmigo1/apostaTotal;
    float porcentagemAmigo2 = apostaAmigo2/apostaTotal;
    float porcentagemAmigo3 = apostaAmigo3/apostaTotal;
    float premio=0;
    printf("\nInforme o premio recebido: ");
    scanf("%f", &premio);
    float premioAmigo1 = premio*porcentagemAmigo1;
    float premioAmigo2 = premio*porcentagemAmigo2;
    float premioAmigo3 = premio*porcentagemAmigo3;
    printf("\nPremio do primeiro amigo: R$ %.2f\n", premioAmigo1);
    printf("Premio do segundo amigo: R$ %.2f\n", premioAmigo2);
    printf("Premio do terceiro amigo: R$ %.2f\n", premioAmigo3);
    return 0;
}
