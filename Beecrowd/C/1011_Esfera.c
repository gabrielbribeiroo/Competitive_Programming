/*
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R³. 
Considere para pi o valor 3.14159.
*/

#include <stdio.h>

#define pi 3.14159

int main() {
    double raio, volume;
    
    scanf("%lf", &raio);
    
    volume = (4 / 3.0) * pi * raio * raio * raio;
    
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}