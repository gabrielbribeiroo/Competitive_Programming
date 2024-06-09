'''
Tio Patinhas era um milionário que vivia em sua mansão, e tinha três sobrinhos: Huguinho, Zezinho e Luisinho. 
Ele se confundia facilmente entre os três sobrinhos, pois eram bem parecidos, apesar de terem idades diferentes. 
Um dia, os três fizeram uma aposta com o tio: se ele acertasse quem era o sobrinho do meio, ou seja, nem o mais novo, nem o mais velho, eles dariam uma moeda de ouro para ele, e se ele errasse, teria que dar uma moeda de ouro para cada um. 
Assim, o tio pede a tua ajuda para que ele possa ganhar essa aposta.
'''

hugo, ze, luis = map(int, input().split()) # Leitura das idades dos sobrinhos

# Verifica o sobrinho do meio
if ((hugo<ze and ze<luis) or (luis<ze and ze<hugo)):
    print("zezinho")
elif ((ze<hugo and hugo<luis) or (luis<hugo and hugo<ze)):
    print("huguinho")
else:
    print("luisinho")

