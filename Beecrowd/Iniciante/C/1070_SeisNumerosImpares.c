/*
Leia um valor inteiro X. 
Em seguida, apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
*/

#include <stdio.h>

#define QUANTIDADE 6
 
void LerValor(int *x) {
    scanf("%d", x);
}

void Mostrar6ImparesDepoisN(int *x) {
    for (int i=0; i<QUANTIDADE; i++) {
        if (*x % 2 != 0) {
            printf("%d\n", *x);
        } 
        else {
            (*x)++;
            printf("%d\n", *x);
        }
         *x += 2; 
    }
}
 
int main() {
    int num;
    
    LerValor(&num);
    Mostrar6ImparesDepoisN(&num);
    
    return 0;
}