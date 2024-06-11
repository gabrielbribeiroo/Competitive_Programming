/*
O Sul é uma das regiões que mais contribuem para o Produto Interno Bruto (PIB) do Brasil. 
No entanto, devido à pandemia de COVID-19, a economia nos três estados do Sul foi muito afetada. 
Alice, uma pesquisadora da Universidade do Sul, coletou dados sobre a flutuação do PIB de toda a região Sul em cada um dos dois últimos anos. 
Cada flutuação é expressa por uma porcentagem, de modo que uma porcentagem positiva indica crescimento naquele período de um ano, enquanto que uma porcentagem negativa indica decrescimento.
Bob, um político, dará uma entrevista à imprensa amanhã. 
Com base nos dois valores coletados por Alice, Bob deseja calcular a flutuação do PIB correspondente ao período todo dos dois anos analisados, para não falar besteira na entrevista.
*/

#include <stdio.h>
 
int main() {
    double f1, f2;
    scanf("%lf %lf", &f1, &f2); // Leitura dos valores de entrada
    
    // Cálculo do fator de crescimento para cada ano
    double fator_ano1 = 1 + f1 / 100;
    double fator_ano2 = 1 + f2 / 100;
    
    double fator_total = fator_ano1 * fator_ano2; // Cálculo do fator de crescimento total ao longo dos dois anos
    
    double flutuacao_total = (fator_total - 1) * 100; // Cálculo da flutuação total em porcentagem
    
    printf("%.6lf\n", flutuacao_total);
    
    return 0;
}