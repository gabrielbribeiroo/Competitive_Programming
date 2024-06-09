'''
João deseja fazer bolos para seus amigos, usando uma receita que indica que devem ser usadas 2 xícaras de farinha de trigo, 3 ovos e 5 colheres de sopa de leite. 
Em casa, ele tem A xícaras de farinha de trigo, B ovos e C colheres de sopa de leite.
João não tem muita prática com a cozinha, e portanto ele só se arriscará a fazer medidas exatas da receita de bolo (por exemplo, se ele tiver material suficiente para fazer mais do que 2 e menos do que 3 bolos, ele fará somente 2 bolos). 
Sabendo disto, ajude João escrevendo um programa que determine qual a quantidade máxima de bolos que ele consegue fazer.
'''

farinha, ovos, leite = map(int, input().split()) # Leitura das entradas

# Quantidade de bolos que podem ser feitos com cada ingrediente
receitas_farinha = farinha // 2
receitas_ovos = ovos // 3
receitas_leite = leite // 5

max_receitas = min(receitas_farinha, receitas_ovos, receitas_leite) # O número máximo de bolos é o mínimo desses valores

print(max_receitas) # Impressão do resultado