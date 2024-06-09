'''
Considere as definições abaixo:
Uma palavra é uma sequência de letras consecutivas.
Um texto é um conjunto de palavras separadas pelo caractere espaço em branco.
Você foi contratado pela empresa Booble para escrever um programa que, dados uma letra e um texto, determina a porcentagem de palavras do texto que contém a letra dada.
'''

letra = input() # Leitura da letra de interesse
palavra = input().split() # Leitura do texto

total = 0.0 

for l in palavra:
    if letra in l:
        total += 1

total /= len(palavra)/100 # Calcula a porcentagem de palavras que contêm a letra de interesse

print('%.1f' % total) # Imprime a porcentagem


