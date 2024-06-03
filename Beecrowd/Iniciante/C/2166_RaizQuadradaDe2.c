/*
Uma das formas de calcular a raiz quadrada de um número natural é pelo método das frações periódicas continuadas. 
Esse método usa como denominador uma repetição de frações. 
Essa repetição pode ser feita uma quantidade específica de vezes.
Por exemplo, ao repetir 2 vezes a fração continuada para calcular a raiz quadrada de 2, temos a fórmula abaixo.
Sua tarefa é, dado o número N de repetições, calcular o valor aproximado da raiz quadrada de 2.
*/

#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num); // Leitura do número de repetições do denominador na fração continuada
    
    double sqrt2 = 0.0;
    
    for (int i=0; i<num; i++) {
        sqrt2 = 1.0 / (2.0 + sqrt2); // Inicializa com a fração mais interna
    }
    
    sqrt2 += 1.0; // Adiciona a parte externa
    
    printf("%.10lf\n", sqrt2);
    
    return 0;
}