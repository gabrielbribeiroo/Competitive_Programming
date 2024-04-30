/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
*/

#include <stdio.h>

double CalcularS() {
    double soma = 1.0;
    int denominador = 2;
    
    for (int i=1; i<=19; i++) {
        double termo = (2*i + 1) / (double) denominador;
        soma += termo;
        denominador *= 2;
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