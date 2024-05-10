/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média, considerando somente aqueles elementos que estão na área direita da matriz.
*/

#include <stdio.h>

#define TAM 12 // Define uma constante de valor 12 (quantidade de linhas e colunas da matriz)
 
void LerOperacao(char *op) {
    scanf(" %c", op); // Lê a operacao que será feita
    getchar(); // Limpa o buffer do teclado
}

void LerMatriz(double m[][12]) {
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            scanf("%lf", &m[i][j]); // Lê todos os elementos da matriz 12x12
        }
    }
}

void CalcularSoma(double m[][12], double *soma) {
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if ((j>i) && (i+j>TAM-1)) { // Verifica se o elemento está acima da diagonal principal e abaixo da secundária duas diagonais simultaneamente
                *soma += m[i][j]; // Soma todos os elementos da área direita
            }
        }
    }
}

void CalcularMedia(double soma, double *med) {
    int cont = 0;
    
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if ((j>i) && (i+j>TAM-1)) {
                cont++; // Conta a quantidade de elementos acima da diagonal principal e abaixo da secundária
            }
        }
    }
    
    *med = soma / cont; // Calcula a média de todos os valores da área direita
}

void VerificarOperacao(char op, double soma, double med) {
    switch(op) {
        case 'S':
            printf("%.1lf\n", soma); // Mostra o valor da soma
            break;
        case 'M':
            printf("%.1lf\n", med); // Mostra o valor da média
            break;
        default:
            break;
    }
}

int main() {
    char op;
    double matriz[TAM][TAM], soma = 0, media = 0;
    
    // Chamada de funções
    LerOperacao(&op);
    LerMatriz(matriz);
    CalcularSoma(matriz, &soma);
    CalcularMedia(soma, &media);
    VerificarOperacao(op, soma, media);
    
    return 0;   
}