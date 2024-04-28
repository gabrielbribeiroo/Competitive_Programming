/*
Escreva um algoritmo que leia 2 valores inteiros X e Y.
Calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
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

int SomarValoresXY(int x, int y) {
    int soma = 0;
    
    for (int i=x; i<y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }
    
    return soma;
}

void MostrarSomaValoresXY(int x, int y) {
    printf("%d\n", SomarValoresXY(x, y));
}
 
int main() {
    int num1, num2;
    
    LerValores(&num1, &num2);
    OrdenarValores(&num1, &num2);
    MostrarSomaValoresXY(num1, num2);
    
    return 0;
}