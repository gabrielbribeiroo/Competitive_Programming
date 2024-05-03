/*
Faça um programa que leia 6 valores. 
Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
A seguir, mostre a quantidade de valores positivos digitados.
*/

#include <stdio.h>

#define QUANTIDADE 6

void LerValores(int *num) {
    for (int i=0; i<QUANTIDADE; i++) {
        scanf("%d", &num[i]);
    }
}

int QuantidadePositivos(int *num) {
    int qnt_positivos = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] > 0) {
            qnt_positivos++;
        }
    }
    
    return qnt_positivos;
}

void MostrarQuantidadePositivos(int *c) {
    printf("%d valores positivos\n", *c);
}


int main() {
    int numeros[QUANTIDADE], qnt_positivos;
    
    LerValores(numeros);
    qnt_positivos = QuantidadePositivos(numeros);
    MostrarQuantidadePositivos(&qnt_positivos);
    
    return 0;
}