'''
Prog e Cackto começaram recentemente a jogar um jogo de RPG chamado Fortaleza. 
Neste, para o jogador evoluir de nível o mesmo precisa derrotar monstros, nos quais dá um valor de experiência (XP) para o jogador.
A produtora do jogo, Jogos Extremos, anunciou que na próxima semana irá realizar o primeiro evento XP no qual aumentará a experiência dos monstros em X vezes. 
Como Prog e Cackto estão em um nível muito alto no qual os monstros tem um valor muito alto de pontos de experiência, eles estão tendo dificuldades de calcular a quantidade de pontos de experiência que os monstros terão durante o evento. 
Você pode ajudá-los?
'''

while True:
    # Leitura dos valores de entrada
    aumento, valor = map(int, input().split())
    
    # Verifica a condição de parada
    if aumento == 0 and valor == 0:
        break
    
    # Cálculo da experiência do monstro
    exp = aumento * valor 
    
    # Mostra o novo exp do monstro
    print(exp)
    
    
    