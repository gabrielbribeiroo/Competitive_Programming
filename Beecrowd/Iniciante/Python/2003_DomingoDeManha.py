'''
Domingo é dia de feira. 
Logo de manhã muitas pessoas se deslocam para o polo de lazer da Parangaba, onde acontece uma feira, conhecida por ser a maior da cidade. 
Na feira da Parangaba você pode encontrar de tudo.
Todos os domingos, Bino faz compras na feira. 
Ele sempre marca com seu amigo Cino de se encontrarem no terminal de ônibus da Parangaba às 8h, para irem juntos comprar na feira. 
Porém, muitas vezes Bino acorda muito tarde e se atrasa para o encontro com seu amigo.
Sabendo que Bino leva de 30 a 60 minutos para chegar ao terminal. 
Diga o atraso máximo de Bino.
'''

import sys

def calcular_atraso(hora, minuto):
    if hora >= 5 and hora <= 6:
        return 0
    elif hora == 7:
        return minuto
    elif hora == 8:
        return 60 + minuto
    elif hora == 9:
        return 120 + minuto
    else:
        return 0

for linha in sys.stdin:
    linha = linha.strip()
    if linha:
        hora, minuto = map(int, linha.split(':'))
        atraso = calcular_atraso(hora, minuto)
        print(f"Atraso maximo: {atraso}")

