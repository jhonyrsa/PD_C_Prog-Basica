#include <stdio.h>

int main(int argc, char *argv[]){
    char sexoBiologico;
    float altura;
    printf("Informe o sexo biologico da pessoa (H para homem ou M para mulher): ");
    scanf("%c", &sexoBiologico);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    float pesoIdeal=0;
    if(sexoBiologico=='h' || sexoBiologico=='H')
        pesoIdeal = (72.7*altura)-58;
    else if(sexoBiologico=='m' || sexoBiologico=='M')
        pesoIdeal = (62.1*altura)-44.7;
    else
        printf("Opcao informada invalida\n");
    if(pesoIdeal>0)
        printf("\nO peso ideal eh %.1f kg\n", pesoIdeal);
    return 0;
}
