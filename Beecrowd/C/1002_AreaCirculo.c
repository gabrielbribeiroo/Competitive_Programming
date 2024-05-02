/*
A fórmula para calcular a área de uma circunferência é: area = π . raio². 
Considerando para este problema que π = 3.14159:
Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
*/

#include <stdio.h>

#define PI 3.14159 // Define uma constante PI para o programa com o valor de 3.14159
 
int main() {
    double raio, area; // Cria as variáveis raio e area do tipo double
     
    scanf("%lf", &raio); // Lê o valor da variável raio
    
    area = PI * raio * raio; // Atribui o valor do produto de pi pelo raio ao quadrado, à variável area
    
    printf("A=%.4f\n", area); // Mostra o valor da área
    
    return 0;
}