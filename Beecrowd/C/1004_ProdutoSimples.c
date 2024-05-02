/*
Leia dois valores inteiros. 
A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável prod. 
A seguir, mostre a variável prod com mensagem correspondente.
*/

#include <stdio.h>
 
int main() {
    int num1, num2, produto; // Cria as variáveis num1, num2 e produto
    
    scanf("%d", &num1); // Lê o valor da variável num1
    scanf("%d", &num2); // Lê o valor da variável num2
    
    produto = num1 * num2; // Atribui o produto de num1 com num2 à variável produto
    
    printf("PROD = %d\n", produto); // Mostra o resultado da multiplicação
    
    return 0;
}