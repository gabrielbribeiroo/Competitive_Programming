/*
Mariazinha sabe que um número primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7, sem que haja resto.
Então, ela pediu para você fazer um programa que aceite diversos valores e diga se cada um destes valores é primo ou não.
Acontece que a paciência não é uma das virtudes de Mariazinha, portanto ela quer que a execução de todos os casos de teste que ela selecionar (instâncias) aconteçam no tempo máximo de um segundo, pois ela odeia esperar.
*/

#include <stdio.h>
#include <math.h>

// Função para verificar se um número é primo
int is_prime(unsigned int n) {
    if (n <= 1) 
        return 0; // Números menores que 1 não são primos
    if (n == 2) 
        return 1; // 2 é primo
    if (n % 2 == 0) 
        return 0; // Números pares maiores que 2 não são primos
    
    for (unsigned int i=3; i<=sqrt(n); i+=2) {
        if (n % i == 0)
            return 0; // Números com divisores menores que sua raiz não são primos
    }    
    
    return 1; // É primo
}
 
int main() {
    int qnt_teste;
    
    scanf("%d", &qnt_teste); // Lê o número de casos de teste
    
    for (int i=0; i<qnt_teste; i++) {
        unsigned int num;
        scanf("%u", &num); // Lê um número para verificar se é primo
        
        // Mostra o resultado da verificação
        if (is_prime(num)) {
            printf("Prime\n");    
        }
        else {
            printf("Not Prime\n");
        }
    }
    
    return 0;
}