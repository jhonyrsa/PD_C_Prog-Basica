#include <stdio.h>

int main(int argc, char *argv[]){
    float vendas=0, comissao=0;
    printf("Calculadora de comissao\n");
    printf("Informe o valor das vendas: ");
    scanf("%f", &vendas);
    if(vendas>=100000.00) comissao = 700+vendas*0.16;
    else if(vendas>=80000.00 && vendas<100000.00) comissao = 650.00+vendas*0.14;
    else if(vendas>=60000.00 && vendas<80000.00) comissao = 600.00+vendas*0.14;
    else if(vendas>=40000.00 && vendas<60000.00) comissao = 550.00+vendas*0.14;
    else if(vendas>=20000.00 && vendas<40000.00) comissao = 500.00+vendas*0.14;
    else if(vendas>=0.01 && vendas<20000.00) comissao = 400+vendas*0.14;
    else printf("Sem vendas comissionadas\n");
    if(vendas>=0.01) printf("Comissao devida: R$ %.2f\n", comissao);
    return 0;
}
