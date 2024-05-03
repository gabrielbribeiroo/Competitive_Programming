/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.
*/

#include <stdio.h>

void LerQuantidadeTermos(int *n) {
     scanf("%d", n);
}

void Fibonacci(int n) {
    int antepenultimo = 0, penultimo = 1, atual;

    printf("%d %d ", antepenultimo, penultimo);

    for (int i=3; i<=n; i++) {
        atual = antepenultimo + penultimo;
        
        if (i != n) {
            printf("%d ", atual);    
        }
        else {
            printf("%d", atual);
        }
        
        antepenultimo = penultimo;
        penultimo = atual;
    }
    
    printf("\n");
}

int main() {
    int num;
    
    LerQuantidadeTermos(&num);
    Fibonacci(num);

    return 0;
}   