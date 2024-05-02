/*
Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima "X = ". 
*/

#include <stdio.h>
 
int main() {
    int a, b, soma;
    
    scanf("%d", &a); // Lê o valor da variável a
    scanf("%d", &b); // Lê o valor da variável b
    
    soma = a + b; // Atribui o valor da soma de a com b, à variável soma
     
    printf("X = %d\n", soma); // Mostra o resultado da soma 
    
    return 0;
}
