/*
Neste problema você deverá ler 15 valores colocá-los em 2 vetores, conforme estes valores forem pares ou ímpares. 
Só que o tamanho de cada um dos dois vetores é de 5 posições. 
Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. 
Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
Cada vetor pode ser preenchido tantas vezes, quantas for necessário.
*/

#include <stdio.h>

#define MAX 5
#define TOT_MAX 15

void LerVetor(int *n) {
    for (int i=0; i<TOT_MAX; i++) {
        scanf("%d", &n[i]);
    }
}

void SepararParImpar(int *n, int *par, int *impar) {
    int pos_par = 0, pos_impar = 0;
    
    for (int i=0; i<TOT_MAX; i++) {
        if (n[i] % 2 == 0) {
            par[pos_par++] = n[i];
        }
        else {
            impar[pos_impar++] = n[i];
        }
        
        if (pos_par == MAX) {
            printf("par[0] = %d\n", par[0]);
            printf("par[1] = %d\n", par[1]);
            printf("par[2] = %d\n", par[2]);
            printf("par[3] = %d\n", par[3]);
            printf("par[4] = %d\n", par[4]);
            pos_par = 0;
        }

        if (pos_impar == MAX) {
            printf("impar[0] = %d\n", impar[0]);
            printf("impar[1] = %d\n", impar[1]);
            printf("impar[2] = %d\n", impar[2]);
            printf("impar[3] = %d\n", impar[3]);
            printf("impar[4] = %d\n", impar[4]);
            pos_impar = 0;
        }
    }
    
    for (int i = 0; i < pos_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < pos_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
}

int main() {
    int vetor[TOT_MAX], par[MAX], impar[MAX];
    
    LerVetor(vetor);
    SepararParImpar(vetor, par, impar);
    
    return 0;
}