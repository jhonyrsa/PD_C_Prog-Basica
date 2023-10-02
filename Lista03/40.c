#include<stdio.h>

int main(void){
    int numero=0, count=0, maior=0, menor=0;
    while(numero>=0){
        printf("Informe um numero >= 0: ");
        scanf("%d", &numero);
        if (count==0 && numero >= 0){
            maior = numero;
            menor = numero;
        }
        else if(numero>maior) maior = numero;
        else if(numero<menor && numero>=0) menor = numero;
        count++;
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}
