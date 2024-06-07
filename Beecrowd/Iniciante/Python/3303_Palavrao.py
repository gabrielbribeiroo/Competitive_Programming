'''
Recentemente Juquinha aprendeu a falar palavrões. 
Espantada com a descoberta do garoto, sua mãe o proibiu de falar qualquer palavrão, sobre o risco de o menino perder sua mesada.
Como Juquinha odeia ficar sem mesada, ele te contratou para desenvolver um programa que informe para ele se uma palavra é um palavrão ou não.
Palavrões são palavras que contém dez ou mais caracteres, todas as outras palavras são consideradas palavrinhas.
'''

palavra = str(input()) # Leitura da palavra

# Verifica o tamanho da string
if (len(palavra) >= 10): 
    print('palavrao')
else: 
    print('palavrinha')