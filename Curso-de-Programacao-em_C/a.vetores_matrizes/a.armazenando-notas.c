#include <stdio.h>
#define TAM_MAX 100

int main(void){
    float notas[TAM_MAX];
    int n;
    printf("Informe a quantidade de alunos para lancar as notas: ");
    scanf("%d", &n);
    int i;

    //lendo as notas
    for(i=0; i<n; i++){
        printf("Informe a nota do aluno %2d: ", i+1);
        scanf("%f", &notas[i]);
    }
    //imprimindo as notas
    for(i=0; i<n; i++) printf("Nota %2d: %2.1f\n", i+1, notas[i]);

    return 0;
}
