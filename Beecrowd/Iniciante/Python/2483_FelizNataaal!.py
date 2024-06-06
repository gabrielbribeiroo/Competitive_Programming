'''
Você fica tão feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". 
Pra colocar toda essa felicidade pra fora, você montou um programa que, colocado um índice I de felicidade, seu grito de natal é mais animado.
'''

felicidade = int(input()) # Leitura do índice de felicidade
grito = "Feliz nat" + 'a'*felicidade + "l!" # Monta a frase com a última letra 'a' repetidas vezes
print(grito) # Imprime a frase resultante 
