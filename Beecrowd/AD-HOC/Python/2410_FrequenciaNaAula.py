'''
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. 
Durante este filme, ela passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de registro. 
Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de registro de seus amigos fujões.
O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na lista de presença. 
Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!
A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. 
Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula.
'''

MAX_SIZE = 1000001 # Define o tamanho máximo para o array de presença

qnt_registros = int(input()) # Leitura da quantidade de registros da entrada padrão

presenca = [0] * MAX_SIZE # Inicializa um array de presença com zeros, onde cada índice representa um número de registro

cont = 0 # Variável para contar o número de alunos únicos

# Loop para ler os registros de presença
for _ in range(qnt_registros):
    aluno = int(input()) # Leitura do número de registro do aluno

    # Verifica se o aluno já foi registrado anteriormente
    if presenca[aluno] == 0:
        presenca[aluno] = 1 # Se não foi registrado, marca o aluno como presente 
        cont += 1 # Incrementa o contador
    
print(cont) # Imprime o número de alunos únicos presentes na aula
