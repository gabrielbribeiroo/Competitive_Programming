/*
Escreva um programa que leia 2 valores X e Y.
Imprima todos os valores, entre eles, cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.
*/

#include <stdio.h>

void LerValores(int *x, int *y) {
    scanf("%d %d", x, y);
}

void OrdenarValores(int *x, int *y) {
    if (*x > *y) {
        int aux = *x;
        *x = *y;
        *y = aux;
    }
}

void MostrarValoresXY(int x, int y) {
    for (int i=x+1; i<y; i++) {
        if ((i % 5 == 2) || (i % 5 == 3)) {
            printf("%d\n", i);
        }
    }
}
 
int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    OrdenarValores(&num1, &num2);
    MostrarValoresXY(num1, num2);
    
    return 0;
}