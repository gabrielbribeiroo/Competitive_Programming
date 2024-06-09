'''
O professor Arquimedes precisa da sua ajuda para descobrir qual é a nota mais frequente entre as notas que os alunos dele tiraram na última prova. 
A turma tem N alunos e seu programa deve imprimir a nota que aparece mais vezes na lista de N notas. 
Se houver mais de uma nota mais frequente, você deve imprimir a maior delas! 
Por exemplo, se a turma tiver N = 10 alunos e as notas forem [20, 25, 85, 40, 25, 90, 25, 40, 55, 40], as notas mais frequentes são 25 e 40, ocorrendo três vezes cada. 
Seu programa, então, deve imprimir 40.
'''

qnt_notas = int(input())

frequencia = [0] * 101 # Inicialização do array para contar frequências (notas de 0 a 100)

notas = list(map(int, input().split())) # Leitura das notas

for nota in notas:
    frequencia[nota] += 1 # Atualização da frequência

# Variáveis para armazenar a nota mais frequente e a frequência máxima
nota_frequente = -1 
max_frequencia = 0

# Determinação da nota mais frequente
for i in range(101):
    if frequencia[i] > max_frequencia or (frequencia[i] == max_frequencia and i > nota_frequente):
        max_frequencia = frequencia[i]
        nota_frequente = i
    
print(nota_frequente) # Imprime a nota mais frequente