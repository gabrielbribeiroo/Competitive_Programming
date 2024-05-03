/*
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
Caso não for possível, mostre a mensagem “divisao impossivel” para os valores em questão.
*/

#include <stdio.h>

void LerQuantidadeTeste(int *n) {
    scanf("%d", n);
}

int VerificarDivisibilidade(int x, int y) {
    if (y != 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void CalcularDivisao(int n, int *x, int *y) {
    for (int i=0; i<n; i++) {
        scanf("%d %d", x, y);
        
        if (VerificarDivisibilidade(*x, *y)) {
            double quociente = (double) *x / *y;
            printf("%.1lf\n", quociente);
        }
        else {
            printf("divisao impossivel\n");
        }
    }
}

int main() {
    int qnt_teste, num1, num2;
    
    LerQuantidadeTeste(&qnt_teste);
    CalcularDivisao(qnt_teste, &num1, &num2);
    
    return 0;
}