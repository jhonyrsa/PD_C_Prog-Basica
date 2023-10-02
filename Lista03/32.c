#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){
    srand((unsigned)time(NULL));
    printf("\nGira dado!!\n");
    int i=0, x = 0;
    for(;;i++){
        selecao:
        printf("Digite:\n\t1 - Girar dado; ou,\n\t2 - Sair\nOpcao: ");
        scanf("%d", &x);
        if(x==1){
            int d1 = 1 + (rand()%6);
            int d2 = 1 + (rand()%6);
            if(d1 > d2) printf("D1 = %d e D2 = %d. D1 > D2\n", d1, d2);
            else if(d1 < d2) printf("D1 = %d e D2 = %d. D1 < D2\n", d1, d2);
            else printf("D1 = %d e D2 = %d. D1 = D2\n", d1, d2);
        }
        else if (x==2) break;
        else{
            printf("Opcao invalida\n");
            goto selecao;
        }
        printf("\n");
    }
    return 0;
}
