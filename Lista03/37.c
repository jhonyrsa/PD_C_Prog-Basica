#include <stdio.h>

int main(int argc, char **argv){
    int i, a,b,c,d,x,y, sum;
    for(i=1000;i<=9999; i++){
        a = i/1000;
        b = (i%1000)/100;
        x = a*10 + b;
        c = ((i%1000)%100)/10;
        d = ((i%1000)%100)%10;
        y = c*10 + d;
        sum = x + y;
        if(i==sum*sum)
            printf("%d\n", i);
    }
}
