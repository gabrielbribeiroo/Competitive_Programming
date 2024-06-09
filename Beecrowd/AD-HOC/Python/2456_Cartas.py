'''
Beatriz gosta muito de jogar cartas com as amigas. 
Para treinar memória e raciocínio lógico, ela inventou um pequeno passatempo com cartas. 
Ela retira as cinco primeiras cartas do topo de um baralho bem embaralhado, e as coloca em sequência, da esquerda para a direita, na mesa, com as faces voltadas para baixo.
Então ela olha, por um breve instante, cada uma das cartas da sequência (e logo as recoloca na mesa, com a face para baixo). Usando apenas a sua memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, decrescentemente, ou não está ordenada.
De tanto jogar, ela está ficando cansada, e não confia em seu próprio julgamento para saber se acertou ou errou. 
Por isso, ela pediu para você fazer um programa que, dada uma sequência de cinco cartas, determine se a sequência dada está ordenada crescentemente, decrescentemente, ou não está ordenada.
'''

cartas = list(map(int, input().split())) # Leitura das cartas

# Flags para verificar a ordem
crescente = True
decrescente = True

# Verificação da ordem da sequência
for i in range (1, 5):
    if cartas[i] < cartas[i-1]:
        crescente = False
    if cartas[i] > cartas[i-1]:
        decrescente = False

# Determinar a resposta com base nas flags
if crescente: 
    print("C")
elif decrescente: 
    print("D")
else: 
    print("N")