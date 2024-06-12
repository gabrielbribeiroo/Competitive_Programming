'''
Paula simplesmente adora matemática. 
Seu maior passatempo é ficar inventando jogos ou atividades que a envolvam para brincar com seus amiguinhos. 
Obviamente, nem todos eles não são tão apaixonados assim por matemática e têm muita dificuldade para resolver as brincadeiras propostas por ela. 
Agora Paula inventou um pequeno passatempo que envolve 3 caracteres: um dígito numérico, uma letra e outro dígito numérico.
Se a letra for maiúscula, deve-se subtrair o primeiro dígito do segundo. 
Se a letra for minúscula, deve-se somar ambos os dígitos e se os DÍGITOS forem iguais, deve-se desconsiderar a letra e mostrar o produto entre os dois dígitos. 
Ela pediu para seu amigo Marcelo, que é bom em programação, para criar um programa para que encontre a solução para cada uma das sequências que Paula lhe apresentar.
'''

def processa_sequencia(sequencia):
    # Separa os elementos da sequência
    digito1 = int(sequencia[0])
    letra = sequencia[1]
    digito2 = int(sequencia[2])
    
    # Verifica a lógica do problema
    if digito1 == digito2:
        return digito1 * digito2
    elif letra.isupper():
        return digito2 - digito1
    else:
        return digito1 + digito2

n = int(input()) # Leitura da quantidade de casos de teste

# Processamento de cada caso de teste
for c in range(n):
    sequencia = input().strip()
    resultado = processa_sequencia(sequencia)
    print(resultado)
    
    

