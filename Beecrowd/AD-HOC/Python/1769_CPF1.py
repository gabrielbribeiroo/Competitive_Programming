'''
Você foi contratado pelas Indústrias Udilandenses (INUDIL) para desenvolver uma maneira de verificar se o Cadastro de Pessoa Física (CPF) indicado por um cliente era válido ou não. 
Conversando com amigos, você chegou à conclusão de que um CPF seria válido se a soma de todos os seus dígitos resultasse em número múltiplo de 11. 
Após verificação minuciosa, você descobriu que essa maneira só funciona em cerca de 80% dos casos, e você precisa de mais do que isso para garantir a qualidade do seu trabalho. 
Após pesquisar mais, você descobriu que dos 11 dígitos do CPF, os dois últimos são verificadores e dependem dos 9 dígitos anteriores. 
Vamos introduzir alguma notação. Considere um CPF com os seguintes dígitos:
a1a2a3.a4a5a6.a7a8a9-b1b2
Para descobrirmos o dígito b1, procedemos da seguinte maneira: multiplicamos o primeiro por 1, o segundo por 2, o terceiro por 3, o quarto por 4 e vamos assim até multiplicarmos o nono por 9. 
Então, somamos tudo isto. 
Após termos somado tudo, dividimos por 11. 
O dígito b1 será o resto da divisão (ou 0, caso o resto seja 10).
Para o segundo dígito verificador, temos o seguinte: multiplicamos o primeiro por 9, o segundo por 8, o terceiro por 7, o quarto por 6 e vamos assim até multiplicarmos o nono por 1. 
Então, somamos tudo isto e dividimos por 11. 
O dígito b2 será o resto da divisão (ou 0, caso o resto seja 10).
Sabendo que isso vale para 100% dos CPFs, sua missão é implementar um programa que, dado um CPF, diga se ele é válido ou não.
'''

# Loop infinito para ler repetidamente entradas de CPF
while True:
    try:
        cpf = [int(x) for x in input().replace('-', '').replace('.', '')] # Leitura da entrada, removendo pontos e traços
        soma = 0 # Inicializa a soma
        
        for i in range(9):
            soma += (i + 1) * cpf[i] # Calcula a soma ponderada dos primeiros 9 dígitos do CPF
    
        soma %= 11 # Calcula o resto da divisão por 11 da soma
        
        # Verifica se o resto é 10
        if (soma == 10):
            soma = 0 # Ajusta o valor para 0
            
        # Verifica se o primeiro dígito verificador é válido
        if (soma == cpf[9]):
            soma = 0
            for i in range(9):
                soma += (9 - i) * cpf[i] # Calcula a soma ponderada dos primeiros 9 dígitos com pesos invertidos
            soma %= 11 # Calcula o resto da divisão por 11 da nova soma
            
            # Verifica se o resto é 10 
            if soma == 10:
                soma = 0 # Ajusta para 0
                
            # Verifica se o segundo dígito verificador é válido
            if soma == cpf[10]:
                print('CPF valido')
            else:
                print('CPF invalido')
        else:
            print('CPF invalido')

    # Captura o erro de fim de arquivo (EOF) para encerrar o loop
    except EOFError:
        break
                