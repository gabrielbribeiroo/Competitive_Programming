'''
Amarelinha provavelmente é a brincadeira em que as crianças da vila mais se divertem, porém a mesma vem causando um bom tempo de discussão e choro nas crianças que a praticam. 
A causa do transtorno é para decidir quem será o próximo a pular, mas recentemente Quico (O gênio!) teve uma grande ideia para solucionar o problema. 
Basicamente a brincadeira só poderá ser jogada de dois em dois jogadores e para escolher o próximo jogador Quico indicou o uso do tradicional método par ou ímpar, onde os dois jogadores informam um número e se a soma desses números for par o jogador que escolheu PAR ganha ou vice verso. 
Entretanto a utilização desse método vem deixando o Quico louco, louco, louco... 
E por esse motivo ele pediu a sua ajuda! Solicitou a você um programa que dado o nome dos jogadores, suas respectivas escolhas PAR ou IMPAR e os números, informe quem foi o vencedor.
'''

qnt_teste = int(input())  # Leitura da quantidade de casos de teste

for i in range(1, qnt_teste + 1):
    nome1, paridade1, nome2, paridade2 = input().split()  # Leitura das informações dos jogadores
    num1, num2 = map(int, input().split())  # Leitura dos números de cada jogador
    
    # Verifica o resultado da soma dos números e informa o vencedor
    if (num1 + num2) % 2 == 0:
        if paridade1 == "PAR":
            print(nome1)
        else:
            print(nome2)
    else:
        if paridade1 == "IMPAR":
            print(nome1)
        else:
            print(nome2)
