'''
A Spies Breaching Computers (SBC), uma agência privada de espiões digitais, está desenvolvendo um novo dispositivo para interceptação de informações que, através de ondas eletromagnéticas, permite a espionagem mesmo sem contato físico com o alvo.
O dispositivo tenta coletar informações de um byte por vez, isto é, uma sequência de 8 bits onde cada um deles, naturalmente, pode ter valor 0 ou 1. 
Em determinadas situações, devido a interferências de outros dispositivos, a leitura não pode ser feita com sucesso. 
Neste caso, o dispositivo retorna o valor 9 para o bit correspondente, informando que não foi possível efetuar a leitura.
De forma a automatizar o reconhecimento das informações lidas, foi feita uma solicitação de um programa que, a partir das informações lidas pelo dispositivo, informe se todos os bits foram lidos com sucesso ou não. 
Sua tarefa é escrever este programa.
'''

bits = list(map(int, input().split())) # Leitura dos 8 números inteiros

# Verifica se algum dos valores é 9
if 9 in bits:
    print("F") # Indica que ocorreu falha
else:
    print("S") # Se nenhum 9 foi encontrado, imprime "S"
