/*
A fórmula para calcular a área de uma circunferência é: area = π . raio². 
Considerando para este problema que π = 3.14159:
Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
*/

#include <stdio.h>

#define PI 3.14159
 
int main() {
    double raio, area;
    
    scanf("%lf", &raio);
    
    area = PI * raio * raio;
    
    printf("A=%.4f\n", area);
    
    return 0;
}