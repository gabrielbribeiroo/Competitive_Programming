'''
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. 
O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. 
Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores:
30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. 
Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.
'''

def main(): 
    n = int(input()) # Leitura do número de valores sorteados
    num = num = list(map(int, input().split())) # Lê todos os números de uma vez e converte para inteiros
    
    max_count = 1 # Menor valor possível de valores iguais
    current_count = 1 # Próximo elemento da sequência
    
    for i in range(1, n):
        if num[i] == num[i-1]:
            current_count += 1
        else:
            if current_count > max_count:
                max_count = current_count # Atualiza o maior valor de elementos consecutivos
            current_count = 1 # Reinicializa o contador
    
    if current_count > max_count:
        max_count = current_count
        
    print(max_count) # Imprime o maior valor de elementos consecutivos
    
if __name__ == "__main__":
    main()