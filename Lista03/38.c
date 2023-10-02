#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 1000; a++) {
        for (b = a + 1; b <= 1000; b++) {
            c = 1000 - a - b;

            if (a * a + b * b == c * c) {
                printf("Os numeros a, b e c que formam um terno pitagorico e somam 1000 sao: a=%d, b=%d, c=%d\n", a, b, c);
                printf("O produto abc e igual a %d\n", a * b * c);
                return 0;
            }
        }
    }

    printf("Nenhum terno pitagórico encontrado para a+b+c=1000.\n");
    return 0;
}
