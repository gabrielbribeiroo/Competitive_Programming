/*
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
*/

#include <stdio.h>

void LerValores(int *m, int *n) {
    scanf("%d %d", m, n);
}

void SomarValoresMN(int *m, int *n) {
    while ((*m > 0) && (*n > 0)) {
        int soma = 0;
        
        if (*m > *n) {
            int aux = *n;
            *n = *m;
            *m = aux;
        }
        
        for (int i=*m; i<=*n; i++) {
            printf("%d ", i);
            soma += i;
        }
        
        printf("Sum=%d\n", soma);
        
        scanf("%d %d", m, n);
    } 
}
 
int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    SomarValoresMN(&num1, &num2);
    
    return 0;
}