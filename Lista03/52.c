#include <stdio.h>

int main(int argc, char **argv){
    int saque;
    while(1){
        printf("Informe o valor de saque: ");
        scanf("%d", &saque);
        int cemReais, cinquentaReais, vinteReais, dezReais, cincoReais, doisReais, umReal;

        cemReais = saque/100;
        cinquentaReais = (saque%100)/50;
        vinteReais = ((saque%100)%50)/20;
        dezReais = (((saque%100)%50)%20)/10;
        cincoReais = ((((saque%100)%50)%20)%10)/5;
        doisReais = (((((saque%100)%50)%20)%10)%5)/2;
        umReal = (((((saque%100)%50)%20)%10)%5)%2;

        printf("_______Saque_______\n");
        printf("Notas R$ 100.00: %d\n", cemReais);
        printf("Notas R$  50.00: %d\n", cinquentaReais);
        printf("Notas R$  20.00: %d\n", vinteReais);
        printf("Notas R$  10.00: %d\n", dezReais);
        printf("Notas R$   5.00: %d\n", cincoReais);
        printf("Notas R$   2.00: %d\n", doisReais);
        printf("Notas R$   1.00: %d\n", umReal);

        int opcao;
        printf("Deseja realizar novo saque?\n\t1- Sim\n\t2- Nao\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        if (opcao == 2) break;
    }
    return 0;
}
