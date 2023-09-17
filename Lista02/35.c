#include <stdio.h>

int main(int argc, char **argv){
    int dia, mes, ano;
    printf("Validador de datas\n");
    printf("Informe a data (dd/mm/aaa): ");
    scanf("%d / %d / %d", &dia, &mes, &ano);
    if(ano%400==0 || (ano%4==0 && ano%10!=0)){
        //Verificacao para ano bissexto
        printf("Ano bissexto!\n");
        if(mes==02 && dia>=01 && dia<=29) printf("Data valida\n");
        else if((mes==01 || mes==03 || mes==05 || mes==07 || mes==8 || mes==10|| mes==12) &&(dia>=01 && dia<=31)) printf("Data valida\n");
        else if((mes==04 || mes==06 || mes==9 || mes==11) &&(dia>=01 && dia<=30)) printf("Data valida\n");
        else printf("Data invalida\n");
    }else{
        //Verificacao para ano bissexto
        if(mes==02 && dia>=01 && dia<=28) printf("Data valida\n");
        else if((mes==01 || mes==03 || mes==05 || mes==07 || mes==8 || mes==10|| mes==12) &&(dia>=01 && dia<=31)) printf("Data valida\n");
        else if((mes==04 || mes==06 || mes==9 || mes==11) &&(dia>=01 && dia<=30)) printf("Data valida\n");
        else printf("Data invalida\n");
    }
    return 0;
}
