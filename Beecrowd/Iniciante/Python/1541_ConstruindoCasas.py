'''
Sr PI é um construtor muito famoso na cidade de Programolândia. 
Ele precisa de sua ajuda para encontrar os melhores terrenos da cidade, para realizar assim a construção de vários projetos de casas que possui.
Considere que ele tenha por exemplo, um projeto para construir uma casa de 8 metros por 10 metros, e a legislação do município permite a construção de no máximo 100% do terreno. 
Como todos os terrenos nesta cidade são perfeitamente quadrados e o valor dos lados da casa são apenas uma referência para a área total a ser construída (80 metros quadrados), o sr PI precisaria de um terreno de 8.994 metros, o que simplificado daria como resultado 8 metros e o tamanho real da casa seria de 64 metros quadrados. 
Se a legislação permitisse a utilizar 50% do terreno, o mesmo teria que ter 160 metros para que 50% dele fosse 80 metros quadrados, o suficiente para uma casa de 8 x 8 metros (64 metros quadrados). 
No primeiro caso de teste, como o percentual para construir é de apenas 20%, o terreno teria que ter 20 metros de lado para que 1/5 deste terreno tivesse o tamanho de 80 metros quadrados. 
Ajude o sr PI a determinar o tamanho minimo do terreno.
'''

from math import sqrt

while True: 
    entrada = input().strip() # Leitura dos valores de entrada
    if entrada == "0":
        break
    
    # Divide a entrada e verifica se temos exatamente 3 valores
    valores = entrada.split()
    if len(valores) != 3:
        continue
    
    a, b, c = map(int, valores)
    
    if a == 0:
        break # Verifica condição de término
    
    area_casa = a * b # Calcula a área da casa
    area_terreno = area_casa / (c / 100.0) # Calcula a área mínima do terreno
    lado_terreno = int(sqrt(area_terreno)) # Calcula o lado do terreno
    
    print(lado_terreno) # Imprime o resultado