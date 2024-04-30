/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100
*/

#include <stdio.h>

double CalcularS() {
    double soma = 0;
    
    for (int i=1; i<=100; i++) {
        soma += (double) 1 / i;
    }
    
    return soma;
}

void MostrarS() {
    printf("%.2lf\n", CalcularS());
}

int main() {
    MostrarS();
    
    return 0;
}