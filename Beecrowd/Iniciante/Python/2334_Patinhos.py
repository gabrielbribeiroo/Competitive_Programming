'''
Cinco patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só quatro patinhos voltaram de lá. 
Quatro patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só três patinhos voltaram de lá. 
Três patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só dois patinhos voltaram de lá. 
Dois patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só um patinho voltou de lá. 
Um patinho foi passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas nenhum patinho voltou de lá.
A mamãe patinha ficou tão triste naquele dia que resolveu pedir sua ajuda para procurar além das montanhas, na beira do mar, quantos patinhos não voltaram de lá.
'''

def CalcularPatos(patos):
    if patos == 0:
        return 0
    return patos-1
    
def main():
    while True: 
        patos = int(input()) # Leitura da quantidade inicial de patos
        if patos == -1:
            break # Condição de parada
        print(CalcularPatos(patos)) # Imprime a quantidade de patos que retornaram

if __name__ == "__main__":
    main()
        
        