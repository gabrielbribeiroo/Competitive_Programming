/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
Escreva, para cada X e Y, uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.
*/

#include <stdio.h>

void LerValores(int *x, int *y) {
    scanf("%d %d", x, y);
}

void OrdenarValoresXY(int *x, int *y) {
    while (*x != *y) {
        if (*x > *y) {
            printf("Decrescente\n");
        }
        else {
            printf("Crescente\n");
        }
        scanf("%d %d", x, y);
    } 
}
 
int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    OrdenarValoresXY(&num1, &num2);
    
    return 0;
}