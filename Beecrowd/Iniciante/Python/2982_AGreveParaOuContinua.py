'''
A fim de parar a greve geral dos estudantes, o governo realizou uma reunião com a UFSC.
Durante a reunião a UFSC expos todos os gastos necessários para manter o funcionamento até o final do ano e o Governo informou valores que poderia oferecer para cobrir esses gastos. 
A reunião não foi muito organizada, e vários valores individuais foram mencionados, de forma que ninguém sabe se os valores oferecidos são suficientes para cobrir todos os gastos da universidade.
Dada a lista de valores citados na reunião, sua tarefa será somas os gastos e as verbas oferecidas para informar os estudantes da UFSC se a greve deve parar ou não.
'''

num = int(input()) # Leitura do número de valores citados na reunião

gastos = 0
verbas = 0

for i in range (num): 
    tipo, valor = input().split()
    valor = int(valor)
    
    if (tipo == 'G'):
        gastos += valor
    elif tipo == 'V':
        verbas += valor

if verbas >= gastos:
    print("A greve vai parar.")
else:
    print("NAO VAI TER CORTE, VAI TER LUTA!")