/*
Leia dois valores inteiros M e N, indefinidamente. 
A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. 
Utilize uma variável apropriada, pois o cálculo pode resultar em um valor com mais de 15 dígitos.
*/

#include <stdio.h>
 
unsigned long long Fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Fatorial de 0 e 1 é 1
    }
    else {
        unsigned long long result = 1;
        for (int i=2; i<=n; i++) {
            result *= i; // Calcula o fatorial dos números maiores que 1
        }
        return result;
    }
}
 
int main() {
    int m, n;
    
    while (scanf("%d %d", &m, &n) != EOF) {
        unsigned long long soma = Fatorial(m) + Fatorial(n);
        printf("%llu\n", soma); // Mostra a soma dos fatoriais dos números lidos
    }
    
    return 0;
}