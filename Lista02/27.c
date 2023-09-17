#include <stdio.h>

int main(int argc, char **argv){
    int idade;
    printf("Classificador de nadadores\n");
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if(idade>=5 && idade<=7) printf("Infantil A\n");
    else if (idade>7 && idade<=10) printf("Infantil B\n");
    else if (idade>10 && idade<=13) printf("Juvenil A\n");
    else if (idade>13 && idade<=17) printf("Juvenil B\n");
    else if (idade>17) printf("Senior\n");
    return 0;
}
