/**
60. Faca um programa que leia varios numeros, calcule e mostre: ´
(a) A soma dos numeros digitados
(b) A quantidade de numeros digitados
(c) A media dos numeros digitados
(d) O maior numero digitado
(e) O menor numero digitado
(f) A media dos numeros pares
Finalize a entrada de dados caso o usuario informe o valor 0
**/
#include <stdio.h>
int main(int argc, char **argv){
    int numero, somaNumeros=0, somaPares=0, contador=0, contaPares=0, maior, menor;
    do{
        printf("Informe um numero inteiro, 0 para terminar: ");
        scanf("%d", &numero);
        if(numero!=0 && contador==0){
            menor = numero;
            maior = numero;
        }
        else if (numero!=0 && menor>numero) menor = numero;
        else if (numero!=0 && maior<numero) maior = numero;
        if(numero!=0){
            contador++;
            somaNumeros = somaNumeros + numero;
        }
        if(numero!=0 && numero%2==0){
            contaPares++;
            somaPares = somaPares + numero;
        }
    }while(numero!=0);
    float media = somaNumeros/(float)contador;
    float mediaPares = somaPares/(float)contaPares;
    printf("\nSoma de todos os numeros informados: %d\n", somaNumeros);
    printf("Quantidade de numeros digitado: %d\n", contador);
    printf("Media do numeros digitados: %.2f\n", media);
    printf("Menor numero informado: %d\n", menor);
    printf("Maior numero informado: %d\n", maior);
    printf("Media do numeros pares informados: %.2f\n", mediaPares);
    return 0;
}
