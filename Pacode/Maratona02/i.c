#include <stdio.h>

int main(void) {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    // Calcula o total de números ímpares
    long long total_impares = (n + 1) / 2;

    if (k <= total_impares) {
        // A posição K está entre os números ímpares
        printf("%lld\n", 2 * k - 1);
    } 
    else {
        // A posição K está entre os números pares
        k -= total_impares; // Ajusta K para a posição dentro dos pares
        printf("%lld\n", 2 * k);
    }

    return 0;
}