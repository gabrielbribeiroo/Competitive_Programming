/*
Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
Fórmula: DIFERENCA = (A * B - C * D).
*/

#include <stdio.h>
 
int main() {
    int a, b, c, d, diferenca;
    
    scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
    
    diferenca = ((a*b) - (c*d));
    
    printf("DIFERENCA = %d\n", diferenca);
    
    return 0;
}