#include <stdio.h>

int main(int argc, char *argv[]){
    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("O maior deles eh %d\n", num1);
        int diferenca = num1 - num2;
        printf("A diferenca entre eles eh %d\n", diferenca);
    }else{
        printf("O maior deles eh %d\n", num2);
        int diferenca = num2 - num1;
        printf("A diferenca entre eles eh %d\n", diferenca);
    }
    return 0;
}
