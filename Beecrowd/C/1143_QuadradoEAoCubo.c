/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.
*/

#include <stdio.h>

void LerQuantidadeLinhas(int *n) {
    scanf("%d", n);
}

void MostrarQuadradosCubos(int n) {
    for (int i=1; i<=n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
}
 
int main() {
    int qnt_linhas;
    
    LerQuantidadeLinhas(&qnt_linhas);
    MostrarQuadradosCubos(qnt_linhas);
    
    return 0;
}