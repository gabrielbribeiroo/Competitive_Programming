/*
Escreva um programa que leia um valor inteiro N. 
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.
*/

#include <stdio.h>

void LerQuantidadeLinhas(int *n) {
    scanf("%d", n);
}

void MostrarLinhasPUM(int n) {
    for (int i=0; i<n; i++) {
        printf("%d %d %d PUM\n", (i*4)+1, (i*4)+2, (i*4)+3);
    }
}
 
int main() {
    int qnt_linhas;
    
    LerQuantidadeLinhas(&qnt_linhas);
    MostrarLinhasPUM(qnt_linhas);
    
    return 0;
}