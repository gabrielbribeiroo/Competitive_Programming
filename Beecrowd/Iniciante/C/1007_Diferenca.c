/*
Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
Fórmula: DIFERENCA = (A * B - C * D).
*/

#include <stdio.h>
 
int main() {
    int a, b, c, d, diferenca; // Declara as variáveis a, b, c, d e diferenca do tipo inteiro
    
    scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d); // Lê as variáveis a, b, c e d
    
    diferenca = ((a*b) - (c*d)); // A variável diferença recebe a subtração dos produtos de a com b e c com d
    
    printf("DIFERENCA = %d\n", diferenca); // Mostra a diferença
    
    return 0;
}