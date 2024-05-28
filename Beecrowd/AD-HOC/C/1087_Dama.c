/*
O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é a dama, que pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais.
O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez: dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?
Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que você escrevesse um programa que resolve esse tipo de problema.  
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, x2, y1, y2;
    
    while (1) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2); // Lê as coordenadas de saída e chegada
        
        if (x1==0 && x2==0 && y1==0 && y2==0) {
            break; // Condição de parada
        }
        
        // Verifica a movimentação necessária
        if (x1==x2 && y1==y2) {
            printf("0\n"); 
        }
        else {
            if (x1==x2 || y1==y2 || abs(x1-x2) == abs(y1-y2)) {
                printf("1\n");
            }
            else {
                printf("2\n");
            }
        } 
    }
    
    return 0;
}