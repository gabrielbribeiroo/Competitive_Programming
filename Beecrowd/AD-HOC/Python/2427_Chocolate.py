'''
Por lei, na Nlogônia todas as barras de chocolate são quadradas. 
Anamaria tem uma barra quadrada de chocolate de lado L, que ela quer compartilhar com alguns colegas da obi. 
Mas, ela é uma boa cidadã e cumpre a lei.
Então, ela divide a barra em quatro pedaços quadrados, de lado L/2. 
Depois, ela repete esse procedimento com cada pedaço gerado, sucessivamente, enquanto o lado for maior do que, ou igual a 2cm. 
Você deve escrever um programa que, dado o lado L da barra inicial, em centímetros, determina quantos pedaços haverá ao final do processo.
'''

quadrados = 1
lado = int(input()) # Leitura do comprimento do lado inicial

# Enquanto o comprimento do lado for maior ou igual a 2
while (lado >= 2):
    lado /= 2 # Divide o comprimento por 2
    quadrados *= 4 # Quadruplica a quantidade de quadrados formados
    
print(quadrados) # Imprime a quantidade total de quadrados


