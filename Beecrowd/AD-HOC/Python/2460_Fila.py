'''
Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de ingressos aumentou consideravelmente. 
Como as filas estão cada vez maiores, pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando assim vaga para outras pessoas. 
Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente, sendo assim nunca existe um espaço vago entre duas pessoas. 
A fila inicialmente contém N pessoas, cada uma com um identificador diferente. 
Joãozinho sabe o estado inicial dela e os identificadores em ordem das pessoas que deixaram a fila. 
Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila, Joãozinho deseja saber o estado final da fila.
'''

# Leitura da quantidade inicial de pessoas na fila
inicio = int(input())
fila = list(map(int, input().split()))

# Leitura da quantidade de pessoas que saíram da fila
fim = int(input())
sairam = list(map(int, input().split()))

# Conjunto (array de flags) para os identificadores que deixaram a fila
# Como os identificadores estão entre 1 e 100000, o array possui tamanho 100001
saiu = [0] * 100001
for identificador in sairam:
    saiu[identificador] = 1
    
# Cria a fila final com as pessoas que não saíram
fila_final = []
for pessoa in fila:
    if not saiu[pessoa]:
        fila_final.append(pessoa)
    
print(*fila_final) # Imprime a fila final