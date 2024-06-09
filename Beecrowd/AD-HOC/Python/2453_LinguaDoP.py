'''
Uma brincadeira que crianças adoram é se comunicar na língua do P, acrescentando pê antes de cada sílaba, como uma forma de código para dificultar que outras pessoas entendam a conversa (pê-va pê-mos pê-no pê-ci pê-ne pê-ma?).
Jacy e Kátia adaptaram a língua do P para mensagens eletrônicas, acrescentando a letra P minúscula ‘p’ antes de cada letra das palavras de uma mensagem. 
Sua tarefa é escrever um programa que decodifique uma mensagem escrita na língua do P eletrônica de Jacy e Kátia.
Exemplos de Entrada	                Exemplos de Saída
pUpm pfpiplpmpe plpepgpapl          Um filme legal
pA pppapppa pdpo pPpapppa           A papa do Papa
'''

def decodificar_mensagem(codificada): 
    decodificada = []
    i = 0
    while (i < len(codificada)):
        if (codificada[i] == 'p') and (i+1 < len(codificada)): 
            i += 1
        decodificada.append(codificada[i])
        i += 1
    return ''.join(decodificada)

mensagem_codificada = input().rstrip() # Leitura da entrada
mensagem_decodificada = decodificar_mensagem(mensagem_codificada) # Chamada da função
print(mensagem_decodificada) # Imprime a mensagem decodificada
