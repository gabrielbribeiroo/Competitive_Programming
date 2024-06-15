'''
Uma fábrica produz barras de chocolates no formato de paralelepípedos e de cubos, com o mesmo volume. 
Porém, como a máquina que produz os chocolates em formato de cubo está apresentando alguns problemas, os donos da fábrica pediram a sua ajuda para resolver este problema.
Sua tarefa é, dadas as dimensões das arestas do chocolate em formato de paralelepípedo, dizer qual é o tamanho que a aresta em formato de cubo deve ter.
'''

while True:
    a, b, c = map(int, input().strip().split()) # Leitura dos valores de A, B e C
    
    if a==0 and b==0 and c==0:
        break # Condição de parada
    
    volume = a*b*c # Calcula o volume do paralelepípedo
    aresta_cubo = int(volume ** (1/3)) # Utiliza a função math.isqrt e eleva a potência adequada
    print(aresta_cubo) # Imprime a aresta do cubo





