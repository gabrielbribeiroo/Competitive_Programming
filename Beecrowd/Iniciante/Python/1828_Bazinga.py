'''
No oitavo episodio da segunda temporada do seriado The Big Bang Theory, The Lizard-Spock Expansion, Sheldon e Raj discutem qual dos dois é o melhor: o filme Saturn 3 ou a série Deep Space 9. 
A sugestão de Raj para a resolução do impasse é uma disputa de Pedra-Papel-Tesoura. 
Contudo, Sheldon argumenta que, se as partes envolvidas se conhecem, entre 75% e 80% das disputas de Pedra-Papel-Tesoura terminam empatadas, e então sugere o Pedra-Papel-Tesoura-Lagarto-Spock.
As regras do jogo proposto são:
a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destrói a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura.
Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. 
Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!".
Caso Raj vencesse, ele concluiria que "Raj trapaceou!".
Caso o resultado fosse empate, ele exigiria nova partida: "De novo!". 
Conhecidas as personagens do jogo escolhido por ambos, faça um programa que imprima a provável reação de Sheldon.
'''

def determinar_vencedor(sheldon, raj):
    # Verificação das escolhas
    if sheldon == raj:
        return "De novo!" # Empate

    if (sheldon == "tesoura" and (raj == "papel" or raj == "lagarto")) or \
       (sheldon == "papel" and (raj == "pedra" or raj == "Spock")) or \
       (sheldon == "pedra" and (raj == "lagarto" or raj == "tesoura")) or \
       (sheldon == "lagarto" and (raj == "Spock" or raj == "papel")) or \
       (sheldon == "Spock" and (raj == "tesoura" or raj == "pedra")):
        return "Bazinga!" # Vitória de Sheldon
    else:
        return "Raj trapaceou!" # Vitória de Raj


qnt_teste = int(input())

for i in range(qnt_teste):
    sheldon, raj = input().split() # Leitura das escolhas de Sheldon e Raj
    resultado = determinar_vencedor(sheldon, raj) # Chamada da função
    print(f"Caso #{i+1}: {resultado}") # Mostra o resultado de cada caso de teste
