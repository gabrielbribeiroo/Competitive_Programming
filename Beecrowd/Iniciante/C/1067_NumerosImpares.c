/*
Leia um valor inteiro X (1 <= X <= 1000). 
Em seguida, mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
*/

#include <stdio.h>
 
void LerValor(int *n) {
    scanf("%d", n);
}

void MostrarImparesAteN(int *n) {
    for (int i=1; i<=*n; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}
 
int main() {
    int num;
    
    LerValor(&num);
    MostrarImparesAteN(&num);
    
    return 0;
}