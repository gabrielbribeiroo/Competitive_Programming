/*
Faça um programa que leia dois inteiros: X e Z (devem ser lidos tantos valores para Z quantos necessários, até que seja digitado um valor maior do que X para ele). 
Conte quantos números inteiros devem ser somados em sequência (considerando o X nesta soma) para que a soma ultrapasse a Z, o mínimo possível. 
Escreva o valor final da contagem.
A entrada pode conter, por exemplo, os valores 21 21 15 30. 
Neste caso, é então assumido o valor 21 para X, enquanto os valores 21 e 15 devem ser desconsiderados, pois são menores ou iguais a X. 
Como o valor 30 está dentro da especificação (maior do que X), ele será válido e então deve-se processar os cálculos para apresentar na saída o valor 2, pois é a quantidade de valores somados para se produzir um valor maior do que 30 (21 + 22).
*/

#include <stdio.h>

void LerValores(int *x, int *z) {
    // Lê os valores de X e Z
    scanf("%d %d", x, z);
    
    // Enquanto Z for menor ou igual a X, lê um novo valor para Z
    while (*z <= *x) {
        scanf("%d", z);
    }
}

void CalcularSoma(int x, int z) {
    int cont = 0, soma = 0;
    
    // Calcula a soma dos números em sequência até ultrapassar Z
    while (soma < z) {
        soma += x;
        x++;
        cont++;
    } 
    
    // Imprime o valor final da contagem de valores para ultrapassar Z
    printf("%d\n", cont);
}

int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    CalcularSoma(num1, num2);
    
    return 0;
}