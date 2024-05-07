/*
Faça um programa que leia:
    - nome de um vendedor;
    - salário fixo;
    - total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
    char nome[100]; // Declaração de um vetor do tipo caractere de tamanho 100 para receber o nome
    double salario_fixo, vendas, salario_final; // Decalaração de variáveis salario_fixo, vendas e salario_final do tipo double
    
    scanf("%s", &nome); // Lê a string nome
    scanf("%lf\n%lf\n", &salario_fixo, &vendas); // Lê o salário fixo e o total de vendas
    
    salario_final = salario_fixo + (vendas * 0.15); // Cálculo do salário final
    
    printf("TOTAL = R$ %.2lf\n", salario_final); // Mostra o salário final
    
    return 0;
}