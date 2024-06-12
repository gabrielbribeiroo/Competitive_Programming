'''
Tim é um bebedor de refrigerante absolutamento obsessivo, ele simplesmente não consegue o suficiente. 
Mais irritantemente porém, ele quase nunca tem dinheiro, então sua única forma legal mais óbvia de obter mais refrigerante é pegar o dinheiro que ele recebe quando recicla garrafas vazias de refrigerante para comprar novas. 
Para adicionar com as garrafas resultantes de seu próprio consumo, ele às vezes encontra garrafas vazias na rua. 
Um dia ele estava com muita sede, então ele realmente bebeu refrigerantes até que ele não pudesse pagar um novo.
'''

def calcular_refrigerantes(e, f, c):
    garrafas = e + f # Número total de garrafas vazias no início
    total_refrigerantes = 0
    
    # Enquanto houver garrafas suficientes para trocar por pelo menos um refrigerante
    while (garrafas >= c):
        novos_refrigerantes = garrafas // c # Quantos refrigerantes novos Tim consegue trocar
        total_refrigerantes += novos_refrigerantes # Incrementa o total de refrigerantes bebidos
        garrafas = garrafas % c + novos_refrigerantes # Atualiza o número de garrafas vazias
    
    return total_refrigerantes

e, f, c = map(int, input().split()) # Leitura da entrada
total_refrigerantes = calcular_refrigerantes(e, f, c) # Chamada da função
print(total_refrigerantes) # Imprime o total de refrigerantes



