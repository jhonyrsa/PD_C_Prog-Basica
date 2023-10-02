#include <stdio.h>

int main(int argc, char **argv){
    int n, i, j;
    printf("Informe a quantidade de multiplos: ");
    scanf("%d", &n);
    printf("Informe i: ");
    scanf("%d", &i);
    printf("Infomre j: ");
    scanf("%d", &j);
    int k, counter=0;
    for(k=0;;k++){
        if (k%i==0){
            printf("%d ", k);
            counter++;
        }
        else if (k%j ==0){
            printf("%d ", k);
            counter++;
        }
        if(counter==n) break;
    }
    return 0;
}
