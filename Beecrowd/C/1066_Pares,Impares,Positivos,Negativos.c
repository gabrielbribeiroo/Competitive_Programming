/*
Leia 5 valores inteiros. 
A seguir, mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.
*/

#include <stdio.h>

#define QUANTIDADE 5

void LerValores(int *n) {
    for (int i=0; i<QUANTIDADE; i++) {
        scanf("%d", &n[i]);
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

int QuantidadeImpares(int *num) {
    int qnt_impares = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] % 2 != 0) {
            qnt_impares++;
        }
    }
    
    return qnt_impares;
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

int QuantidadeNegativos(int *num) {
    int qnt_negativos = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] < 0) {
            qnt_negativos++;
        }
    }
    
    return qnt_negativos;
}

void MostrarQuantidadePares(int *c) {
    printf("%d valor(es) par(es)\n", *c);
}

void MostrarQuantidadeImpares(int *c) {
    printf("%d valor(es) impar(es)\n", *c);
}

void MostrarQuantidadePositivos(int *c) {
    printf("%d valor(es) positivo(s)\n", *c);
}

void MostrarQuantidadeNegativos(int *c) {
    printf("%d valor(es) negativo(s)\n", *c);
}

int main() {
    int numeros[QUANTIDADE], qnt_pares, qnt_impares, qnt_positivos, qnt_negativos;
    
    LerValores(numeros);
    qnt_pares = QuantidadePares(numeros);
    qnt_impares = QuantidadeImpares(numeros);
    qnt_positivos = QuantidadePositivos(numeros);
    qnt_negativos = QuantidadeNegativos(numeros);
    
    MostrarQuantidadePares(&qnt_pares);
    MostrarQuantidadeImpares(&qnt_impares);
    MostrarQuantidadePositivos(&qnt_positivos);
    MostrarQuantidadeNegativos(&qnt_negativos);
    
    return 0;
}