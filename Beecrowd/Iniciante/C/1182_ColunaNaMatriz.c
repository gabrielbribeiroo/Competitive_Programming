/*
Neste problema, você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. 
A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.
*/

#include <stdio.h>

#define TAM 12 // Define uma constante de valor 12 (quantidade de linhas e colunas da matriz)

void LerColuna(int *c) {
    scanf("%d", c); // Lê a coluna que será calculada
}

void LerOperacao(char *op) {
    getchar(); // Limpa o buffer do teclado
    scanf("%c", op); // Lê a operacao que será feita
}

void LerMatriz(float m[][12]) {
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            scanf("%f", &m[i][j]); // Lê todos os elementos da matriz 12x12
        }
    }
}

void CalcularSoma(float m[][12], int c, float *soma) {
    for (int i=0; i<TAM; i++) {
        *soma += m[i][c]; // Soma todos os elementos da coluna escolhida
    }
}

void CalcularMedia(float soma, float *med) {
    *med = soma / TAM; // Calcula a média de todos os valores da coluna
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
    int col;
    char op;
    float matriz[TAM][TAM], soma = 0, media = 0;
    
    // Chamada de funções
    LerColuna(&col);
    LerOperacao(&op);
    LerMatriz(matriz);
    CalcularSoma(matriz, col, &soma);
    CalcularMedia(soma, &media);
    VerificarOperacao(op, soma, media);
    
    return 0;
}