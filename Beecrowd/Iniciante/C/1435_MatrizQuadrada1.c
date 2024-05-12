/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros.
Construa a matriz, de acordo com o exemplo abaixo.
Exemplo de Entrada	Exemplo de Saída
1                   1
2                    
3                   1   1
4                   1   1
5                   
0                   1   1   1
                    1   2   1
                    1   1   1
                    
                    1   1   1   1
                    1   2   2   1
                    1   2   2   1
                    1   1   1   1
                    
                    1   1   1   1   1
                    1   2   2   2   1
                    1   2   3   2   1
                    1   2   2   2   1
                    1   1   1   1   1
*/

#include <stdio.h>
 
void GerarMatriz(int n) {
    int matriz[n][n];
    int i, j, meio;
    
    meio = n % 2 == 0 ? n/2 : n/2 + 1; // Se o número da ordem for divisível por 2, o meio receberá o quociente dividido por 2, se não receberá o quociente mais 1
    
    // Cálculo dos elementos da matriz com o meio
    for (i=0; i<meio; i++) {
        for (j=i; j<n-i; j++) {
            matriz[i][j] = matriz[j][i] = matriz[n-i-1][j] = matriz[j][n-i-1] = i+1;           
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