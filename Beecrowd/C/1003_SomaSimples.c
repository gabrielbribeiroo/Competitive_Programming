/*
Leia dois valores inteiros, no caso para variáveis a e b. 
A seguir, calcule a soma entre elas e atribua à variável soma. 
A seguir, escrever o valor desta variável.
*/

#include <stdio.h>
 
int main() {
    int a, b, soma;
    
    scanf("%d\n%d", &a, &b);
    
    soma = a + b;
    
    printf("SOMA = %d\n", soma);
    
    return 0;
}