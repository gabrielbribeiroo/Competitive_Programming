/*
Leia 2 valores inteiros (A e B). 
Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
*/

#include <stdio.h>

void LerValores(int *n1, int *n2) {
    scanf("%d %d", n1, n2);    
} 

void ValoresMultiplos(int *n1, int *n2) {
    if (((*n2) % (*n1) == 0) || ((*n1) % (*n2) == 0)) {
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }
}

int main() {
    int a, b;
    
    LerValores(&a, &b);
    ValoresMultiplos(&a, &b);
    
    return 0;
}