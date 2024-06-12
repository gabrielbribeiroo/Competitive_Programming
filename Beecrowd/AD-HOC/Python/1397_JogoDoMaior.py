'''
Og gosta muito de brincar com seus filhos. 
Seu jogo preferido é o jogo do maior, de autoria própria. 
Este passatempo (no tempo das cavernas se tinha muito tempo disponível para jogos) é jogado em dupla, Og e um dos seus filhos. 
O jogo procede da seguinte forma: os dois participantes escolhem um número de rodadas e, a cada rodada, cada participante diz um número de 0 até 10 em voz alta, sendo que o participante que falar o número mais alto ganha um ponto (em caso de empate, ninguém ganha o ponto). 
No final das rodadas, os pontos são contabilizados e o participante com o maior número de pontos ganha.
Og e seus filhos gostam muito do jogo, mas se perdem na contagem dos pontos. 
Você conseguirá ajudar Og a verificar a pontuação de uma lista de jogos?
'''

def calcular_pontuacao(partidas):
    for partida in partidas:
        og = 0
        filho = 0
        
        # Verifica qual jogador pontuou mais em cada rodada
        for rodada in partida:
            if rodada[0] > rodada[1]:
                og += 1
            elif rodada[1] > rodada[0]:
                filho += 1
        print(og, filho) # Imprime a pontuação de cada jogador
        
partidas = [] # Lista para armazenar as partidas

while True:
    rodadas = int(input()) # Leitura do número de rodadas
    
    if rodadas == 0:
        break # Condição de parada
    
    partida = []
    
    for c in range(rodadas):
        jogadas = tuple(map(int, input().split()))
        partida.append(jogadas)
    partidas.append(partida)
    
calcular_pontuacao(partidas)
    
    
    
    