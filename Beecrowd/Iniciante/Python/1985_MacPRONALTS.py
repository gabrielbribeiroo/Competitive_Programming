'''
O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. 
Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. 
O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. 
Segue o cardápio do dia contendo o número do produto e seu respectivo valor.
1001 | R$ 1.50
1002 | R$ 2.50
1003 | R$ 3.50
1004 | R$ 4.50
1005 | R$ 5.50
'''

produtos = int(input()) # Leitura do número de produtos comprados
valor = 0.0

for c in range(0, produtos):
    codigo, quantidade = map(int, input().split()) # Leitura do produto e da quantidade comprada
    
    # Verifica o produto e calcula o valor gasto
    if codigo == 1001:
        valor += quantidade * 1.50
    elif codigo == 1002:
        valor += quantidade * 2.50
    elif codigo == 1003:
        valor += quantidade * 3.50
    elif codigo == 1004:
        valor += quantidade * 4.50
    elif codigo == 1005:
        valor += quantidade * 5.50

print("{:.2f}".format(valor)) # Imprime o valor total gasto 
