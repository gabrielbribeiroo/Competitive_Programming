/*
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R³. 
Considere para pi o valor 3.14159.
*/

#include <stdio.h>

// Definição de uma constante pi no valor de 3.14159
#define pi 3.14159

int main() {
    // Declaração de variáveis
    double raio, volume;
    
    // Leitura do raio
    scanf("%lf", &raio);
    
    // Cálculo do volume
    volume = (4 / 3.0) * pi * raio * raio * raio;
    
    // Mostra o volume
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}