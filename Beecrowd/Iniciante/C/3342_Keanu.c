/*
Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:
Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho nxn?
Tabuleiro 3x3:
5 casas brancas e 4 casas pretas

Tabuleiro 4x4:
8 casas brancas e 8 casas pretas

Observe que a casa mais acima e mais à esquerda é sempre branca.
*/

#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num); // Leitura do tamanho do quadrado (comprimento dos lados)
    
    int tot_squares = num * num;
    int white_squares = (tot_squares + 1) / 2; // Parte inteira da divisão por 2
    int black_squares = tot_squares / 2;
    
    printf("%d casas brancas e %d casas pretas\n", white_squares, black_squares);
    
    return 0;
}