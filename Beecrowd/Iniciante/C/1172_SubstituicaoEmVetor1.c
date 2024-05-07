/*
Faça um programa que leia um vetor X[10]. 
Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. 
Em seguida, mostre o vetor X.
*/

#include <stdio.h>

#define TAM 10
 
void LerVetor(int *x) {
    for (int i=0; i<TAM; i++) {
        scanf("%d", &x[i]);
    }
}

void SubstituirVetor(int *x) {
    for (int i=0; i<TAM; i++) {
        if (x[i] <= 0) {
            x[i] = 1;
        }
    }
}

void MostrarVetor(int *x) {
    for (int i=0; i<TAM; i++) {
        printf("X[%d] = %d\n", i, x[i]);
    }
}

int main() {
    int vetor[TAM];
    
    LerVetor(&vetor[0]);
    SubstituirVetor(&vetor[0]);
    MostrarVetor(&vetor[0]);
    
    return 0;
}