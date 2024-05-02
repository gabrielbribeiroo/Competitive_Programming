/*
Leia dois valores inteiros, no caso para variáveis a e b. 
A seguir, calcule a soma entre elas e atribua à variável soma. 
A seguir, escrever o valor desta variável.
*/

#include <stdio.h>
 
int main() {
    int a, b, soma; // Cria as variáveis a, b e soma do tipo inteiro
    
    scanf("%d\n%d", &a, &b); // Lê os valores das variáveis a e b
    
    soma = a + b; // Atribui o valor da soma de a com b, à variável soma
    
    printf("SOMA = %d\n", soma); // Mostra o resultado da soma 
    
    return 0;
}