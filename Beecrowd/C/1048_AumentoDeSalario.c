/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários, de acordo com a tabela abaixo:

Salário	        Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00       07%
Acima de 2000.00        04%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
*/

#include <stdio.h>

void LerSalario(double *s) {
    scanf("%lf", s);
}

int CalcularPercentual(double *s) {
    if (*s <= 400) {
        return 15;
    } 
    else {
        if (*s <= 800) {
            return 12;
        } 
        else {
            if (*s <= 1200) {
                return 10;
            }
            else {
                if (*s <= 2000) {
                    return 7;
                }
                else {
                    return 4;
                }
            }
        } 
    } 
}

double CalcularReajuste(double *s, int *p) {
    return ((*s) * (*p)) / 100.00;
}

double CalcularNovoSalario(double *s, double *r) {
    return ((*s) + (*r));
}

void MostrarResultados(double *n, double *r, int *p) {
    printf("Novo salario: %.2lf\n", *n);
    printf("Reajuste ganho: %.2lf\n", *r);
    printf("Em percentual: %d %%\n", *p);
}
 
int main() {
    double salario, novo_salario, reajuste;
    int percentual;
    
    LerSalario(&salario);
    percentual = CalcularPercentual(&salario);
    reajuste = CalcularReajuste(&salario, &percentual);
    novo_salario = CalcularNovoSalario(&salario, &reajuste);
    
    MostrarResultados(&novo_salario, &reajuste, &percentual);
     
    return 0;
}
