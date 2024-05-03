/*
Faça um programa que leia:
    - nome de um vendedor;
    - salário fixo;
    - total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
    char nome[100];
    double salario_fixo, vendas, salario_final;
    
    scanf("%s", &nome);
    scanf("%lf\n%lf\n", &salario_fixo, &vendas);
    
    salario_final = salario_fixo + (vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", salario_final);
    
    return 0;
}