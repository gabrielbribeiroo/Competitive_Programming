/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. 
Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. 
Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que:
    - o primeiro valor tem peso 2;
    - o segundo valor tem peso 3;
    - o terceiro valor tem peso 5.
*/

#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 5

 
void LerValor(int *n) { 
    scanf("%d", n);
}

void CalcularMediasPonderadas(int n) {
    for (int i=0; i<n; i++) {
        double valores[3];
        scanf("%lf %lf %lf", &valores[0], &valores[1], &valores[2]);
        
        double soma_pesos = PESO1 + PESO2 + PESO3;
        double soma_valores = valores[0] * PESO1 + valores[1] * PESO2 + valores[2] * PESO3;
        double media_ponderada = soma_valores / soma_pesos;
        
        printf("%.1f\n", media_ponderada);
    }
}

int main() {
    int num;

    LerValor(&num);
    CalcularMediasPonderadas(num);

    return 0;
}