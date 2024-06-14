/*
Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.
*/

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n); // Leitura da quantidade de números lidos
    
    int cont[2001] = {0}; // Array para contar as ocorrências, inicializado a 0
    int valores[n]; // Array para armazenar os valores lidos
    
    for (int i=0; i<n; i++) {
        scanf("%d", &valores[i]);
        cont[valores[i]]++;
    }
    
    for (int i=0; i<2001; i++) {
        if (cont[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, cont[i]);
        }    
    }
    
    return 0;
}