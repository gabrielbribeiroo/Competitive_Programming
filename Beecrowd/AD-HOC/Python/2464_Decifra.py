'''
Dimas é um renomado investigador de roubos a antiguidades e obras de arte, que sempre é chamado para casos intrigantes que necessitam de bastante trabalho mental. 
Desta vez, o quadro que sumiu de um conhecido museu na França foi a Donalisa, do pintor Leonardo da Silva. 
Este é um caso bastante especial, visto que o ladrão deixou uma frase escrita na parede, aparentemente criptografada. 
Que desafio para Dimas! 
É que ele não tem muito conhecimento nessa área de criptografia. 
Porém, ele usou de suas excelentes observações e conseguiu perceber que a frase foi escrita através de alguma permutação inversível do alfabeto.
Uma permutação inversível do alfabeto é apenas uma troca entre suas letras, duas a duas. 
Por exemplo, todo “a” será trocado por “m” e, portanto, todo “m” será trocado por “a”. 
Dessa forma, veja que dado um texto original, se aplicarmos a permutação, teremos uma frase criptografada.
E se aplicarmos a mesma permutação novamente, teremos o texto original recuperado!
Apesar de parecer fácil, a tradução se tornou uma tarefa difícil, já que a frase é bastante longa. 
É por isso que Dimas resolveu pedir sua ajuda, um exímio programador, para traduzir a frase criptografada, recuperando o texto original, e resolver o mistério!
'''

def decifrar_frase(permutacao, frase):
    mapa = [''] * 26 # Array para armazenar a permutação inversa
    
    # Construir o mapa inverso para a permutação
    for i in range(26):
        mapa[ord(permutacao[i]) - ord('a')] = chr(ord('a') + i)
        
    frase_decifrada = []
    for char in frase:
        frase_decifrada.append(mapa[ord(char) - ord('a')]) # Decifrar a frase
    
    return ''.join(frase_decifrada)

# Leitura da permutação e da frase criptografada
permutacao = input().strip()
frase = input().strip()

frase_decifrada = decifrar_frase(permutacao, frase) # Chamada da função

print(frase_decifrada) # Imprime a frase decifrada