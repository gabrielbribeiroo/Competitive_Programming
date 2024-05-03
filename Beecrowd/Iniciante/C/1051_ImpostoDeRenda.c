/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio. 
A moeda deste país é o Rombus, cujo símbolo é o R$.
Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. 

Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.
Renda                   Imposto de Renda
0.00    - 2000.00           Isento
2000.01 - 3000.00           8%
3000.01 - 4500.00           18%
>4500.00                    28%

Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. 
No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. 
O valor deve ser impresso com duas casas decimais.
*/

#include <stdio.h>
 
void LerSalario(double *s) {
    scanf("%lf", s);
}

double CalcularIR(double *s) {
    double imposto = 0;
    
    if (*s <= 2000) {
        imposto = 0;
    }
    else {
        if (*s <= 3000) {
            imposto = (*s - 2000) * 0.08;
        }
        else {
            if (*s <= 4500) {
                imposto = ((*s - 3000) * 0.18 + 1000 * 0.08);
            }
            else {
                imposto = ((*s - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08);
            }
        }
    }
    
    return imposto;
}

void MostrarIR(double *s, double *i) {
    if (*i == 0) {
        printf("Isento\n");
    }
    else {
        printf("R$ %.2lf\n", *i);
    } 
}

int main() {
    double salario, imposto;
    
    LerSalario(&salario);
    imposto = CalcularIR(&salario);
    MostrarIR(&salario, &imposto);
    
    return 0;
}