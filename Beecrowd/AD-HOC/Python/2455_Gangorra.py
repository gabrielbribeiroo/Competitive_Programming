'''
Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, uma das extremidades é mais longa que a outra. 
Após brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo. 
Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando P1 ∗ C1 = P2 ∗ C2.
Onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente.
'''

peso_esq, comp_esq, peso_dir, comp_dir = map(int, input().split()) # Leitura dos pesos e dos comprimentos de cada lado da gangorra

# Verifica se a gangorra está equilibrada
if peso_esq * comp_esq == peso_dir * comp_dir:
    print("0") # Gangorra equilibrada
elif peso_esq * comp_esq > peso_dir * comp_dir:
    print("-1") # Gangorra desequilibrada, com criança esquerda na parte de baixo
else:
    print("1") # Gangorra desequilibrada, com criança direita na parte de baixo