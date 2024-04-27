/*
Leia 100 valores inteiros. 
Apresente então, o maior valor lido e a posição dentre os 100 valores lidos.
*/

#include <stdio.h>

#define MAX 100

void LerValores(int v[]) {
    for (int i=0; i<MAX; i++) {
        scanf("%d", &v[i]);
    }
}

void EncontrarMaiorValor(int v[], int *m, int *p) {
    *m = v[0];
    *p = 1;
    
    for (int i=1; i<MAX; i++) {
        if (v[i] > *m) {
            *m = v[i];
            *p = i + 1;
        }
    }
}

void MostrarMaiorValor(int *m, int *p) {
    printf("%d\n%d\n", *m, *p);
}
 
int main() {
    int num[100], maior, posicao;
    
    LerValores(num);
    EncontrarMaiorValor(num, &maior, &posicao);
    MostrarMaiorValor(&maior, &posicao);
    
    return 0;
}