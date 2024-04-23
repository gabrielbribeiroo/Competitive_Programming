/*
Leia 2 valores inteiros X e Y. 
A seguir, calcule e mostre a soma dos números impares entre eles.
*/

#include <stdio.h>

void LerValores(int *x, int *y) {
    scanf("%d %d", x, y);
}

int SomarImparesXY(int x, int y) {
    int soma = 0;
    
    if (x > y) {
        int aux = x;
        x = y;
        y = aux;
        
    }
    
    for (int i=x+1; i<y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    return soma;
}

void MostrarSomaImparesXY(int *s) {
    printf("%d\n", *s);
}

int main() {
    int num1, num2, soma;
    
    LerValores(&num1, &num2);
    soma = SomarImparesXY(num1, num2);
    MostrarSomaImparesXY(&soma);
 
    return 0;
}