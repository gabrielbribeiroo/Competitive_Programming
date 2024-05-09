/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. 

Exemplo de entrada
3

Exemplo de saída
N[0] = 0
N[1] = 1
N[2] = 2
N[3] = 0
N[4] = 1
N[5] = 2
N[6] = 0
N[7] = 1
N[8] = 2
...

Imprima o vetor N.
*/

#include <stdio.h>
 
#define MAX 1000

void LerValor(int *x) {
    scanf("%d", x);
}
 
void PreencherVetor(int *n, int x) {
    int num = 0;
    
    for (int i=0; i<MAX; i++) {
        n[i] = num++;
        if (num == x) {
            num = 0;
        }
    }
}

void MostrarVetor(int *n) {
    for (int i=0; i<MAX; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
}
 
int main() {
    int vetor[MAX], val;
    
    LerValor(&val);
    PreencherVetor(vetor, val);
    MostrarVetor(vetor);

    return 0;
}