/*
Faça um algoritmo para ler um valor A e um valor N. 
Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). 
Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.
*/

#include <stdio.h>

void LerValores(int *a, int *n) {
    scanf("%d %d", a, n); // Lê o valor de A
        
    // Verifica se N é negativo ou zero
    while (*n <= 0) {
        // Lê um novo valor para N
        scanf("%d", n);
    }
}

void CalcularSoma(int a, int n) {
    int soma = 0;
    for (int i=0; i<=n-1; i++) {
        soma += a + i; // Calcula a soma de A + i para cada i de 0 até N-1 e imprime o resultado
    }
    printf("%d\n", soma);
}
 
int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    CalcularSoma(num1, num2);
    
    return 0;
}