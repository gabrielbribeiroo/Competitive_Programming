'''
Dados três valores, verifique se os três podem formar um triângulo. 
Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.
'''

import math

def ClassificaTriangulo(a, b, c):
    # Verifica o tipo de triângulo quanto aos lados
    if a==b and b==c:
        print("Equilatero")
    elif a!=b and b!=c and a!=c:
        print("Escaleno")
    else:
        print("Isoceles")

def MaiorLadoTriangulo(a, b, c):
    # Ordena os valores dos lados 
    if a>b and a>c:
        return a, b, c
    elif b>a and b>c:
        return b, a, c
    else:
        return c, a, b
        
def main():
    a, b, c = map(int, input().split()) # Leitura dos lados
    
    # Verifica a condição de existência
    if a+b>c and a+c> b and b+c>a:
        print("Valido-", end="")
        
        # Chamada das funções
        ClassificaTriangulo(a, b, c)
        hipotenusa, cateto1, cateto2 = MaiorLadoTriangulo(a, b, c)
        
        # Verifica se o triângulo é retângulo    
        print("Retangulo: ", end="")
        if math.isclose(hipotenusa ** 2, cateto1 ** 2 + cateto2 ** 2):
            print("S") # É triângulo retângulo
        else:
            print("N") # Não é triângulo retângulo
    else:
        print("Invalido")

if __name__ == "__main__":
    main()