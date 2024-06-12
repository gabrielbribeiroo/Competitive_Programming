'''
Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:
Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho nxn?
Tabuleiro 3x3:
5 casas brancas e 4 casas pretas

Tabuleiro 4x4:
8 casas brancas e 8 casas pretas

Observe que a casa mais acima e mais à esquerda é sempre branca.
'''
def contar_casas(n):
    total_casas = n * n # Número total de casas do xadrez
    casas_brancas = (total_casas + 1) // 2 # Cálculo da quantidade de casas brancas
    casas_pretas = total_casas // 2 # Cálculo da quantidade de casas pretas
    
    return casas_brancas, casas_pretas
    
num = int(input()) # Leitura do comprimento do lado

casas_brancas, casas_pretas = contar_casas(num) # Chamada da função

print(f"{casas_brancas} casas brancas e {casas_pretas} casas pretas") # Impressão do resultado
