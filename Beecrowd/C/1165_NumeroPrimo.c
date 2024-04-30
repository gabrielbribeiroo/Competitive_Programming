/*
Na matemática, um número primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
*/

#include <stdio.h>

void LerQuantidadeTeste(int *n) {
    scanf("%d", n);
}

void EhPrimo(int num) {
    if (num <= 1) {
        printf("%d nao eh primo\n", num); // Números menores ou iguais a 1 não são primos
        return;
    }
        
    for (int i=2; i*i<=num; i++) {
        if (num % i == 0) {
            printf("%d nao eh primo\n", num); // Se encontrar algum divisor diferente de 1 e do próprio número, não é primo
            return;
        }
    }
        
    printf("%d eh primo\n", num); // Se passar por todos os testes, é primo
}

int main() {
    int num, qnt_teste;
 
    LerQuantidadeTeste(&qnt_teste);
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%d", &num);
        EhPrimo(num);
    }
    
    return 0;
}