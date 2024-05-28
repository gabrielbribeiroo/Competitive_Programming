/*
Uma quadra de tênis tem o formato de um retângulo, cujos lados medem 36 pés por 78 pés, que correspondem a um retângulo de 432 polegadas por 936 polegadas.
No último Grand Slam da Austrália, Rafael Nadal perdeu para Novak Djoković, num dos jogos mais bonitos de tênis dos últimos tempos.
Muitas vezes, uma jogada é tão rápida, e a bola tão próxima da borda da quadra, que o juiz pode tomar uma decisão que pode ser contestada por um dos jogadores. 
Para isso, existe o tira-teima, que utiliza a imagem gravada do jogo para decidir se a bola estava dentro ou fora da metade da quadra correspondente a um dos jogadores.
Considere que a semi-quadra de Rafael Nadal corresponde a um retângulo em que dois vértices têm coordenadas (0,0) e (432, 468), onde todos os números são em polegadas.
Você deve escrever um programa para, dadas as coordenadas (X, Y) do ponto de contato da bola com o solo, determinar se uma bola bateu no solo dentro ou fora da semi-quadra. 
Note que se a bola bate na linha divisória ela é considerada uma bola dentro.
*/
#include <stdio.h>

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if ((x>=0) && (x<=432) && (y>=0) && (y<=468)) {
        printf("dentro\n");
    } 
    else {
        printf("fora\n");
    }
    
    return 0;
} 