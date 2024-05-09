/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e, cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
*/

#include <stdio.h>

void LerQuantidadeTeste(int *q) {
    scanf("%d", q);
}

unsigned long long int Fibonacci(int n) { // Função do tipo long long int para armazenar valores maiores 
    unsigned long long int num1 = 0, num2 = 1, aux;
    
    if (n == 0) {
        return num1;
    }
    
    if (n == 1) {
        return num2;
    }
    
    for (int i=2; i<=n; i++) {
        aux = num1 + num2;
        num1 = num2;
        num2 = aux;
    }
    
    return num2;
}

void CalcularFibonacci(int q) {
    int n;
    for (int i=0; i<q; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, Fibonacci(n));
    }
}

 
int main() {
    int qnt_teste;
    
    LerQuantidadeTeste(&qnt_teste);
    CalcularFibonacci(qnt_teste);

    return 0;
}