/*
Og é um homem das cavernas com vários filhos e filhas, e ele quer contar todos eles. 
Og conta seus filhos com sua mão esquerda e suas filhas com sua mão direita.
Entretanto, Og não é inteligente, e não sabe somar os dois números. 
Assim, ele pediu para você escrever um programa que realize a soma.
*/

#include <stdio.h>
 
int main() {
    int left, right;
    
    while (1) {
        scanf("%d %d", &left, &right); // Leitura dos números de filhos e filhas
        
        // Verifica a condição de parada
        if (left==0 && right==0) {
            break;
        }
        
        printf("%d\n", left+right); // Imprime a soma do número de filhos       
    }
    
    return 0;
}