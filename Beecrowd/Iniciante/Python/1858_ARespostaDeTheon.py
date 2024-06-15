'''
Ramsay: "(...) você vence se conseguir adivinhar quem eu sou e por que estou torturando você."
Theon deve pensar rápido e adivinhar quem é seu algoz! 
Entretanto, Ramsay já decidiu o que ele irá fazer depois que Theon der sua resposta.
Theon pode dizer que seu algoz é alguma dentre N pessoas. 
Considere que as pessoas são numeradas de 1 a N. 
Se Theon responder que seu algoz é a pessoa i, Ramsay irá atingi-lo Ti vezes.
Sua tarefa é ajudar Theon a determinar qual deve ser sua resposta de forma a minimizar o número de vezes que ele será atingido.
'''

def main():
    pessoas = int(input().strip()) # Leitura do número de pessoas
    
    theon = list(map(int, input().strip().split())) # Leitura dos valores de Ti para cada pessoa
    
    min_hits = theon[0] # Inicializa a contagem mínima e a pessoa correspondente
    person = 1 # Pessoas numeradas de 1 a n
    
    # Itera sobre a lista para encontrar o valor mínimo de hits
    for i in range(1, pessoas):
        if theon[i] < min_hits:
            min_hits = theon[i] # Atualiza a menor resposta
            person = i + 1 # Ajusta o índice para ser a pessoa correta (1-based)
    
    print(person) # Imprime a pessoa que Theon deve responder

if __name__ == "__main__":
    main()

        
