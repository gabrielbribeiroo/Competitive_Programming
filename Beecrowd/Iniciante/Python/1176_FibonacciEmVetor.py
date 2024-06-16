'''
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e, cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
'''

def fibonacci(n):
    num1 = 0
    num2 = 1
    
    if n == 0:
        return num1
    if n == 1:
        return num2
    
    for i in range (2, n+1):
        aux = num1 + num2
        num1 = num2
        num2 = aux
    
    return num2

def calcular_fibonacci(q):
    for i in range(q):
        n = int(input())
        print(f'Fib({n}) = {fibonacci(n)}')

def main():
    q = int(input()) # Leitura da quantidade de casos de teste
    calcular_fibonacci(q)

if __name__ == "__main__":
    main()
    
        

    