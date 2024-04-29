/*
Escreva um programa que leia dois valores X e Y. 
A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.
*/

#include <stdio.h>

void LerValores(int *x, int *y) {
    scanf("%d %d", x, y);    
} 

void MostrarSequencia(int x, int y) {
    int cont = 1;
    
    while (cont <= y) {
        for (int i=0; i<x && cont<=y; i++) {
            printf("%d", cont);
            if ((cont % x != 0) && (cont != y)) {
                printf(" "); 
            }
            cont++;
        }   
        printf("\n");
    }
}

int main() {
    int qnt_num_lin, num_fim;
    
    LerValores(&qnt_num_lin, &num_fim);
    MostrarSequencia(qnt_num_lin, num_fim);
    
    return 0;
}