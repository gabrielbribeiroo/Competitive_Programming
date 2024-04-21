/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.
*/

#include <stdio.h>

void MostrarParesAte100() {
    for (int i = 2; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    MostrarParesAte100();
    
    return 0;
}