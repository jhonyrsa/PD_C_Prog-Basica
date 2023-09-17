#include <stdio.h>

int main(int argc, char **argv){
    float tempoServico=0.0, salarioAntigo=0.0, salarioNovo=0.0;
    printf("Reajustador de Salarios\n");
    printf("Informe o tempo de servico: ");
    scanf("%f", &tempoServico);
    printf("Informe o salario: ");
    scanf("%f", &salarioAntigo);
    if(tempoServico>0.0 && tempoServico<1.0){
        if(salarioAntigo>=0.00 && salarioAntigo<=500.00) salarioNovo = salarioAntigo*1.25;
        if(salarioAntigo>500.00 && salarioAntigo<=1000.00) salarioNovo = salarioAntigo*1.20;
        if(salarioAntigo>1000.00 && salarioAntigo<=1500.00) salarioNovo = salarioAntigo*1.15;
        if(salarioAntigo>1500.00 && salarioAntigo<=2000.00) salarioNovo = salarioAntigo*1.10;
        if(salarioAntigo>2000.00) salarioNovo = salarioAntigo;
    }else if(tempoServico>=1.0 && tempoServico<4.0){
        if(salarioAntigo>=0.00 && salarioAntigo<=500.00) salarioNovo = salarioAntigo*1.25+100.00;
        if(salarioAntigo>500.00 && salarioAntigo<=1000.00) salarioNovo = salarioAntigo*1.20+100.00;
        if(salarioAntigo>1000.00 && salarioAntigo<=1500.00) salarioNovo = salarioAntigo*1.15+100.00;
        if(salarioAntigo>1500.00 && salarioAntigo<=2000.00) salarioNovo = salarioAntigo*1.10+100.00;
        if(salarioAntigo>2000.00) salarioNovo = salarioAntigo+100.00;
    }else if(tempoServico>=4.0 && tempoServico<7.0){
        if(salarioAntigo>=0.00 && salarioAntigo<=500.00) salarioNovo = salarioAntigo*1.25+200.00;
        if(salarioAntigo>500.00 && salarioAntigo<=1000.00) salarioNovo = salarioAntigo*1.20+200.00;
        if(salarioAntigo>1000.00 && salarioAntigo<=1500.00) salarioNovo = salarioAntigo*1.15+200.00;
        if(salarioAntigo>1500.00 && salarioAntigo<=2000.00) salarioNovo = salarioAntigo*1.10+200.00;
        if(salarioAntigo>2000.00) salarioNovo = salarioAntigo+200.00;
    }else if(tempoServico>=7.0 && tempoServico<=10.0){
        if(salarioAntigo>=0.00 && salarioAntigo<=500.00) salarioNovo = salarioAntigo*1.25+300.00;
        if(salarioAntigo>500.00 && salarioAntigo<=1000.00) salarioNovo = salarioAntigo*1.20+300.00;
        if(salarioAntigo>1000.00 && salarioAntigo<=1500.00) salarioNovo = salarioAntigo*1.15+300.00;
        if(salarioAntigo>1500.00 && salarioAntigo<=2000.00) salarioNovo = salarioAntigo*1.10+300.00;
        if(salarioAntigo>2000.00) salarioNovo = salarioAntigo+300.00;
    }else if(tempoServico>10.0){
        if(salarioAntigo>=0.00 && salarioAntigo<=500.00) salarioNovo = salarioAntigo*1.25+500.00;
        if(salarioAntigo>500.00 && salarioAntigo<=1000.00) salarioNovo = salarioAntigo*1.20+500.00;
        if(salarioAntigo>1000.00 && salarioAntigo<=1500.00) salarioNovo = salarioAntigo*1.15+500.00;
        if(salarioAntigo>1500.00 && salarioAntigo<=2000.00) salarioNovo = salarioAntigo*1.10+500.00;
        if(salarioAntigo>2000.00) salarioNovo = salarioAntigo+500.00;
    }
    printf("Novo salario: R$ %.2f\n", salarioNovo);
    return 0;
}
