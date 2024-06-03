'''
O Brasil é o país sede da copa esse ano. 
Porém, há muitas pessoas protestando contra o governo. 
Em redes sociais é possível ver pessoas afirmando que não vai ter copa devido aos protestos.
Mas esses rumores de que não haverá copa são totalmente falsos, a presidente Dilma Roussef já avisou: vai ter copa sim, e se reclamar vai ter duas!
'''

def ProtestoGoverno(n):
    if n == 0:
        print("vai ter copa!")
    else:
        print("vai ter duas!")
        
while True:
    try:
        num = int(input()) # Leitura do número
        ProtestoGoverno(num) # Chamada da função
    except EOFError:
        break # Interrompe o loop com EOF