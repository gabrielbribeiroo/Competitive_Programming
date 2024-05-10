/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média, considerando somente aqueles elementos que estão acima da diagonal secundária da matriz.
*/

#include <stdio.h>
 
#define TAM 12 // Define uma constante de valor 12 (quantidade de linhas e colunas da matriz)

void LerOperacao(char *op) {
    scanf(" %c", op); // Lê a operacao que será feita
    getchar(); // Limpa o buffer do teclado
}

void LerMatriz(float m[][12]) {
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            scanf("%f", &m[i][j]); // Lê todos os elementos da matriz 12x12
        }
    }
}

void CalcularSoma(float m[][12], float *soma) {
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if (i + j < TAM - 1) { // Verifica se o elemento está acima da diagonal secundária
                *soma += m[i][j]; // Soma todos os elementos acima da diagonal secundária
            }
        }
    }
}

void CalcularMedia(float soma, float *med) {
    int cont = 0;
    
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            if (i + j > TAM - 1) {
                cont++; // Conta a quantidade de elementos acima da diagonal secundária
            }
        }
    }
    
    *med = soma / cont; // Calcula a média de todos os valores acima da diagona secundária
}

void VerificarOperacao(char op, float soma, float med) {
    switch(op) {
        case 'S':
            printf("%.1f\n", soma); // Mostra o valor da soma
            break;
        case 'M':
            printf("%.1f\n", med); // Mostra o valor da média
            break;
        default:
            break;
    }
}

 
int main() {
    char op;
    float matriz[TAM][TAM], soma = 0, media = 0;
    
    // Chamada de funções
    LerOperacao(&op);
    LerMatriz(matriz);
    CalcularSoma(matriz, &soma);
    CalcularMedia(soma, &media);
    VerificarOperacao(op, soma, media);
    
    return 0;
}