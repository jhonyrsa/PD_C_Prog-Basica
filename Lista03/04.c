#include <stdio.h>

int main(void){
    int i;
    for(i=0; i<=100000; i+=1000) printf("%d\n", i);
    return 0;
}
