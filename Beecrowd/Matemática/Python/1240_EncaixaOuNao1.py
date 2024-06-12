'''
Paulinho tem em suas mãos um pequeno problema. 
A professora lhe pediu que ele construísse um programa para verificar, à partir de dois valores inteiros A e B, se B corresponde aos últimos dígitos de A.
'''

def verifica_encaixe(a, b):
    # Converte os números para strings
    str_a = str(a)
    str_b = str(b)
    
    # Verifica se B é sufixo de A
    if str_a.endswith(str_b):
        return "encaixa"
    else:
        return "nao encaixa"

n = int(input()) # Leitura da quantidade de casos de teste

# Processamento de cada caso de teste
for c in range(n):
    a, b = input().split()
    resultado = verifica_encaixe(a, b)
    print(resultado)
    