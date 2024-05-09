/*
Faça um programa que leia um valor N. 
Este N será o tamanho de um vetor X[N]. 
A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.
*/

#include <stdio.h>

void QuantidadeNumeros(int *n) {
    scanf("%d", n);
}

void LerVetor(int *x, int n) {
    for (int i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }
}

void MenorValor(int *x, int n) {
    int menor = 100000, pos_men;
    
    for (int i=0; i<n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            pos_men = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos_men);
}
 
int main() {
    int qnt_teste;
    QuantidadeNumeros(&qnt_teste);
    
    int vetor[qnt_teste];
    LerVetor(vetor, qnt_teste);
    MenorValor(vetor, qnt_teste);
    
    return 0;
}