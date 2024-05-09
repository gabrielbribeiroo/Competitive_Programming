/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. 
Em cada posição subsequente, coloque o dobro do valor da posição anterior. 
Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. 
Mostre o vetor em seguida.
*/

#include <stdio.h>

#define MAX 10

void LerValorInicial(int *x) {
    scanf("%d", x);
}

void PreencherVetor(int *n, int x) {
    for (int i=0; i<MAX; i++) {
        if (i == 0) {
            n[i] = x;
        }
        else {
            n[i] = n[i-1] * 2;   
        }
    }
} 

void MostrarVetor(int *n) {
    for (int i=0; i<MAX; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
}

int main() {
    int vetor[MAX], valor_inicial;
    
    LerValorInicial(&valor_inicial);
    PreencherVetor(&vetor, valor_inicial);
    MostrarVetor(&vetor);
    
    return 0;
}