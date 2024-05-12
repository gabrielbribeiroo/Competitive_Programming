/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros.
Construa a matriz, de acordo com o exemplo abaixo.
Exemplo de Entrada	Exemplo de Saída
1                   1
2
3                   1   2
4                   2   1     
5
0                   1   2   3
                    2   1   2
                    3   2   1

                    1   2   3   4
                    2   1   2   3
                    3   2   1   2
                    4   3   2   1

                    1   2   3   4   5
                    2   1   2   3   4
                    3   2   1   2   3
                    4   3   2   1   2
                    5   4   3   2   1
*/

#include <stdio.h>
 
void GerarMatriz(int n) {
    if (n == 0) {
        return; // Não gera matriz se a ordem for zero
    }
    
    int matriz[n][n];
    int i, j;
    
    // Cálculo dos elementos da matriz
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            matriz[i][j] = (i < j) ? j-i+1 : i-j+1; // Se o número da linha for menor que o da coluna, o elemento é a coluna menos a linha, se não o contrário           
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d", matriz[i][j]); // Mostra a matriz
            if (j < n-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int ordem;
    
    while (1) {
        scanf("%d", &ordem); // Lê o tamanho da matriz
        if (ordem == 0) {
            break; // Para a execução, caso a ordem for 0
        }

        GerarMatriz(ordem);
    }
    
    return 0;
}