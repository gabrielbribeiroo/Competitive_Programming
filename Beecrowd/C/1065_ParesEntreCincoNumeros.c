/*
Faça um programa que leia 5 valores inteiros. 
Conte quantos destes valores digitados são pares e mostre esta informação.
*/

#include <stdio.h>

#define QUANTIDADE 5

void LerValores(int *num) {
    for (int i=0; i<QUANTIDADE; i++) {
        scanf("%d", &num[i]);
    }
}

int QuantidadePares(int *num) {
    int qnt_pares = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] % 2 == 0) {
            qnt_pares++;
        }
    }
    
    return qnt_pares;
}

void MostrarQuantidadePares(int *c) {
    printf("%d valores pares\n", *c);
}

int main() {
    int numeros[QUANTIDADE], qnt_pares;
    
    LerValores(numeros);
    qnt_pares = QuantidadePares(numeros);
    MostrarQuantidadePares(&qnt_pares);

    return 0;
}