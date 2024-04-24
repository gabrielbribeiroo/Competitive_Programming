/*
Leia um valor inteiro N. 
Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
*/

#include <stdio.h>

void LerValor(int *n) {
    scanf("%d", n);
}

void QuadradosDosParesAteN(int *n) {
    for (int i=1; i<=*n; i++) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i*i);
        }
    }
}

int main() {
    int num;
    
    LerValor(&num);
    QuadradosDosParesAteN(&num);
 
    return 0;
}