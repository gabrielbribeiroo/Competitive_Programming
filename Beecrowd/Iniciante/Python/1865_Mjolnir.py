'''
Odin criou para Thor a mais fiel e poderosa arma possível, o martelo Mjölnir. 
Feito de um minério místico especial chamado Uru e forjado no coração de uma estrela pelos Deuses ferreiros de Asgard, Brokk e Eitri, os lendários ferreiros.
Um dia, Thor desafiou seus amigos para ver quem conseguia levantar o Mjölnir.
Escreva um programa que, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informar se a pessoa conseguiu ou não levantá-lo.
'''

def main():
    n = int(input().strip()) # Leitura da quantidade de casos de teste
    
    for c in range(n):
        # Leitura do nome e da força aplicada
        entrada = input().strip().split() 
        nome = entrada[0]
        newton = int(entrada[1])
        
        # Verifica se é Thor ou se a força é suficiente para levantar o martelo
        if nome == "Thor" or newton >= 20000:
            print('Y') # Consegue levantar
        else:
            print('N') # Não consegue levantar

if __name__ == "__main__":
    main()