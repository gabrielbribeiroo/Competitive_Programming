/*
Escreva um programa que leia um valor inteiro N. 
N * 2 linhas de saída serão apresentadas na execução do programa, seguindo a lógica do exemplo abaixo. 
Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.

Exemplo de Entrada	Exemplo de Saída
5                       1 1 1
                        1 2 2
                        2 4 8
                        2 5 9
                        3 9 27
                        3 10 28
                        4 16 64
                        4 17 65
                        5 25 125
                        5 26 126
*/


#include <stdio.h>
#include <math.h>

void LerQuantidadeLinhas(int *n) {
    scanf("%d", n); // Ler a metade da quantidade de linhas que serão exibidas
}

void MostrarQuadradosCubos(int n) {
    int j = 0; // Usado para contar até 2, depois é reiniciado
    int cont1 = 1, cont2 = 1, cont3 = 1; // Contadores das colunas 1, 2 e 3

    for (int i=1; i<=2*n; i++) {
        printf("%d %d %d\n", cont1, cont2, cont3);
        cont2++;
        cont3++;
        j++;
        if (j == 2) {
            j = 0; // Reinicia a contagem da variável
            cont1++;
            cont2 = pow(cont1, 2);
            cont3 = pow(cont1, 3);
        }
    }
}

int main() {
    int qnt_linhas;

    LerQuantidadeLinhas(&qnt_linhas);
    MostrarQuadradosCubos(qnt_linhas);

    return 0;
}