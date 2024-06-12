/*
Og gosta muito de brincar com seus filhos. 
Seu jogo preferido é o jogo do maior, de autoria própria. 
Este passatempo (no tempo das cavernas se tinha muito tempo disponível para jogos) é jogado em dupla, Og e um dos seus filhos. 
O jogo procede da seguinte forma: os dois participantes escolhem um número de rodadas e, a cada rodada, cada participante diz um número de 0 até 10 em voz alta, sendo que o participante que falar o número mais alto ganha um ponto (em caso de empate, ninguém ganha o ponto). 
No final das rodadas, os pontos são contabilizados e o participante com o maior número de pontos ganha.
Og e seus filhos gostam muito do jogo, mas se perdem na contagem dos pontos. 
Você conseguirá ajudar Og a verificar a pontuação de uma lista de jogos?
*/

#include <stdio.h>

// Função para calcular a pontuação de Og e do filho em cada partida
void CalcularPontuacao(int rodadas, int partidas[][2]) {
    int og = 0, filho = 0;
    
    for (int i=0; i<rodadas; i++) {
        if (partidas[i][0] > partidas[i][1]) {
            og++; // Vitória de Og
        }
        else if (partidas[i][1] > partidas[i][0]){
            filho++; // Vitória do filho
        }
    }
    
    printf("%d %d\n", og, filho); // Imprime o número de vitórias de cada um
}

int main() {
    int rodadas;
    
    while(1) {
        scanf("%d", &rodadas); // Leitura do número de rodadas
        
        if (rodadas == 0) {
            break; // Interrompe o loop
        }
        
        int partidas[rodadas][2];
        
        for (int i=0; i<rodadas; i++) {
            scanf("%d %d", &partidas[i][0], &partidas[i][1]); // Leitura do número escolhido por cada jogador
        }
        
        CalcularPontuacao(rodadas, partidas); // Chamada da função
    }
 
    return 0;
}