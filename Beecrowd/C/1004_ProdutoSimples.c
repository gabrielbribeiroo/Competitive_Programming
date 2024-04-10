/*
Leia dois valores inteiros. 
A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável prod. 
A seguir, mostre a variável prod com mensagem correspondente.
*/

#include <stdio.h>
 
int main() {
    int num1, num2, produto;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    produto = num1 * num2;
    
    printf("PROD = %d\n", produto);
    
    return 0;
}