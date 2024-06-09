'''
Ana e suas amigas estão fazendo um trabalho de geometria para o colégio, em que precisam formar vários triângulos, numa cartolina, com algumas varetas de comprimentos diferentes. 
Logo, elas perceberam que não dá para formar triângulos com três varetas de comprimentos quaisquer: se uma das varetas for muito grande em relação às outras duas, não dá para formar o triângulo.
Neste problema, você precisa ajudar Ana e suas amigas a determinar se, dados os comprimentos de quatro varetas, é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo.
'''

a, b, c, d = map(int, input().split()) # Leitura dos comprimentos das varetas

# Verifica a condição de existência de um triângulo
if (a + b > c and a + c > b and b + c > a) or (a + b > d and a + d > b and b + d > a) or (a + c > d and a + d > c and c + d > a) or (b + c > d and b + d > c and c + d > b):
    print("S")
else:
    print("N")
