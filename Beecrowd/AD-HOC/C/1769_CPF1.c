/*
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
*/

#include <stdio.h>
#include <stdio.h>

int main() {
    int a[4], d[11]; // Arrays para armazenar os dígitos do CPF

    // Loop para ler e processar CPFs até o final da entrada
    while (scanf("%d.%d.%d-%d", &a[0], &a[1], &a[2], &a[3]) != EOF) {
        for (int i=0; i<11; ++i) {
            d[i] = 0; // Inicializa o array de dígitos com 0
        }

        // Extrai os dígitos das três primeiras partes do CPF
        for (int i=0; i<3; ++i) {
            int j = 2;

            // Extraindo cada dígito de a[i] e colocando no array d[]
            while (a[i]) {
                d[3 * i + j] = a[i] % 10;
                a[i] /= 10;
                --j;
            }
        }

        // Extrai os dígitos da quarta parte (os dois dígitos verificadores)
        d[9] = a[3] / 10; // Primeiro dígito verificador
        d[10] = a[3] % 10; // Segundo dígito verificador

        // Verificação do primeiro dígito verificador (d[9])
        int soma = 0;
        for (int i=0; i<9; ++i) {
            soma += (i + 1) * d[i];
        }
        soma %= 11;
        if (soma == 10)
            soma = 0;

        // Verifica se o primeiro dígito verificador está correto
        if (soma == d[9]) {
            // Verificação do segundo dígito verificador (d[10])
            soma = 0;
            for (int i=0; i<9; ++i) {
                soma += (9 - i) * d[i];
            }
            soma %= 11;
            if (soma == 10)
                soma = 0;

            // Verifica se o segundo dígito verificador está correto
            if (soma == d[10]) {
                printf("CPF valido\n");
            } 
            else {
                printf("CPF invalido\n");
            }
        }
        else {
            printf("CPF invalido\n");
        }
    }

    return 0;
}