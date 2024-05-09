/*
Faça um programa que leia um vetor A[100]. 
No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.
*/

#include <stdio.h>
 
#define MAX 100

void LerVetor(double *a) {
    for (int i=0; i<MAX; i++) {
        scanf("%lf", &a[i]);
    }
}

void MostrarValoresAte10(double *a) {
    for (int i=0; i<MAX; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, a[i]);
        }
    }
}

int main() {
    double vetor[MAX];
    
    LerVetor(vetor);
    MostrarValoresAte10(vetor);
    
    return 0;
}