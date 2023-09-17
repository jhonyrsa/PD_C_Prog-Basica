#include <stdio.h>
#include <math.h>

int main(void){
    int numero;
    printf("Inversor de numero: ");
    scanf("%d", &numero);
    int a, b, c, novoNumero=0;
    a = numero/100;
    b = (numero%100)/10;
    c = (numero%100)%10;
    novoNumero = a+b*10+c*100;
    printf("\n\t  NumeroLido = %d\n", numero);
    printf("\tNumeroGerado = %d\n",novoNumero);
    return 0;
}
